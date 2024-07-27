#include <iostream>
using namespace std;

class Cube {
public:
    
    Cube() {
        int num;
        cout << "Enter an integer: ";
        cin >> num;
        displayCubes(num);
    }

    
    Cube(int num) {
        displayCubes(num);
    }

private:
    void displayCubes(int num) {
        for (int i = 1; i <= num; ++i) {
            cout << "Cube of " << i << " is: " << (i * i * i) << endl;
        }
    }
};

int main() {
    Cube c1;        
    cout << "Enter another integer: ";
    int n;
    cin >> n;
    Cube c2(n);     

    return 0;
}

