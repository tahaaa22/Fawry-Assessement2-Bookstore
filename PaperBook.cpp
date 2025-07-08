#include "PaperBook.h"
#include <iostream>

PaperBook::PaperBook(const std::string& isbn, const std::string& title, int year, double price, const std::string& author, int stock)
    : Book(isbn, title, year, price, author), stock(stock) {}

void PaperBook::display() const {
    std::cout << "Quantum book store | PaperBook | ISBN: " << isbn
              << ", Title: " << title
              << ", Author: " << author
              << ", Year: " << year
              << ", Price: " << price
              << ", Stock: " << stock << std::endl;
}

bool PaperBook::isForSale() const {
    return stock > 0;
}

bool PaperBook::buy(int quantity, const std::string& email, const std::string& address, double& paidAmount) {
    if (quantity <= 0 || quantity > stock) {
        std::cout << "Quantum book store | Error: Not enough stock for ISBN " << isbn << std::endl;
        return false;
    }
    stock -= quantity;
    paidAmount = price * quantity;
    std::cout << "Quantum book store | ShippingService: Shipping " << quantity << " copy(ies) of '" << title << "' to " << address << std::endl;
    return true;
}

int PaperBook::getStock() const {
    return stock;
} 