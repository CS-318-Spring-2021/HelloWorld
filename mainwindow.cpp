#include "mainwindow.h"

#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QMessageBox>

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

    connect(button, SIGNAL(clicked()), this, SLOT(firstButtonClicked()));
}

MainWindow::~MainWindow()
{
}

void MainWindow::firstButtonClicked() {
    QMessageBox::information(0, "Yup", "You clicked the button.");
}
