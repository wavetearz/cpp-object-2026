#ifndef CPP_OBJECT_2026_MAGAZINE_H
#define CPP_OBJECT_2026_MAGAZINE_H
#include "Product.h"

class Magazine : public Product {
public:
    char* title;
    char* description;
    int price;
    char* EAN;

    Magazine(char* title, char* description, int price, char* EAN);
};


#endif //CPP_OBJECT_2026_MAGAZINE_H