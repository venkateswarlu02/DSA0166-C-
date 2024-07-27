#include <iostream>
#include <string>

class Book {
private:
    std::string title;
    std::string author;
    double price;

public:
    
    Book(const std::string& bookTitle, const std::string& bookAuthor, double bookPrice) {
        title = bookTitle;
        author = bookAuthor;
        price = bookPrice;
        std::cout << "Book \"" << title << "\" by " << author << " created.\n";
    }

   
    ~Book() {
        std::cout << "Book \"" << title << "\" by " << author << " destroyed.\n";
    }

    
    void display() const {
        std::cout << "Title: " << title << ", Author: " << author << ", Price: $" << price << "\n";
    }
};

int main() {
   
    Book book1("1984", "George Orwell", 9.99);
    book1.display();

   
    Book book2("To Kill a Mockingbird", "Harper Lee", 7.99);
    book2.display();

    return 0;
}

