#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <exception>
#include <memory>

// Base class for Library Items
class LibraryItem {
protected:
    std::string title;
    std::string author;
    int year;

public:
    LibraryItem(std::string t, std::string a, int y) 
        : title(t), author(a), year(y) {}

    virtual void display() const {
        std::cout << "Title: " << title 
                  << ", Author: " << author 
                  << ", Year: " << year;
    }

    virtual ~LibraryItem() = default;

    std::string getTitle() const { return title; }
};

// Derived class Book
class Book : public LibraryItem {
    int pages;

public:
    Book(std::string t, std::string a, int y, int p) 
        : LibraryItem(t, a, y), pages(p) {}

    void display() const override {
        LibraryItem::display();
        std::cout << ", Pages: " << pages << std::endl;
    }
};

// Template class to store collection of items
template <typename T>
class LibraryCollection {
    std::vector<std::shared_ptr<T>> items;

public:
    void addItem(std::shared_ptr<T> item) {
        items.push_back(item);
    }

    void displayAll() const {
        for (const auto& item : items) {
            item->display();
        }
    }

    std::shared_ptr<T> searchByTitle(const std::string& title) const {
        auto it = std::find_if(items.begin(), items.end(), 
            [&](const std::shared_ptr<T>& item) {
                return item->getTitle() == title;
            });

        if (it != items.end()) {
            return *it;
        }
        throw std::runtime_error("Item not found with title: " + title);
    }
};

// Custom exception for invalid input
class InvalidInputException : public std::exception {
    std::string message;

public:
    InvalidInputException(const std::string& msg) : message(msg) {}
    const char* what() const noexcept override {
        return message.c_str();
    }
};

// Function to get integer input safely
int getIntInput(const std::string& prompt) {
    int val;
    std::cout << prompt;
    if (!(std::cin >> val)) {
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        throw InvalidInputException("Invalid integer input!");
    }
    return val;
}

int main() {
    LibraryCollection<Book> myLibrary;

    try {
        // Add some books
        myLibrary.addItem(std::make_shared<Book>("The C++ Programming Language", "Bjarne Stroustrup", 2013, 1366));
        myLibrary.addItem(std::make_shared<Book>("Effective Modern C++", "Scott Meyers", 2014, 334));
        myLibrary.addItem(std::make_shared<Book>("Clean Code", "Robert C. Martin", 2008, 464));

        std::cout << "Library Collection:\n";
        myLibrary.displayAll();

        // Search loop
        while (true) {
            std::string searchTitle;
            std::cout << "\nEnter book title to search (or 'exit' to quit): ";
            std::cin.ignore();  // clear newline
            std::getline(std::cin, searchTitle);

            if (searchTitle == "exit") break;

            try {
                auto found = myLibrary.searchByTitle(searchTitle);
                std::cout << "Book found: ";
                found->display();
            }
            catch (const std::exception& e) {
                std::cout << "Error: " << e.what() << std::endl;
            }
        }
    }
    catch (const InvalidInputException& e) {
        std::cout << "Input Error: " << e.what() << std::endl;
    }
    catch (const std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    std::cout << "Program ended successfully.\n";
    return 0;
}
