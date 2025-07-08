#ifndef BOOK_H
#define BOOK_H

#include <string>
#include <iostream>

class Book {
protected:
    std::string isbn;
    std::string title;
    int year;
    double price;
    std::string author;
public:
    Book(const std::string& isbn, const std::string& title, int year, double price, const std::string& author)
        : isbn(isbn), title(title), year(year), price(price), author(author) {}
    virtual ~Book() {}

    std::string getISBN() const { return isbn; }
    std::string getTitle() const { return title; }
    int getYear() const { return year; }
    double getPrice() const { return price; }
    std::string getAuthor() const { return author; }

    virtual void display() const = 0;
    virtual bool isForSale() const = 0;
    virtual bool buy(int quantity, const std::string& email, const std::string& address, double& paidAmount) = 0;
};

#endif // BOOK_H 