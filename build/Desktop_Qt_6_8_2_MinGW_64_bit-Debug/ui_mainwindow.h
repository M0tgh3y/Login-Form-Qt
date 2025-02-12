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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *nameofprogram;
    QHBoxLayout *horizontalLayout_2;
    QLabel *username;
    QLineEdit *useredit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *password;
    QLineEdit *passedit;
    QHBoxLayout *horizontalLayout;
    QPushButton *okbutton;
    QPushButton *exit_button;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(573, 433);
        MainWindow->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(20, 20, 531, 361));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(20);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(10, 10, 10, 10);
        nameofprogram = new QLabel(gridLayoutWidget);
        nameofprogram->setObjectName("nameofprogram");
        QFont font;
        font.setPointSize(20);
        nameofprogram->setFont(font);

        verticalLayout->addWidget(nameofprogram);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(50);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(10, 10, 10, 10);
        username = new QLabel(gridLayoutWidget);
        username->setObjectName("username");
        QFont font1;
        font1.setPointSize(15);
        username->setFont(font1);

        horizontalLayout_2->addWidget(username);

        useredit = new QLineEdit(gridLayoutWidget);
        useredit->setObjectName("useredit");
        useredit->setFont(font1);

        horizontalLayout_2->addWidget(useredit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(50);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(10, 10, 10, 10);
        password = new QLabel(gridLayoutWidget);
        password->setObjectName("password");
        password->setFont(font1);

        horizontalLayout_3->addWidget(password);

        passedit = new QLineEdit(gridLayoutWidget);
        passedit->setObjectName("passedit");
        passedit->setFont(font1);

        horizontalLayout_3->addWidget(passedit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(60);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(70, -1, 70, -1);
        okbutton = new QPushButton(gridLayoutWidget);
        okbutton->setObjectName("okbutton");
        okbutton->setFont(font1);

        horizontalLayout->addWidget(okbutton);

        exit_button = new QPushButton(gridLayoutWidget);
        exit_button->setObjectName("exit_button");
        exit_button->setFont(font1);

        horizontalLayout->addWidget(exit_button);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 573, 25));
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
        password->setText(QCoreApplication::translate("MainWindow", "Password:   ", nullptr));
        okbutton->setText(QCoreApplication::translate("MainWindow", "OK", nullptr));
        exit_button->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
