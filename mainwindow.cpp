#include "mainwindow.h"

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

    QPushButton *button = new QPushButton("push me.... IF YOU DARE!");
    mainLayout->addWidget(button);
    mainLayout->addWidget(button);

    connect(button, &QPushButton::clicked, this, &MainWindow::buttonClicked);
    connect(button, &QPushButton::clicked, this, &MainWindow::buttonClicked);
}

MainWindow::~MainWindow()
{
}

void MainWindow::buttonClicked() {
    QMessageBox::information(nullptr, "brave of you", "bet you won't do it again though...");
}
