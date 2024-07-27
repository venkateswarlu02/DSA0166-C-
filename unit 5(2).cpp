#include <iostream>
#include <string>
using namespace std;


class Person {
private:
    string name;
    int age;

public:
    void setPersonData(const string& n, int a) {
        name = n;
        age = a;
    }

    void displayPersonData() const {
        cout << "Name: " << name << "\n";
        cout << "Age: " << age << "\n";
    }
};


class Student : private Person {
private:
    string studentID;

public:
    void setStudentData(const string& n, int a, const string& id) {
        setPersonData(n, a);  
        studentID = id;
    }

    void displayStudentData() const {
        displayPersonData();  
        cout << "Student ID: " << studentID << "\n";
    }
};

int main() {
    Student student;

    string name;
    int age;
    string studentID;

    cout << "Enter name: ";
    getline(cin, name);
    cout << "Enter age: ";
    cin >> age;
    cin.ignore();  
    cout << "Enter student ID: ";
    getline(cin, studentID);

    student.setStudentData(name, age, studentID);

    cout << "\nStudent Details:\n";
    student.displayStudentData();

    return 0;
}
