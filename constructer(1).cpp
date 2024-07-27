#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int age;

public:
   
    Student(std::string n, int a) : name(n), age(a) {
        std::cout << "Student object created: " << name << " (" << age << ")" << std::endl;
    }

    
    ~Student() {
        std::cout << "Student object destroyed: " << name << " (" << age << ")" << std::endl;
    }

   
    void displayInfo() {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    Student student1("John Doe", 20);
    student1.displayInfo();

    Student student2("Jane Smith", 22);
    student2.displayInfo();

    return 0;
}
