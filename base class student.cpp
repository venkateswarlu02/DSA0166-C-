#include <iostream>
#include <string>

using namespace std;

class Person {
protected:
    string name;
    int age;
    char gender;

public:
    Person(string n = "", int a = 0, char g = ' ') {
        name = n;
        age = a;
        gender = g;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
    }

    void setName(string n) {
        name = n;
    }

    void setAge(int a) {
        age = a;
    }

    void setGender(char g) {
        gender = g;
    }
};

class Student : public Person {
private:
    int rollNumber;
    string className;

public:
    Student(string n = "", int a = 0, char g = ' ', int rn = 0, string cn = "") : Person(n, a, g) {
        rollNumber = rn;
        className = cn;
    }

    void display() {
        Person::display();
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Class: " << className << endl;
    }

    void setRollNumber(int rn) {
        rollNumber = rn;
    }

    void setClassName(string cn) {
        className = cn;
    }
};

class Teacher : public Person {
private:
    string subject;
    double salary;

public:
    Teacher(string n = "", int a = 0, char g = ' ', string s = "", double sal = 0.0) : Person(n, a, g) {
        subject = s;
        salary = sal;
    }

    void display() {
        Person::display();
        cout << "Subject: " << subject << endl;
        cout << "Salary: " << salary << endl;
    }

    void setSubject(string s) {
        subject = s;
    }

    void setSalary(double sal) {
        salary = sal;
    }
};

int main() {
    Student s("John Doe", 20, 'M', 123, "XII");
    Teacher t("Jane Doe", 30, 'F', "Math", 50000.0);

    cout << "Student Information:" << endl;
    s.display();

    cout << "\nTeacher Information:" << endl;
    t.display();

    return 0;
}
