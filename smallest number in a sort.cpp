#include <iostream>
using namespace std;

int findMissingElement(int arr[], int size) {
    int index = 0;
    int expectedElement = 0;

   
    while (index < size) {
     
        if (arr[index] != expectedElement) {
            return expectedElement; 
        }
      
        index++;
        
        expectedElement++;
    }

   
    return expectedElement;
}

int main() {
    int arr[] = {0, 1, 2, 3, 5, 6, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    int missingElement = findMissingElement(arr, size);
    cout << "The smallest missing element is: " << missingElement << endl;

    return 0;
}

