#include <iostream>

using namespace std;

class TrianglePattern {
public:
    
    TrianglePattern(int num) : number(num), rows(num) {
        printPattern();
    }
    
    
    TrianglePattern(int num, int r) : number(num), rows(r) {
        printPattern();
    }

    
    ~TrianglePattern() {
        
    }

private:
    int number; 
    int rows;   

    void printPattern() {
        for (int i = 1; i <= rows; ++i) {
            for (int j = 1; j <= i; ++j) {
                cout << number << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int num, rows;
    
    
    cout << "Enter the number to print in the pattern: ";
    cin >> num;
    cout << "Enter the number of rows for the triangle: ";
    cin >> rows;

    
    TrianglePattern tp1(num);         
    TrianglePattern tp2(num, rows);   

    return 0;
}

