#include <iostream>

using namespace std;

class FloydsTriangle {
private:
    int rows;
    int** triangle; 

public:
    
    FloydsTriangle(int r) : rows(r) {
        
        triangle = new int*[rows];
        for (int i = 0; i < rows; ++i) {
            triangle[i] = new int[i + 1];
        }

        
        int num = 1;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j <= i; ++j) {
                triangle[i][j] = num++;
            }
        }

        
        printTriangle();
    }

    
    ~FloydsTriangle() {
        for (int i = 0; i < rows; ++i) {
            delete[] triangle[i];
        }
        delete[] triangle;
    }

    
    void printTriangle() const {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j <= i; ++j) {
                cout << triangle[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int numRows;

    cout << "Enter the number of rows for Floyd's Triangle: ";
    cin >> numRows;

    
    FloydsTriangle ft(numRows);

    return 0;
}

