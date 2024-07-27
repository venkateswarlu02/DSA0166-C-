#include <iostream>
#include <string>
using namespace std;


class Person {
protected:
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


class Academic {
protected:
    float gpa;

public:
    void setAcademicData(float g) {
        gpa = g;
    }

    void displayAcademicData() const {
        cout << "GPA: " << gpa << "\n";
    }
};


class Student : public Person, public Academic {
private:
    string studentID;

public:
    void setStudentData(const string& n, int a, float g, const string& id) {
        setPersonData(n, a);   
        setAcademicData(g);    
        studentID = id;
    }

    void displayStudentData() const {
        displayPersonData();   
        displayAcademicData(); 
        cout << "Student ID: " << studentID << "\n";
    }
};

int main() {
    Student student;

    string name;
    int age;
    float gpa;
    string studentID;

    cout << "Enter name: ";
    getline(cin, name);
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter GPA: ";
    cin >> gpa;
    cin.ignore();  // To ignore the newline character left in the buffer
    cout << "Enter student ID: ";
    getline(cin, studentID);

    student.setStudentData(name, age, gpa, studentID);

    cout << "\nStudent Details:\n";
    student.displayStudentData();

    return 0;
}
