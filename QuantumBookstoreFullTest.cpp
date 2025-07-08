#include "Bookstore.h"
#include "PaperBook.h"
#include "EBook.h"
#include "ShowcaseBook.h"
#include <iostream>

class QuantumBookstoreFullTest {
public:
    static void run() {
        Bookstore store;
        // Add books
        store.addBook(std::make_shared<PaperBook>("P123", "C++ Primer", 2010, 50.0, "Stanley Lippman", 5));
        store.addBook(std::make_shared<EBook>("E456", "Learn Quantum Computing", 2022, 30.0, "Alice Quantum", "pdf"));
        store.addBook(std::make_shared<ShowcaseBook>("S789", "History of Books", 1990, 0.0, "John Doe"));

        std::cout << std::endl;
        store.displayInventory();
        std::cout << std::endl;

        // Remove outdated books (older than 15 years)
        auto removed = store.removeOutdatedBooks(2024, 15);
        std::cout << "Quantum book store | Removed " << removed.size() << " outdated book(s)." << std::endl;
        std::cout << std::endl;
        store.displayInventory();
        std::cout << std::endl;

        // Buy a PaperBook
        double paidAmount = 0.0;
        store.buyBook("P123", 2, "buyer@email.com", "123 Main St", paidAmount);
        std::cout << "Quantum book store | Paid amount: " << paidAmount << std::endl;
        std::cout << std::endl;

        // Buy an EBook
        paidAmount = 0.0;
        store.buyBook("E456", 1, "buyer@email.com", "", paidAmount);
        std::cout << "Quantum book store | Paid amount: " << paidAmount << std::endl;
        std::cout << std::endl;

        // Try to buy a ShowcaseBook
        paidAmount = 0.0;
        store.buyBook("S789", 1, "buyer@email.com", "", paidAmount);
        std::cout << std::endl;

        // Try to buy more PaperBooks than in stock
        paidAmount = 0.0;
        store.buyBook("P123", 10, "buyer@email.com", "123 Main St", paidAmount);
        std::cout << std::endl;

        // Final inventory
        store.displayInventory();
    }
};

int main() {
    QuantumBookstoreFullTest::run();
    return 0;
} 