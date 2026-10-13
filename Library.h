#ifndef CPP_OBJECT_2026_LIBRARY_H
#define CPP_OBJECT_2026_LIBRARY_H

#include <vector>
#include "Worker.h"
#include "Product.h"

using namespace std;

class Library {
public:
    Library(char* name, char* location);
    char *name;
    char *location;
    vector<Worker> workers;
    vector<Product> products;

    void addWorker(Worker w);
    Worker getWorkerByID(int id);
    void deleteWorker(int id);

    void addProduct(Product p);
    Product getProductByID(int id);
    void deleteProduct(int id);

    template <typename T>
    bool checkID(int id, const vector<T>& vec);
};


#endif //CPP_OBJECT_2026_LIBRARY_H