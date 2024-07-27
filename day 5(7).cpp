#include <iostream>
#include <string>


class Person {
protected:
    std::string name;
    int age;
    double salary;

public:
    virtual void getdata(const std::string& name, int age, double salary) {
        this->name = name;
        this->age = age;
        this->salary = salary;
    }

    virtual void displayData() const {
        std::cout << "Name: " << name << ", Age: " << age << ", Salary: " << salary << std::endl;
    }

    virtual double bonus() const {
        return salary * 0.1;
    }

    virtual ~Person() {}
};


class Admin : virtual public Person {
public:
    void getdata(const std::string& name, int age, double salary) override {
        Person::getdata(name, age, salary);
    }

    void displayData() const override {
        Person::displayData();
    }

    double bonus() const override {
        return salary * 0.15;
    }
};


class Account : virtual public Person {
public:
    void getdata(const std::string& name, int age, double salary) override {
        Person::getdata(name, age, salary);
    }

    void displayData() const override {
        Person::displayData();
    }

    double bonus() const override {
        return salary * 0.12;
    }
};


class Master : public Admin, public Account {
public:
    void getdata(const std::string& name, int age, double salary) override {
        Admin::getdata(name, age, salary);  
    }

    void displayData() const override {
        Admin::displayData();  
    }

    double bonus() const override {
        
        return std::max(Admin::bonus(), Account::bonus());
    }
};

int main() {
    Person* p;
    Master master;
    master.getdata("Alice", 30, 50000);

    p = &master;
    p->displayData();
    std::cout << "Bonus: " << p->bonus() << std::endl;

    return 0;
}
