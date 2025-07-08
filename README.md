# Quantum Bookstore (C++ Multi-file Project)

## Description
This project implements an extensible online bookstore system in C++. It supports multiple book types:
- **PaperBook**: Has stock, can be shipped
- **EBook**: Has a filetype, can be sent via email
- **ShowcaseBook**: Not for sale

Features:
- Add books to inventory
- Remove outdated books
- Buy books (with inventory and type checks)
- Easily extensible for new book types
- All output is prefixed with `Quantum book store`

## File Structure
- `Book.h` — Abstract base class
- `PaperBook.h/.cpp`, `EBook.h/.cpp`, `ShowcaseBook.h/.cpp` — Derived book types
- `Bookstore.h/.cpp` — Inventory and operations
- `QuantumBookstoreFullTest.cpp` — Main test/demo

## Build Instructions
1. Make sure you have a C++17 compatible compiler (e.g., g++).
2. Compile the project:
   ```sh
   g++ -std=c++17 -o QuantumBookstoreFullTest QuantumBookstoreFullTest.cpp Bookstore.cpp PaperBook.cpp EBook.cpp ShowcaseBook.cpp
   ```
3. Run the application:
   ```sh
   ./QuantumBookstoreFullTest
   ```

## Example Output
Below is a screenshot of the application output:

```
Quantum book store | Added book: Quantum book store | PaperBook | ISBN: P123, Title: C++ Primer, Author: Stanley Lippman, Year: 2010, Price: 50, Stock: 5
Quantum book store | Added book: Quantum book store | EBook | ISBN: E456, Title: Learn Quantum Computing, Author: Alice Quantum, Year: 2022, Price: 30, Filetype: pdf
Quantum book store | Added book: Quantum book store | ShowcaseBook | ISBN: S789, Title: History of Books, Author: John Doe, Year: 1990, Price: 0 (Not for sale)

Quantum book store | Inventory:
Quantum book store | PaperBook | ISBN: P123, Title: C++ Primer, Author: Stanley Lippman, Year: 2010, Price: 50, Stock: 5
Quantum book store | EBook | ISBN: E456, Title: Learn Quantum Computing, Author: Alice Quantum, Year: 2022, Price: 30, Filetype: pdf
Quantum book store | ShowcaseBook | ISBN: S789, Title: History of Books, Author: John Doe, Year: 1990, Price: 0 (Not for sale)

Quantum book store | Removing outdated book: Quantum book store | ShowcaseBook | ISBN: S789, Title: History of Books, Author: John Doe, Year: 1990, Price: 0 (Not for sale)
Quantum book store | Removed 1 outdated book(s).

Quantum book store | Inventory:
Quantum book store | PaperBook | ISBN: P123, Title: C++ Primer, Author: Stanley Lippman, Year: 2010, Price: 50, Stock: 5
Quantum book store | EBook | ISBN: E456, Title: Learn Quantum Computing, Author: Alice Quantum, Year: 2022, Price: 30, Filetype: pdf

Quantum book store | ShippingService: Shipping 2 copy(ies) of 'C++ Primer' to 123 Main St
Quantum book store | Paid amount: 100

Quantum book store | MailService: Sending EBook 'Learn Quantum Computing' to buyer@email.com
Quantum book store | Paid amount: 30

Quantum book store | Error: Book with ISBN S789 not found.

Quantum book store | Error: Not enough stock for ISBN P123

Quantum book store | Inventory:
Quantum book store | PaperBook | ISBN: P123, Title: C++ Primer, Author: Stanley Lippman, Year: 2010, Price: 50, Stock: 3
Quantum book store | EBook | ISBN: E456, Title: Learn Quantum Computing, Author: Alice Quantum, Year: 2022, Price: 30, Filetype: pdf
```

---

Feel free to extend the system with new book types or features! 