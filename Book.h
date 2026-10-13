#ifndef CPP_OBJECT_2026_BOOK_H
#define CPP_OBJECT_2026_BOOK_H
#include "Product.h"

class Book : public Product {
public:
    char* title;
    char* description;
    int price;
    char* EAN;

    Book(char* title, char* description, int price, char* EAN);
};


#endif //CPP_OBJECT_2026_BOOK_H