#ifndef EBOOK_H
#define EBOOK_H

#include "Book.h"

class EBook : public Book {
    std::string filetype;
public:
    EBook(const std::string& isbn, const std::string& title, int year, double price, const std::string& author, const std::string& filetype);
    void display() const override;
    bool isForSale() const override;
    bool buy(int quantity, const std::string& email, const std::string& address, double& paidAmount) override;
    std::string getFiletype() const;
};

#endif // EBOOK_H 