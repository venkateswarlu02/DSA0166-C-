#include <iostream>
#include <conio.h>
#include <dos.h> // For DOS interrupt handling

using namespace std;

// Function prototypes
void mouseISR();
void initializeMouse();
void getMouseState();
void cleanUp();

// Global variables to store mouse state
volatile int mouseX = 0;
volatile int mouseY = 0;
volatile bool leftButtonDown = false;
volatile bool rightButtonDown = false;

// Mouse ISR (Interrupt Service Routine)
void mouseISR() {
    union REGS r;
    r.h.ah = 0x03;    // Function to get mouse position and button status
    int86(0x33, &r, &r); // Call mouse interrupt 0x33

    mouseX = r.x.cx;  // X position
    mouseY = r.x.dx;  // Y position
    unsigned char buttonStatus = r.h.al; // Read button status

    leftButtonDown = (buttonStatus & 0x01) != 0; // Left button
    rightButtonDown = (buttonStatus & 0x02) != 0; // Right button
}

void initializeMouse() {
    // Set up mouse ISR
    _dos_setvect(0x33, mouseISR);
    // Initialize the mouse
    union REGS r;
    r.h.ah = 0x00;    // Function to initialize the mouse
    int86(0x33, &r, &r);
}

void getMouseState() {
    // Print mouse status
    cout << "Mouse Position: (" << mouseX << ", " << mouseY << ")" << endl;
    cout << "Left Button: " << (leftButtonDown ? "Pressed" : "Released") << endl;
    cout << "Right Button: " << (rightButtonDown ? "Pressed" : "Released") << endl;
}

void cleanUp() {
    // Restore the original mouse interrupt handler
    _dos_setvect(0x33, nullptr);
    // Hide the mouse
    union REGS r;
    r.h.ah = 0x02;    // Function to hide the mouse
    int86(0x33, &r, &r);
}

int main() {
    initializeMouse();

    cout << "Mouse tracking started. Press any key to stop." << endl;

    while (!_kbhit()) { // Loop until a key is pressed
        getMouseState();
        delay(500); // Delay for 500ms
    }

    cleanUp();
    return 0;
}

