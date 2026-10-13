#ifndef CPP_OBJECT_2026_PRODUCT_H
#define CPP_OBJECT_2026_PRODUCT_H

#include "ProductType.h"

class Product {
public:
    int id;
    char* title;
    char* description;
    int price;
    char* EAN;
    ProductType type;

    Product(char* title, char* description, int price, char* EAN);
};


#endif //CPP_OBJECT_2026_PRODUCT_H