#include "dbcontext.h"

DbContext::DbContext(QString db_name) {
    this->db_name = db_name;
}
DbContext::~DbContext() {}

const QList<Student> DbContext::GetAll() const {
    QList<Student> students = *new QList<Student>();

    auto db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(db_name);

    if (!db.open()) {
        return students;
    }

    auto sql = "SELECT id, last_name, first_name, faculty FROM table_students";
    QSqlQuery query(sql);
    while (query.next()) {
        auto id = query.value(0).toInt();
        auto last_name = query.value(1).toString();
        auto first_name = query.value(2).toString();
        auto faculty = query.value(3).toString();

        students.append(Student(id, last_name, first_name, faculty));
    }

    db.close();

    return students;
}
const Student* DbContext::FindById(int id) const {
    Student* student;

    auto db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(db_name);

    if (!db.open()) {
        return nullptr;
    }

    auto sql = "SELECT id, last_name, first_name, faculty FROM table_students WHERE id = " + QString::number(id);
    QSqlQuery query(sql);
    query.next();
    auto _id = query.value(0).toInt();
    auto last_name = query.value(1).toString();
    auto first_name = query.value(2).toString();
    auto faculty = query.value(3).toString();

    student = new Student(_id, last_name, first_name, faculty);

    db.close();

    return student;
}

const QList<Student> DbContext::FindByName(QString name) const {
    return *new QList<Student>(); //TODO
}
