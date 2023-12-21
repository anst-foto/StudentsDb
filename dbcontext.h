#ifndef DBCONTEXT_H
#define DBCONTEXT_H

#include <QtSql>
#include <QString>
#include <QList>

#include "student.h"

class DbContext
{
private:
    QString db_name;
public:
    DbContext(QString db_name);
    ~DbContext();

    const QList<Student> GetAll() const;
    const Student* FindById(int id) const;
    const QList<Student> FindByName(QString name) const;
};

#endif // DBCONTEXT_H
