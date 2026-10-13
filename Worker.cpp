#include "Worker.h"
#include "WorkerType.h"

Worker::Worker(char* firstName, char* lastName, char* email, int age, int seniority, int salary) {
    int id;
    WorkerType type;
    this->firstName = firstName;
    this->lastName = lastName;
    this->email = email;
    this->age = age;
    this->seniority = seniority;
    this->salary = salary;
}

