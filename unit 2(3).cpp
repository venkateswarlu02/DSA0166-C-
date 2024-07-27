#include <iostream>
using namespace std;

// Function to get the person's age
int getPerson() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    return age;
}

// Function to check voting eligibility and print the result
void checkVotingEligibility(int age) {
    const int votingAge = 18;
    
    if (age >= votingAge) {
        cout << "You are eligible to vote." << endl;
    } else {
        int yearsLeft = votingAge - age;
        cout << "You are not eligible to vote. You have " << yearsLeft << " years left to be eligible." << endl;
    }
}

int main() {
    // Get age from the user
    int age = getPerson();

    // Check if the user is eligible to vote
    checkVotingEligibility(age);

    return 0;
}

