#include <iostream>
using namespace std;

class Triangle {
public:
    // Default constructor
    Triangle() {
        int rows;
        cout << "Enter the number of rows: ";
        cin >> rows;
        printPattern(rows);
    }

    // Parameterized constructor
    Triangle(int rows) {
        printPattern(rows);
    }

private:
    void printPattern(int rows) {
        for (int i = 1; i <= rows; ++i) {
            for (int j = 1; j <= i; ++j) {
                cout << i << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Triangle t1; 
    cout << "Enter another number of rows: ";
    int n;
    cin >> n;
    Triangle t2(n); 

    return 0;
}

