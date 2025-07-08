#ifndef PAPERBOOK_H
#define PAPERBOOK_H

#include "Book.h"

class PaperBook : public Book {
    int stock;
public:
    PaperBook(const std::string& isbn, const std::string& title, int year, double price, const std::string& author, int stock);
    void display() const override;
    bool isForSale() const override;
    bool buy(int quantity, const std::string& email, const std::string& address, double& paidAmount) override;
    int getStock() const;
};

#endif // PAPERBOOK_H 