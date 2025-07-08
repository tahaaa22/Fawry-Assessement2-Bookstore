#include "Bookstore.h"
#include <iostream>

void Bookstore::addBook(const std::shared_ptr<Book>& book) {
    inventory.push_back(book);
    std::cout << "Quantum book store | Added book: ";
    book->display();
}

std::vector<std::shared_ptr<Book>> Bookstore::removeOutdatedBooks(int currentYear, int maxAge) {
    std::vector<std::shared_ptr<Book>> removed;
    auto it = inventory.begin();
    while (it != inventory.end()) {
        int age = currentYear - (*it)->getYear();
        if (age > maxAge) {
            std::cout << "Quantum book store | Removing outdated book: ";
            (*it)->display();
            removed.push_back(*it);
            it = inventory.erase(it);
        } else {
            ++it;
        }
    }
    return removed;
}

bool Bookstore::buyBook(const std::string& isbn, int quantity, const std::string& email, const std::string& address, double& paidAmount) {
    auto book = findBookByISBN(isbn);
    if (!book) {
        std::cout << "Quantum book store | Error: Book with ISBN " << isbn << " not found." << std::endl;
        return false;
    }
    if (!book->isForSale()) {
        std::cout << "Quantum book store | Error: Book with ISBN " << isbn << " is not for sale." << std::endl;
        return false;
    }
    return book->buy(quantity, email, address, paidAmount);
}

void Bookstore::displayInventory() const {
    std::cout << "Quantum book store | Inventory:" << std::endl;
    for (const auto& book : inventory) {
        book->display();
    }
}

std::shared_ptr<Book> Bookstore::findBookByISBN(const std::string& isbn) const {
    for (const auto& book : inventory) {
        if (book->getISBN() == isbn) {
            return book;
        }
    }
    return nullptr;
} 