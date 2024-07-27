#include <iostream>
#include <vector>
#include <iomanip> 

class Item {
public:
    Item(const std::string& code, double price) : code(code), price(price) {}
    std::string getCode() const { return code; }
    double getPrice() const { return price; }

private:
    std::string code;
    double price;
};

class ShoppingList {
public:
    void addItem(const std::string& code, double price) {
        items.push_back(Item(code, price));
        std::cout << "Item " << code << " added to the shopping list.\n";
    }

    void deleteItem(const std::string& code) {
        for (auto it = items.begin(); it != items.end(); ++it) {
            if (it->getCode() == code) {
                items.erase(it);
                std::cout << "Item " << code << " deleted from the shopping list.\n";
                return;
            }
        }
        std::cout << "Item " << code << " not found in the shopping list.\n";
    }

    void printTotalOrderValue() const {
        double total = 0.0;
        for (const auto& item : items) {
            total += item.getPrice();
        }
        std::cout << "Total order value: $" << std::fixed << std::setprecision(2) << total << "\n";
    }

private:
    std::vector<Item> items;
};

int main() {
    ShoppingList shoppingList;

    shoppingList.addItem("A001", 25.50);
    shoppingList.addItem("B002", 12.75);
    shoppingList.addItem("C003", 8.99);

    shoppingList.printTotalOrderValue();

    shoppingList.deleteItem("B002");

    shoppingList.printTotalOrderValue();

    return 0;
}

