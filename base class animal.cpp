#include <iostream>
#include <string>

using namespace std;

class Animal {
protected:
    string name;
    string species;
    int age;

public:
    Animal(string n = "", string s = "", int a = 0) : name(n), species(s), age(a) {}

    void setName(string n) {
        name = n;
    }

    string getName() const {
        return name;
    }

    void setSpecies(string s) {
        species = s;
    }

    string getSpecies() const {
        return species;
    }

    void setAge(int a) {
        age = a;
    }

    int getAge() const {
        return age;
    }
};

class Cat : public Animal {
private:
    string color;
    string breed;

public:
    Cat(string n = "", string s = "", int a = 0, string c = "", string b = "") 
        : Animal(n, s, a), color(c), breed(b) {}

    void setColor(string c) {
        color = c;
    }

    string getColor() const {
        return color;
    }

    void setBreed(string b) {
        breed = b;
    }

    string getBreed() const {
        return breed;
    }

    void display() const {
        cout << "Cat Info: \n"
             << "Name: " << name << "\n"
             << "Species: " << species << "\n"
             << "Age: " << age << "\n"
             << "Color: " << color << "\n"
             << "Breed: " << breed << "\n";
    }
};

class Dog : public Animal {
private:
    double weight;
    string breed;

public:
    Dog(string n = "", string s = "", int a = 0, double w = 0.0, string b = "") 
        : Animal(n, s, a), weight(w), breed(b) {}

    void setWeight(double w) {
        weight = w;
    }

    double getWeight() const {
        return weight;
    }

    void setBreed(string b) {
        breed = b;
    }

    string getBreed() const {
        return breed;
    }

    void display() const {
        cout << "Dog Info: \n"
             << "Name: " << name << "\n"
             << "Species: " << species << "\n"
             << "Age: " << age << "\n"
             << "Weight: " << weight << "\n"
             << "Breed: " << breed << "\n";
    }
};

int main() {
    Cat cat("Whiskers", "Felis Catus", 3, "Black", "Siamese");
    Dog dog("Buddy", "Canis Lupus", 5, 20.5, "Labrador");

    cat.display();
    cout << endl;
    dog.display();

    return 0;
}

