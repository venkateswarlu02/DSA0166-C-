#include <iostream>
#include <vector>
using namespace std;


class Matrix {
private:
    int rows;
    int cols;
    vector<vector<int> > mat; 

public:
    
    Matrix(int r, int c) : rows(r), cols(c) {
        
        mat.resize(rows, vector<int>(cols, 0));
    }

    
    void insertElement(int r, int c, int value) {
       
        if (r >= 0 && r < rows && c >= 0 && c < cols) {
            mat[r][c] = value;
            cout << "Element inserted successfully." << endl;
        } else {
            cout << "Invalid indices. Element insertion failed." << endl;
        }
    }

    
    int getElement(int r, int c) const {
        
        if (r >= 0 && r < rows && c >= 0 && c < cols) {
            return mat[r][c];
        } else {
            cout << "Invalid indices. Returning 0." << endl;
            return 0; 
        }
    }

    
    void displayMatrix() const {
        cout << "Matrix:" << endl;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }
};


int main() {
    
    Matrix matrix(3, 3);

    
    matrix.insertElement(0, 0, 1);
    matrix.insertElement(0, 1, 2);
    matrix.insertElement(0, 2, 3);
    matrix.insertElement(1, 0, 4);
    matrix.insertElement(1, 1, 5);
    matrix.insertElement(1, 2, 6);
    matrix.insertElement(2, 0, 7);
    matrix.insertElement(2, 1, 8);
    matrix.insertElement(2, 2, 9);

    
    matrix.displayMatrix();

    
    cout << "Element at (1,1): " << matrix.getElement(1, 1) << endl;
    cout << "Element at (0,2): " << matrix.getElement(0, 2) << endl;
    cout << "Element at (2,2): " << matrix.getElement(2, 2) << endl;
    cout << "Element at (3,3): " << matrix.getElement(3, 3) << endl;  

    return 0;
}

