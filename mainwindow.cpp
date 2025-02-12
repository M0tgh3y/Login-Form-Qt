#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->okbutton, SIGNAL(clicked()), this, SLOT(ok_button()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::ok_button()
{
    QString name[] = {"mot", "ghey"};
    QString pass[] = {"1383mot", "2004ghey"};

    QString uname = ui->useredit->text();
    QString passw = ui->passedit->text();
    bool f = false;

    for (int i = 0; i < 2; i++) {
        if (uname == name[i] && passw == pass[i]) {
            QMessageBox::information(this, "Wellcome", "Wellcome to System!");
            f = true;
            break;
        }
    }

    if (!f) {
        QMessageBox::information(this, "Error", "Invalid Username or Password!");
    }
}

