#include <iostream>
#include <string>

using namespace std;


class Person {
protected:
    string name;
    int age;

public:
    
    void setPersonalDetails(string n, int a) {
        name = n;
        age = a;
    }

    
    void displayPersonalDetails() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};


class Patient : public Person {
private:
    string patientID;
    string medicalHistory;

public:
    
    void setPatientDetails(string id, string history) {
        patientID = id;
        medicalHistory = history;
    }

    
    void displayPatientDetails() const {
        displayPersonalDetails(); 
        cout << "Patient ID: " << patientID << endl;
        cout << "Medical History: " << medicalHistory << endl;
    }
};

int main() {
    Patient patient;

    
    patient.setPersonalDetails("John Doe", 30);
    patient.setPatientDetails("P12345", "No significant medical history");

    
    cout << "Patient Details:" << endl;
    patient.displayPatientDetails();

    return 0;
}
