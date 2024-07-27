#include <iostream>
#include <string>
#include <vector>

class Student {
private:
    std::string name;
    std::string regNo;
    int mark1, mark2, mark3;
    double average;
    char grade;

public:
    
    void readDetails() {
        std::cout << "Enter name: ";
        std::cin >> name;
        std::cout << "Enter registration number: ";
        std::cin >> regNo;
        std::cout << "Enter marks for three subjects: ";
        std::cin >> mark1 >> mark2 >> mark3;
        calculateAverageAndGrade();
    }

    
    void calculateAverageAndGrade() {
        average = (mark1 + mark2 + mark3) / 3.0;
        
        if (average > 90) {
            grade = 'S';
        } else if (average > 80) {
            grade = 'A';
        } else if (average > 70) {
            grade = 'B';
        } else if (average > 60) {
            grade = 'C';
        } else if (average > 50) {
            grade = 'D';
        } else {
            grade = 'F';
        }
    }

    
    void displayDetails() const {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Registration Number: " << regNo << std::endl;
        std::cout << "Marks: " << mark1 << ", " << mark2 << ", " << mark3 << std::endl;
        std::cout << "Average Marks: " << average << std::endl;
        std::cout << "Grade: " << grade << std::endl;
    }
};

int main() {
    const int numStudents = 10;
    std::vector<Student> students(numStudents);

    
    for (int i = 0; i < numStudents; ++i) {
        std::cout << "\nEnter details for student " << (i + 1) << ":" << std::endl;
        students[i].readDetails();
    }

    
    for (int i = 0; i < numStudents; ++i) {
        std::cout << "\nDetails for student " << (i + 1) << ":" << std::endl;
        students[i].displayDetails();
    }

    return 0;
}
