/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *nameofprogram;
    QLabel *username;
    QLabel *password;
    QLineEdit *useredit;
    QLineEdit *passedit;
    QPushButton *okbutton;
    QPushButton *exit_button;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        nameofprogram = new QLabel(centralwidget);
        nameofprogram->setObjectName("nameofprogram");
        nameofprogram->setGeometry(QRect(90, 20, 411, 61));
        QFont font;
        font.setPointSize(20);
        nameofprogram->setFont(font);
        username = new QLabel(centralwidget);
        username->setObjectName("username");
        username->setGeometry(QRect(50, 120, 221, 61));
        QFont font1;
        font1.setPointSize(15);
        username->setFont(font1);
        password = new QLabel(centralwidget);
        password->setObjectName("password");
        password->setGeometry(QRect(50, 190, 221, 61));
        password->setFont(font1);
        useredit = new QLineEdit(centralwidget);
        useredit->setObjectName("useredit");
        useredit->setGeometry(QRect(240, 140, 281, 28));
        useredit->setFont(font1);
        passedit = new QLineEdit(centralwidget);
        passedit->setObjectName("passedit");
        passedit->setGeometry(QRect(240, 210, 281, 28));
        passedit->setFont(font1);
        okbutton = new QPushButton(centralwidget);
        okbutton->setObjectName("okbutton");
        okbutton->setGeometry(QRect(150, 300, 83, 41));
        okbutton->setFont(font1);
        exit_button = new QPushButton(centralwidget);
        exit_button->setObjectName("exit_button");
        exit_button->setGeometry(QRect(280, 300, 83, 41));
        exit_button->setFont(font1);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        nameofprogram->setText(QCoreApplication::translate("MainWindow", "Login Management System", nullptr));
        username->setText(QCoreApplication::translate("MainWindow", "User Name:", nullptr));
        password->setText(QCoreApplication::translate("MainWindow", "Password:", nullptr));
        okbutton->setText(QCoreApplication::translate("MainWindow", "OK", nullptr));
        exit_button->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
