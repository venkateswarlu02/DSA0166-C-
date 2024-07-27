#include <iostream>

class IncomeTax {
protected:
    double income;
public:
    IncomeTax(double inc) : income(inc) {}
    virtual double TDS() = 0; 
};

class Slab1 : public IncomeTax {
public:
    Slab1(double inc) : IncomeTax(inc) {}
    double TDS() override {
        if (income <= 150000) {
            return 0;
        } else if (income <= 300000) {
            return income * 0.10;
        } else if (income <= 500000) {
            return income * 0.20;
        } else {
            return income * 0.30;
        }
    }
};

class Slab2 : public IncomeTax {
public:
    Slab2(double inc) : IncomeTax(inc) {}
    double TDS() override {
        if (income <= 150000) {
            return 0;
        } else if (income <= 300000) {
            return income * 0.10;
        } else if (income <= 500000) {
            return income * 0.20;
        } else {
            return income * 0.30;
        }
    }
};

class Slab3 : public IncomeTax {
public:
    Slab3(double inc) : IncomeTax(inc) {}
    double TDS() override {
        if (income <= 150000) {
            return 0;
        } else if (income <= 300000) {
            return income * 0.10;
        } else if (income <= 500000) {
            return income * 0.20;
        } else {
            return income * 0.30;
        }
    }
};

int main() {
    double income1 = 400000;
    IncomeTax* slab1 = new Slab1(income1);
    std::cout << "The tax for an income of " << income1 << " is " << slab1->TDS() << std::endl;
    delete slab1;

    double income2 = 600000;
    IncomeTax* slab2 = new Slab2(income2);
    std::cout << "The tax for an income of " << income2 << " is " << slab2->TDS() << std::endl;
    delete slab2;

    double income3 = 200000;
    IncomeTax* slab3 = new Slab3(income3);
    std::cout << "The tax for an income of " << income3 << " is " << slab3->TDS() << std::endl;
    delete slab3;

    return 0;
}
