#include "Magazine.h"
#include "Product.h"
#include "ProductType.h"

Magazine::Magazine(char* title, char* description, int price, char* EAN) :
    Product(title, description, price, EAN) {
    this->type = ProductType::MAGAZINE;
}
