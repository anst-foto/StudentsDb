#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    context = new DbContext("D:\\Programming\\Temp\\StudentsDb\\students.db");

    foreach (Student item, context->GetAll()) {
        ui->listStudents->addItem(item.getFullName());
    }
}

MainWindow::~MainWindow()
{
    delete ui;

    delete context;
}
