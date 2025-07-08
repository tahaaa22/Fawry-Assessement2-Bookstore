#ifndef BOOKSTORE_H
#define BOOKSTORE_H

#include <vector>
#include <memory>
#include <string>
#include "Book.h"

class Bookstore {
    std::vector<std::shared_ptr<Book>> inventory;
public:
    void addBook(const std::shared_ptr<Book>& book);
    std::vector<std::shared_ptr<Book>> removeOutdatedBooks(int currentYear, int maxAge);
    bool buyBook(const std::string& isbn, int quantity, const std::string& email, const std::string& address, double& paidAmount);
    void displayInventory() const;
    std::shared_ptr<Book> findBookByISBN(const std::string& isbn) const;
};

#endif // BOOKSTORE_H 