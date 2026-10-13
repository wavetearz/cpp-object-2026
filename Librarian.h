#ifndef CPP_OBJECT_2026_LIBRARIAN_H
#define CPP_OBJECT_2026_LIBRARIAN_H
#include "Worker.h"


class Librarian : public Worker {
    public:
    Librarian(char* firstName, char* lastName, char* email, int age, int seniority, int salary);
};


#endif //CPP_OBJECT_2026_LIBRARIAN_H