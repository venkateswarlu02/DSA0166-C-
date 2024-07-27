#include <iostream>

class AddAmount {
protected:
    double amount;

public:
    AddAmount() : amount(50) {}

    virtual void displayAmount() const {
        std::cout << "Current amount in Piggie Bank: $" << amount << std::endl;
    }

    virtual ~AddAmount() {}
};

class AddMoreAmount : public AddAmount {
public:
    AddMoreAmount(double additionalAmount) {
        amount += additionalAmount;
    }
};

int main() {
    
    AddAmount base;
    base.displayAmount();  

    
    AddMoreAmount derived(30);
    derived.displayAmount();  

    return 0;
}
