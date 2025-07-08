#ifndef SHOWCASEBOOK_H
#define SHOWCASEBOOK_H

#include "Book.h"

class ShowcaseBook : public Book {
public:
    ShowcaseBook(const std::string& isbn, const std::string& title, int year, double price, const std::string& author);
    void display() const override;
    bool isForSale() const override;
    bool buy(int quantity, const std::string& email, const std::string& address, double& paidAmount) override;
};

#endif // SHOWCASEBOOK_H 