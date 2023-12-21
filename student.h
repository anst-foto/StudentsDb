#ifndef STUDENT_H
#define STUDENT_H

#include <QString>

class Student
{
private:
    int id;
    QString last_name;
    QString first_name;
    QString faculty;

public:
    Student(int id, QString last_name, QString first_name, QString faculty);
    ~Student();

    int getId();
    const QString& getLastName() const;
    const QString& getFirstName() const;
    QString getFullName();
    const QString& getFaculty() const;
};

#endif // STUDENT_H
