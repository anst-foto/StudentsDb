#include "student.h"

Student::Student(int id, QString last_name, QString first_name, QString faculty) {
    this->id = id;
    this->last_name = last_name;
    this->first_name = first_name;
    this->faculty = faculty;
}
Student::~Student() {}

int Student::getId() {
    return id;
}

const QString& Student::getLastName() const {
    return last_name;
}
const QString& Student::getFirstName() const {
    return first_name;
}

 QString Student::getFullName() {
    return last_name + " " + first_name;
}

const QString& Student::getFaculty() const {
    return faculty;
}
