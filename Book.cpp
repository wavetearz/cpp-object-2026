#include "Book.h"
#include "Product.h"
#include "ProductType.h"

Book::Book(char* title, char* description, int price, char* EAN) :
    Product(title, description, price, EAN) {
    this->type = ProductType::BOOK;
}
