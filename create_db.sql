CREATE TABLE table_students (
    id INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT,
    last_name TEXT NOT NULL,
    first_name TEXT NOT NULL,
    faculty TEXT NOT NULL
);

INSERT INTO table_students (last_name, first_name, faculty)
VALUES ('Starinin', 'Andrey', 'SoftDev');
INSERT INTO table_students (last_name, first_name, faculty)
VALUES ('Ivanov', 'Ivan', 'DevOps');

SELECT last_name, first_name
FROM table_students
WHERE faculty = 'SoftDev';