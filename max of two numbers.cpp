#include <iostream>
using namespace std;


class MaxFinder;


int findMax(const MaxFinder &obj);


class MaxFinder {
private:
    int num1;
    int num2;

public:
    
    MaxFinder(int n1, int n2) : num1(n1), num2(n2) {}

    
    friend int findMax(const MaxFinder &obj);
};


int findMax(const MaxFinder &obj) {
    
    return (obj.num1 > obj.num2) ? obj.num1 : obj.num2;
}


int main() {
    
    MaxFinder mf(10, 20);

    
    int maxNumber = findMax(mf);

    
    cout << "Maximum number is: " << maxNumber << endl;

    return 0;
}

