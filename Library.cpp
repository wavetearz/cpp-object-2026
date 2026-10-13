#include "Library.h"

#include <iostream>
#include <ostream>
#include <vector>
#include "Worker.h"

using namespace std;

Library::Library(char* name, char* location) {
    this->name = name;
    this->location = location;
    vector<Worker> workers;
}

template <typename T>
bool Library::checkID(int id, const vector<T>& vec) {
    for (auto& p : vec) {
        if (p.id == id) {
            return true;
        }
    }
    return false;
}


void Library::addWorker(Worker w) {
    w.id = workers.size();
    workers.emplace_back(w);
}

Worker Library::getWorkerByID(int id) {
    return workers.at(id);
}

void Library::deleteWorker(int id) {
    if (checkID(id, workers)) {
        workers.erase(workers.begin() + id);
        cout << "Worker " << id << " deleted" << endl;
    } else {
        cout << "Worker ID " << id << " does not exist" << endl;
    }
}


void Library::addProduct(Product p) {
    p.id = products.size();
    products.emplace_back(p);
}

Product Library::getProductByID(int id) {
    return products.at(id);
}

void Library::deleteProduct(int id) {
    if (checkID(id, products)) {
        products.erase(products.begin() + id);
        cout << "Product " << id << " deleted" << endl;
    } else {
        cout << "Product ID" << id << " does not exist" << endl;
    }
}