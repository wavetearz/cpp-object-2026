#include <iostream>

#include "Librarian.h"
#include "Library.h"
#include "Worker.h"
#include "Janitor.h"
#include "Book.h"
#include "Magazine.h"

using namespace std;

int main() {
    Library l("Biblioteka Publiczna", "Szczecin");
    Librarian worker1("Jan", "Kowalski", "janek@janek.pl", 30, 2, 15000);
    Librarian worker2("Jan", "Kowalski", "janek@janek.pl", 50, 2, 15000);
    Janitor worker3("Jan", "Kowalski", "janek@janek.pl", 20, 2, 15000);
    l.addWorker(worker1);
    l.addWorker(worker2);
    l.addWorker(worker3);

    Book b("tytul", "opis", 30, "83745893479");
    Magazine m("magazyn", "opis", 30, "22342342342");
    l.addProduct(b);
    l.addProduct(m);

    l.deleteProduct(1);
    l.deleteWorker(4354);

    return 0;
}