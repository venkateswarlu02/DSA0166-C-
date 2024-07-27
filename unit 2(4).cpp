#include <iostream>
using namespace std;

// Function to calculate simple interest
float calculateSimpleInterest(float principal, float rate, int time) {
    return (principal * rate * time) / 100.0;
}

// Function to get user input and determine interest rate
void getCustomerDetailsAndCalculateInterest() {
    float principal;
    int time;
    char isSenior;

    // Get input from the user
    cout << "Enter the principal amount: ";
    cin >> principal;

    cout << "Enter the time (in years): ";
    cin >> time;

    cout << "Are you a senior citizen? (y/n): ";
    cin >> isSenior;

    // Determine the rate of interest based on senior citizen status
    float rate = (isSenior == 'y' || isSenior == 'Y') ? 12.0 : 10.0;

    // Calculate and display the simple interest
    float interest = calculateSimpleInterest(principal, rate, time);
    cout << "The simple interest is: " << interest << endl;
}

int main() {
    // Get customer details and calculate interest
    getCustomerDetailsAndCalculateInterest();

    return 0;
}

