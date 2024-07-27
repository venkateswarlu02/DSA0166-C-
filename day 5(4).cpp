#include <iostream>

class Grandfather {
protected:
    double propertyValue;

public:
    Grandfather(double value) : propertyValue(value) {}
    virtual ~Grandfather() {}
};

class Father : public Grandfather {
public:
    Father(double value) : Grandfather(value) {}
};

class Grandson : public Father {
public:
    Grandson(double value) : Father(value) {}

    void displayProperty() const {
        std::cout << "Grandson inherited property value: " << propertyValue << " Cr" << std::endl;
    }
};

int main() {
    Grandson grandson(500);
    grandson.displayProperty();
    return 0;
}
