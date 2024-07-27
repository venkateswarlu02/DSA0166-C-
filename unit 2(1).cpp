#include <iostream>
using namespace std;


void printDetails(string name, int age = 18, string country = "Unknown");

int main() {
    
    printDetails("Alice", 25, "USA");

    
    printDetails("Bob", 30);

    
    printDetails("Charlie");

    return 0;
}


void printDetails(string name, int age, string country) {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Country: " << country << endl;
}

