#include <iostream>
#include <stdexcept>

class Student {
private:
    double marks[4];
    double total;
    double aggregate;

public:
    Student() : total(0), aggregate(0) {}

    void enterMarks() {
        std::cout << "Enter marks for 4 subjects: ";
        for (int i = 0; i < 4; i++) {
            std::cin >> marks[i];
            if (marks[i] < 50) {
                throw std::runtime_error("fail");
            }
            total += marks[i];
        }
        aggregate = total / 4;
    }

    void displayResults() {
        std::cout << "Total marks: " << total << std::endl;
        std::cout << "Aggregate marks: " << aggregate << std::endl;
        std::cout << "Grade: " << (aggregate >= 50 ? "pass" : "fail") << std::endl;
    }
};

int main() {
    Student student;

    try {
        student.enterMarks();
        student.displayResults();
    } catch (const std::runtime_error &e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
