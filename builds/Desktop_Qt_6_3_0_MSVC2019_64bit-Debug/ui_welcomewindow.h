/********************************************************************************
** Form generated from reading UI file 'welcomewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOMEWINDOW_H
#define UI_WELCOMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WelcomeWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *newPaintBtn;
    QPushButton *openPaintBtn;

    void setupUi(QMainWindow *WelcomeWindow)
    {
        if (WelcomeWindow->objectName().isEmpty())
            WelcomeWindow->setObjectName(QString::fromUtf8("WelcomeWindow"));
        WelcomeWindow->resize(563, 415);
        centralwidget = new QWidget(WelcomeWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(190, 20, 581, 411));
        label->setPixmap(QPixmap(QString::fromUtf8(":/stockes/resources/Back open.png")));
        newPaintBtn = new QPushButton(centralwidget);
        newPaintBtn->setObjectName(QString::fromUtf8("newPaintBtn"));
        newPaintBtn->setGeometry(QRect(350, 226, 151, 31));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        newPaintBtn->setFont(font);
        newPaintBtn->setAutoFillBackground(false);
        newPaintBtn->setStyleSheet(QString::fromUtf8("background-color: black;\n"
"color: white;\n"
"border-radius: 13px;"));
        openPaintBtn = new QPushButton(centralwidget);
        openPaintBtn->setObjectName(QString::fromUtf8("openPaintBtn"));
        openPaintBtn->setGeometry(QRect(350, 270, 151, 31));
        openPaintBtn->setFont(font);
        openPaintBtn->setStyleSheet(QString::fromUtf8("background-color: black;\n"
"color: white;\n"
"border-radius: 13px;"));
        WelcomeWindow->setCentralWidget(centralwidget);

        retranslateUi(WelcomeWindow);

        QMetaObject::connectSlotsByName(WelcomeWindow);
    } // setupUi

    void retranslateUi(QMainWindow *WelcomeWindow)
    {
        WelcomeWindow->setWindowTitle(QCoreApplication::translate("WelcomeWindow", "MainWindow", nullptr));
        label->setText(QString());
        newPaintBtn->setText(QCoreApplication::translate("WelcomeWindow", "New Painting", nullptr));
        openPaintBtn->setText(QCoreApplication::translate("WelcomeWindow", "Open Painting", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WelcomeWindow: public Ui_WelcomeWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOMEWINDOW_H
