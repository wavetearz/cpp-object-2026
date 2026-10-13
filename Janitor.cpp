#include "Janitor.h"
#include "Worker.h"
#include "WorkerType.h"

Janitor::Janitor(char* firstName, char* lastName, char* email, int age, int seniority, int salary) :
    Worker(firstName, lastName, email, age, seniority, salary) {
    this->type = WorkerType::JANITOR;
}
