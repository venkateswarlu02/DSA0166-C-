#include <iostream>

int main() {
    const int numSubjects = 4;
    int marks[numSubjects];
    int totalMarks = 0;
    double aggregate;
    std::string grade;

    // Input marks for four subjects
    std::cout << "Enter the marks for four subjects:" << std::endl;
    for (int i = 0; i < numSubjects; ++i) {
        std::cout << "Subject " << (i + 1) << ": ";
        std::cin >> marks[i];
        totalMarks += marks[i];
    }

    // Calculate aggregate
    aggregate = static_cast<double>(totalMarks) / numSubjects;

    // Determine grade based on aggregate
    if (aggregate > 75) {
        grade = "Distinction";
    } else if (aggregate >= 60) {
        grade = "First Division";
    } else if (aggregate >= 50) {
        grade = "Second Division";
    } else if (aggregate >= 40) {
        grade = "Third Division";
    } else {
        grade = "Fail";
    }

    // Display total marks, aggregate, and grade
    std::cout << "Total Marks: " << totalMarks << std::endl;
    std::cout << "Aggregate: " << aggregate << "%" << std::endl;
    std::cout << "Grade: " << grade << std::endl;

    return 0;
}
