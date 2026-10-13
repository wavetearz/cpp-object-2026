#ifndef CPP_OBJECT_2026_WORKER_H
#define CPP_OBJECT_2026_WORKER_H
#include "WorkerType.h"

class Worker {
public:
    Worker(char* firstName, char* lastName, char* email, int age, int seniority, int salary);
    WorkerType type;
    int id;
    char* firstName;
    char* lastName;
    char* email;
    int age;
    int seniority;
    int salary;
};


#endif //CPP_OBJECT_2026_WORKER_H