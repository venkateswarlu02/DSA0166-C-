#include <iostream>
#include <vector>
#include <string>

class Author {
private:
    std::string name;
    bool contributed;

public:
    Author(const std::string& name) : name(name), contributed(false) {}

    void markContribution() {
        contributed = true;
    }

    bool hasContributed() const {
        return contributed;
    }

    std::string getName() const {
        return name;
    }
};

class Paper {
private:
    std::vector<Author> authors;

public:
    void addAuthor(const std::string& name) {
        authors.emplace_back(name);
    }

    void markAuthorContribution(const std::string& name) {
        for (auto& author : authors) {
            if (author.getName() == name) {
                author.markContribution();
                return;
            }
        }
        std::cout << "Author " << name << " not found." << std::endl;
    }

    void displayContributors() const {
        std::cout << "Contributing Authors:" << std::endl;
        for (const auto& author : authors) {
            if (author.hasContributed()) {
                std::cout << author.getName() << std::endl;
            }
        }
    }

    void displayNonContributors() const {
        std::cout << "Non-contributing Authors:" << std::endl;
        for (const auto& author : authors) {
            if (!author.hasContributed()) {
                std::cout << author.getName() << std::endl;
            }
        }
    }
};

int main() {
    Paper paper;
    
    
    paper.addAuthor("Author 1");
    paper.addAuthor("Author 2");
    paper.addAuthor("Author 3");
    paper.addAuthor("Author 4");

    
    paper.markAuthorContribution("Author 1");
    paper.markAuthorContribution("Author 2");
    paper.markAuthorContribution("Author 3");

    
    paper.addAuthor("Author 5");
    paper.markAuthorContribution("Author 5");

    
    paper.displayContributors();
    paper.displayNonContributors();

    return 0;
}
