#include <iostream>
using namespace std;

void findGreatest(int* a, int* b, int* c, int* greatest) {
    if (*a > *b && *a > *c) {
        *greatest = *a;
    } else if (*b > *a && *b > *c) {
        *greatest = *b;
    } else {
        *greatest = *c;
    }
}

int main() {
    int num1, num2, num3;
    int greatest;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    
    int* ptr1 = &num1;
    int* ptr2 = &num2;
    int* ptr3 = &num3;
    int* ptrGreatest = &greatest;

    
    findGreatest(ptr1, ptr2, ptr3, ptrGreatest);

    
    cout << "The greatest of the three numbers is: " << greatest << endl;

    return 0;
}
