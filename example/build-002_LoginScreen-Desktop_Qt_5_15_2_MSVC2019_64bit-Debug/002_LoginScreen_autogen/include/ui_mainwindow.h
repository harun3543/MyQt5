/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QWidget *topPanel;
    QHBoxLayout *horizontalLayout;
    QDateTimeEdit *dateTimeEdit;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnOne;
    QPushButton *btnTwo;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *hboxLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_2;
    QWidget *loginForm;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QTextEdit *txtUsername;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QTextEdit *txtPassword;
    QPushButton *btnLogin;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("#loginForm \n"
"{\n"
"	background: rgba(0, 0, 0, 80);\n"
"	border-radius: 8px;\n"
"}\n"
"\n"
"#centralWidget\n"
"{\n"
"	background: rgba(32, 80, 96, 100); \n"
"}\n"
"\n"
"#topPanel \n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0, y2:0, stop:0 rgba(91, 204, 233, 100), stop:1 rgba(32, 80, 96, 100));\n"
"}\n"
"\n"
"QLabel \n"
"{\n"
"	color: white;\n"
"}\n"
"\n"
"QLineEdit\n"
"{\n"
"	border-radius: 3px;\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"	color: white;\n"
"	background-color: #27a9e3;\n"
"	border-witdh: 0px;\n"
"	border-radius: 3px;\n"
"}\n"
"\n"
"QPushButton:hover {background-color: #66c011;}\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        topPanel = new QWidget(centralwidget);
        topPanel->setObjectName(QString::fromUtf8("topPanel"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(topPanel->sizePolicy().hasHeightForWidth());
        topPanel->setSizePolicy(sizePolicy);
        topPanel->setStyleSheet(QString::fromUtf8("font: 11pt \"Verdana\";\n"
"\n"
""));
        horizontalLayout = new QHBoxLayout(topPanel);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        dateTimeEdit = new QDateTimeEdit(topPanel);
        dateTimeEdit->setObjectName(QString::fromUtf8("dateTimeEdit"));

        horizontalLayout->addWidget(dateTimeEdit);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnOne = new QPushButton(topPanel);
        btnOne->setObjectName(QString::fromUtf8("btnOne"));
        btnOne->setMinimumSize(QSize(50, 50));
        btnOne->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(255, 255, 0);\n"
""));

        horizontalLayout->addWidget(btnOne);

        btnTwo = new QPushButton(topPanel);
        btnTwo->setObjectName(QString::fromUtf8("btnTwo"));
        btnTwo->setMinimumSize(QSize(50, 50));

        horizontalLayout->addWidget(btnTwo);


        verticalLayout->addWidget(topPanel);

        verticalSpacer_3 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMinimumSize(QSize(150, 150));
        label->setStyleSheet(QString::fromUtf8("border: 1px solid;"));

        hboxLayout->addWidget(label);


        verticalLayout->addLayout(hboxLayout);

        verticalSpacer_4 = new QSpacerItem(5, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        loginForm = new QWidget(centralwidget);
        loginForm->setObjectName(QString::fromUtf8("loginForm"));
        sizePolicy1.setHeightForWidth(loginForm->sizePolicy().hasHeightForWidth());
        loginForm->setSizePolicy(sizePolicy1);
        loginForm->setMinimumSize(QSize(350, 200));
        loginForm->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_2 = new QVBoxLayout(loginForm);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(35, 35, 35, 35);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(10, -1, 10, -1);
        label_3 = new QLabel(loginForm);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setStyleSheet(QString::fromUtf8("font: 11pt \"Verdana\";"));

        horizontalLayout_4->addWidget(label_3);

        txtUsername = new QTextEdit(loginForm);
        txtUsername->setObjectName(QString::fromUtf8("txtUsername"));
        sizePolicy1.setHeightForWidth(txtUsername->sizePolicy().hasHeightForWidth());
        txtUsername->setSizePolicy(sizePolicy1);
        txtUsername->setMaximumSize(QSize(250, 25));
        txtUsername->setStyleSheet(QString::fromUtf8("font: 11pt \"Verdana\";"));
        txtUsername->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        horizontalLayout_4->addWidget(txtUsername);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(10, 0, 10, -1);
        label_4 = new QLabel(loginForm);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setStyleSheet(QString::fromUtf8("font: 11pt \"Verdana\";"));

        horizontalLayout_3->addWidget(label_4);

        txtPassword = new QTextEdit(loginForm);
        txtPassword->setObjectName(QString::fromUtf8("txtPassword"));
        sizePolicy1.setHeightForWidth(txtPassword->sizePolicy().hasHeightForWidth());
        txtPassword->setSizePolicy(sizePolicy1);
        txtPassword->setMaximumSize(QSize(250, 25));
        txtPassword->setStyleSheet(QString::fromUtf8("font: 11pt \"Verdana\";"));
        txtPassword->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        horizontalLayout_3->addWidget(txtPassword);


        verticalLayout_2->addLayout(horizontalLayout_3);

        btnLogin = new QPushButton(loginForm);
        btnLogin->setObjectName(QString::fromUtf8("btnLogin"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btnLogin->sizePolicy().hasHeightForWidth());
        btnLogin->setSizePolicy(sizePolicy2);
        btnLogin->setMinimumSize(QSize(0, 25));

        verticalLayout_2->addWidget(btnLogin);

        verticalSpacer_2 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);


        horizontalLayout_2->addWidget(loginForm);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btnOne->setText(QString());
        btnTwo->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Username:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Password:", nullptr));
        btnLogin->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
