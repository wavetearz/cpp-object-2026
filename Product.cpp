#include "Product.h"
#include "ProductType.h"

Product::Product(char* title, char* description, int price, char* EAN) {
    int id;
    ProductType type;
    this->title = title;
    this->description = description;
    this->price = price;
    this->EAN = EAN;
}

