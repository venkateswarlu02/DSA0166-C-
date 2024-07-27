#include <iostream>

using namespace std;

class DivisibleByNine {
public:
    DivisibleByNine() {
        
        calculateAndDisplay();
    }

    ~DivisibleByNine() {
       
        
    }

private:
    void calculateAndDisplay() {
        int count = 0;
        int sum = 0;
        
        cout << "Numbers between 100 and 200 divisible by 9 are: ";
        for (int i = 101; i < 200; ++i) {
            if (i % 9 == 0) {
                cout << i << " ";
                sum += i;
                ++count;
            }
        }
        
        cout << endl;
        cout << "Total count of numbers divisible by 9: " << count << endl;
        cout << "Sum of numbers divisible by 9: " << sum << endl;
    }
};

int main() {
    
    DivisibleByNine dbn;
    
    return 0;
}

