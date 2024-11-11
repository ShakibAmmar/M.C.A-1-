#include <iostream>
#include <string>

using namespace std;

struct Book {
    int book_id;
    string title;
    string author;
    float price;
};

void printBookDetails(const Book& book) {
    cout << "Book ID: " << book.book_id << endl;
    cout << "Title: " << book.title << endl;
    cout << "Author: " << book.author << endl;
    cout << "Price: $" << book.price << endl;
}

int main() {

    Book myBook = {1, "The C++ Programming Language", "Bjarne Stroustrup", 59.99};
    
    printBookDetails(myBook);
    
    return 0;
}

