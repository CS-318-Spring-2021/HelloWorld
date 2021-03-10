#include "mainwindow.h"

#include "shape.h"

#include <QtWidgets>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QWidget *w = new QWidget();
    setCentralWidget(w);

    QVBoxLayout *mainLayout = new QVBoxLayout();
    w->setLayout(mainLayout);

    QLabel *label = new QLabel("Hello, world!");
    mainLayout->addWidget(label);

    QPushButton *button = new QPushButton("Push me");
    mainLayout->addWidget(button);

    connect(button, &QPushButton::clicked, this, &MainWindow::buttonClicked);
}

MainWindow::~MainWindow()
{
}

void MainWindow::buttonClicked() {
    Shape *s = new Rect(5.0, 4.0);

    QString msg;
    QTextStream out(&msg);
    out << "The area of your shape is " << s->area();

    QMessageBox::information(this, "Area", msg);

    delete s;
}
