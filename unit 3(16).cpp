#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;

public:
    
    Student() {
        name = "Unknown";
    }

    
    Student(const string& studentName) {
        name = studentName;
    }

    
    void displayName() const {
        cout << "Student Name: " << name << endl;
    }
};

int main() {
    
    Student student1; 
    Student student2("John Doe"); 

    
    student1.displayName();
    student2.displayName();

    return 0;
}

