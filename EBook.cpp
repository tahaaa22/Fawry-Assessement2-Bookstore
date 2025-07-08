#include "EBook.h"
#include <iostream>

EBook::EBook(const std::string& isbn, const std::string& title, int year, double price, const std::string& author, const std::string& filetype)
    : Book(isbn, title, year, price, author), filetype(filetype) {}

void EBook::display() const {
    std::cout << "Quantum book store | EBook | ISBN: " << isbn
              << ", Title: " << title
              << ", Author: " << author
              << ", Year: " << year
              << ", Price: " << price
              << ", Filetype: " << filetype << std::endl;
}

bool EBook::isForSale() const {
    return true;
}

bool EBook::buy(int quantity, const std::string& email, const std::string& address, double& paidAmount) {
    if (quantity != 1) {
        std::cout << "Quantum book store | Error: EBooks can only be bought one at a time (ISBN " << isbn << ")" << std::endl;
        return false;
    }
    paidAmount = price;
    std::cout << "Quantum book store | MailService: Sending EBook '" << title << "' to " << email << std::endl;
    return true;
}

std::string EBook::getFiletype() const {
    return filetype;
} 