#include "ShowcaseBook.h"
#include <iostream>

ShowcaseBook::ShowcaseBook(const std::string& isbn, const std::string& title, int year, double price, const std::string& author)
    : Book(isbn, title, year, price, author) {}

void ShowcaseBook::display() const {
    std::cout << "Quantum book store | ShowcaseBook | ISBN: " << isbn
              << ", Title: " << title
              << ", Author: " << author
              << ", Year: " << year
              << ", Price: " << price << " (Not for sale)" << std::endl;
}

bool ShowcaseBook::isForSale() const {
    return false;
}

bool ShowcaseBook::buy(int quantity, const std::string& email, const std::string& address, double& paidAmount) {
    std::cout << "Quantum book store | Error: Showcase/Demo books are not for sale (ISBN " << isbn << ")" << std::endl;
    return false;
} 