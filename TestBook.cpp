#include "Book.h"
#include "Map.h"

void addBooks(Map<std::string, Book>& library) {
    library.add("1984", Book("George Orwell", "Dystopian", 328, "Available"));
    library.add("To Kill a Mockingbird", Book("Harper Lee", "Fiction", 281, "Rented"));
}

typedef Map<std::string, Book> Library;

int main() {
    Library library;
    addBooks(library);

    std::cout << "Baza danych książek:" << std::endl << library << std::endl;

    return 0;
}
