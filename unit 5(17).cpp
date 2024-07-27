#include <iostream>
#include <string>

using namespace std;


class Student {
protected:
    string name;
    int rollNumber;

public:
    void setStudentInfo(string n, int r) {
        name = n;
        rollNumber = r;
    }

    void displayStudentInfo() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
    }
};


class Report : public Student {
private:
    float marksMath;
    float marksScience;
    float marksEnglish;

public:
    void setMarks(float math, float science, float english) {
        marksMath = math;
        marksScience = science;
        marksEnglish = english;
    }

    void displayReport() {
        displayStudentInfo();
        cout << "Marks in Mathematics: " << marksMath << endl;
        cout << "Marks in Science: " << marksScience << endl;
        cout << "Marks in English: " << marksEnglish << endl;

        float total = marksMath + marksScience + marksEnglish;
        float percentage = total / 3;
        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main() {
    
    Report studentReport;

    
    studentReport.setStudentInfo("John Doe", 101);

    
    studentReport.setMarks(85.5, 90.0, 88.5);

    
    studentReport.displayReport();

    return 0;
}
