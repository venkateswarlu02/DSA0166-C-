#include <iostream>
#include <vector>

class Matrix {
private:
    std::vector std::vector<<int>> data;
    int rows;
    int cols;
public:
   
    Matrix(int r, int c) : rows(r), cols(c) {
        data.resize(rows, std::vector<int>(cols, 0));
    }

   
    void insertElement(int r, int c, int value) {
        if (r >= 0 && r < rows && c >= 0 && c < cols) {
            data[r][c] = value;
        } else {
            std::cerr << "Error: Invalid index\n";
        }
    }

    
    int retrieveElement(int r, int c) const {
        if (r >= 0 && r < rows && c >= 0 && c < cols) {
            return data[r][c];
        } else {
            std::cerr << "Error: Invalid index\n";
            return -1;
        }
    }

   
    void display() const {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                std::cout << data[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }
};

int main() {
   
    Matrix mat(3, 3);

   
    mat.insertElement(0, 0, 1);
    mat.insertElement(0, 1, 2);
    mat.insertElement(0, 2, 3);
    mat.insertElement(1, 0, 4);
    mat.insertElement(1, 1, 5);
    mat.insertElement(1, 2, 6);
    mat.insertElement(2, 0, 7);
    mat.insertElement(2, 1, 8);
    mat.insertElement(2, 2, 9);

    
    std::cout << "Matrix:" << std::endl;
    mat.display();

   
    int value = mat.retrieveElement(1, 1);
    std::cout << "Element at (1, 1): " << value << std::endl;

    return 0;
}

