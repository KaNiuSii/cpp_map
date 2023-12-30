#include <ostream>
#include <string>

class Book {
public:
    std::string author;
    std::string category;
    int pageCount;
    std::string status;

    Book() : author(""), category(""), pageCount(0), status("Available") {}
    Book(std::string a, std::string c, int p, std::string s) : author(a), category(c), pageCount(p), status(s) {}

    friend std::ostream& operator<<(std::ostream& os, const Book& book) {
        os << "Autor: " << book.author
           << ", Kategoria: " << book.category
           << ", Strony: " << book.pageCount
           << ", Status: " << book.status;
        return os;
    }
};
