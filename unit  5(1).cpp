#include <iostream>
#include <string>
using namespace std;


class Person {
protected:
    string name;
    int age;

public:
    void readPerson() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
        cin.ignore();  
    }

    void printPerson() const {
        cout << "Name: " << name << "\n";
        cout << "Age: " << age << "\n";
    }
};


class Student : public Person {
private:
    string studentID;

public:
    void readStudent() {
        readPerson();  
        cout << "Enter student ID: ";
        getline(cin, studentID);
    }

    void printStudent() const {
        printPerson();  
        cout << "Student ID: " << studentID << "\n";
    }
};

int main() {
    Student student;
    
    student.readStudent();
    cout << "\nStudent Details:\n";
    student.printStudent();

    return 0;
}
