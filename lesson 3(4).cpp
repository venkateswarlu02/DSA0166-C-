#include <iostream>

class AddAmount {
private:
    double amount; 

public:
    
    AddAmount() {
        amount = 50.0; 
    }

    
    AddAmount(double additionalAmount) {
        amount = 50.0 + additionalAmount; 
    }
  
    
    void displayAmount() const {
        std::cout << "Final amount in the Piggie Bank: $" << amount << std::endl;
    }
};

int main() {
    
    AddAmount piggyBank; 
    piggyBank.displayAmount(); 

    
    double additionalAmount;
    std::cout << "Enter the amount to add to the Piggie Bank: ";
    std::cin >> additionalAmount;

    
    AddAmount piggyBankWithAddition(additionalAmount); 
    piggyBankWithAddition.displayAmount(); 

    return 0;
}
