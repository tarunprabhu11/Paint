/********************************************************************************
** Form generated from reading UI file 'paintwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAINTWINDOW_H
#define UI_PAINTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PaintWindow
{
public:
    QWidget *centralwidget;
    QLabel *backgorund;
    QPushButton *rectangleBtn;
    QPushButton *triangleBtn;
    QPushButton *circleBtn;
    QPushButton *lineBtn;
    QLabel *logo;
    QGraphicsView *graphicsView;
    QPushButton *closeBtn;
    QPushButton *miniBtn;
    QPushButton *colorBtn;
    QPushButton *redoBtn;
    QPushButton *tableBtn;
    QPushButton *undoBtn;
    QPushButton *saveBtn;
    QSlider *verticalSlider;
    QLineEdit *searchBar;
    QLabel *searchIcon;
    QPushButton *ersr_Btn;
    QGroupBox *tableCont;
    QTableWidget *DataTable;
    QTableWidget *InfoTable;
    QPushButton *SortASBtn;
    QPushButton *SortDSBtn;
    QLabel *redVal;
    QLabel *greenVal;
    QLabel *blueVal;
    QLabel *hexVal;
    QLabel *lineWVal;
    QGroupBox *menu;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *menuNew;
    QPushButton *menuOpen;
    QPushButton *menuSave;
    QPushButton *logoBtn;
    QPushButton *infoBtn;
    QPushButton *borderCBtn;

    void setupUi(QMainWindow *PaintWindow)
    {
        if (PaintWindow->objectName().isEmpty())
            PaintWindow->setObjectName(QString::fromUtf8("PaintWindow"));
        PaintWindow->resize(1208, 859);
        centralwidget = new QWidget(PaintWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        backgorund = new QLabel(centralwidget);
        backgorund->setObjectName(QString::fromUtf8("backgorund"));
        backgorund->setGeometry(QRect(68, 1, 1261, 851));
        QFont font;
        backgorund->setFont(font);
        backgorund->setPixmap(QPixmap(QString::fromUtf8(":/stockes/resources/whiteBackground.png")));
        rectangleBtn = new QPushButton(centralwidget);
        rectangleBtn->setObjectName(QString::fromUtf8("rectangleBtn"));
        rectangleBtn->setGeometry(QRect(308, 21, 101, 41));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(false);
        font1.setItalic(false);
        rectangleBtn->setFont(font1);
        rectangleBtn->setCursor(QCursor(Qt::PointingHandCursor));
        rectangleBtn->setStyleSheet(QString::fromUtf8("background-color: #f9f9f9;\n"
"color: black;\n"
"border-radius: 20px;\n"
"font: 11pt \"Montserrat\";"));
        triangleBtn = new QPushButton(centralwidget);
        triangleBtn->setObjectName(QString::fromUtf8("triangleBtn"));
        triangleBtn->setGeometry(QRect(641, 21, 101, 41));
        triangleBtn->setFont(font1);
        triangleBtn->setCursor(QCursor(Qt::PointingHandCursor));
        triangleBtn->setStyleSheet(QString::fromUtf8("background-color: #f9f9f9;\n"
"color: black;\n"
"border-radius: 20px;\n"
"font: 11pt \"Montserrat\";"));
        circleBtn = new QPushButton(centralwidget);
        circleBtn->setObjectName(QString::fromUtf8("circleBtn"));
        circleBtn->setGeometry(QRect(531, 21, 101, 41));
        circleBtn->setFont(font1);
        circleBtn->setCursor(QCursor(Qt::PointingHandCursor));
        circleBtn->setStyleSheet(QString::fromUtf8("background-color: #f9f9f9;\n"
"color: black;\n"
"border-radius: 20px;\n"
"font: 11pt \"Montserrat\";"));
        lineBtn = new QPushButton(centralwidget);
        lineBtn->setObjectName(QString::fromUtf8("lineBtn"));
        lineBtn->setGeometry(QRect(419, 21, 101, 41));
        lineBtn->setFont(font1);
        lineBtn->setCursor(QCursor(Qt::PointingHandCursor));
        lineBtn->setStyleSheet(QString::fromUtf8("background-color: #f9f9f9;\n"
"color: black;\n"
"border-radius: 20px;\n"
"font: 11pt \"Montserrat\";"));
        logo = new QLabel(centralwidget);
        logo->setObjectName(QString::fromUtf8("logo"));
        logo->setGeometry(QRect(90, 19, 41, 51));
        logo->setPixmap(QPixmap(QString::fromUtf8(":/stockes/resources/Logo.png")));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(138, 72, 1069, 751));
        graphicsView->setFont(font);
        graphicsView->viewport()->setProperty("cursor", QVariant(QCursor(Qt::CrossCursor)));
        graphicsView->setFocusPolicy(Qt::NoFocus);
        graphicsView->setStyleSheet(QString::fromUtf8("background-color: #f4f5f5;\n"
"border-radius: 20px;\n"
"border-top-right-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        closeBtn = new QPushButton(centralwidget);
        closeBtn->setObjectName(QString::fromUtf8("closeBtn"));
        closeBtn->setGeometry(QRect(1168, 31, 20, 21));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(closeBtn->sizePolicy().hasHeightForWidth());
        closeBtn->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setPointSize(21);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setKerning(false);
        closeBtn->setFont(font2);
        closeBtn->setCursor(QCursor(Qt::PointingHandCursor));
        closeBtn->setLayoutDirection(Qt::LeftToRight);
        closeBtn->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"color: #710101;\n"
"text-align: left;\n"
"font: 21pt \"IROicons\";"));
        closeBtn->setCheckable(false);
        closeBtn->setFlat(false);
        miniBtn = new QPushButton(centralwidget);
        miniBtn->setObjectName(QString::fromUtf8("miniBtn"));
        miniBtn->setGeometry(QRect(1143, 31, 20, 21));
        QFont font3;
        font3.setPointSize(21);
        font3.setBold(false);
        font3.setItalic(false);
        miniBtn->setFont(font3);
        miniBtn->setCursor(QCursor(Qt::PointingHandCursor));
        miniBtn->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"color: #000;\n"
"text-align: left;\n"
"font: 21pt \"IROicons\";"));
        colorBtn = new QPushButton(centralwidget);
        colorBtn->setObjectName(QString::fromUtf8("colorBtn"));
        colorBtn->setGeometry(QRect(90, 110, 26, 31));
        QFont font4;
        font4.setPointSize(20);
        font4.setBold(false);
        font4.setItalic(false);
        colorBtn->setFont(font4);
        colorBtn->setCursor(QCursor(Qt::PointingHandCursor));
        colorBtn->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"color: #a5aeaf;\n"
"text-align: left;\n"
"font: 20pt \"IROicons\";"));
        colorBtn->setFlat(true);
        redoBtn = new QPushButton(centralwidget);
        redoBtn->setObjectName(QString::fromUtf8("redoBtn"));
        redoBtn->setGeometry(QRect(90, 350, 31, 31));
        redoBtn->setFont(font4);
        redoBtn->setCursor(QCursor(Qt::PointingHandCursor));
        redoBtn->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"color: #a5aeaf;\n"
"text-align: left;\n"
"font: 20pt \"IROicons\";"));
        redoBtn->setFlat(true);
        tableBtn = new QPushButton(centralwidget);
        tableBtn->setObjectName(QString::fromUtf8("tableBtn"));
        tableBtn->setGeometry(QRect(90, 800, 29, 34));
        QFont font5;
        font5.setPointSize(28);
        font5.setBold(false);
        font5.setItalic(false);
        tableBtn->setFont(font5);
        tableBtn->setCursor(QCursor(Qt::PointingHandCursor));
        tableBtn->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"color: #a5aeaf;\n"
"text-align: left;\n"
"font: 28pt \"IROicons\";"));
        tableBtn->setFlat(true);
        undoBtn = new QPushButton(centralwidget);
        undoBtn->setObjectName(QString::fromUtf8("undoBtn"));
        undoBtn->setGeometry(QRect(88, 290, 29, 24));
        QFont font6;
        font6.setPointSize(18);
        font6.setBold(false);
        font6.setItalic(false);
        undoBtn->setFont(font6);
        undoBtn->setCursor(QCursor(Qt::PointingHandCursor));
        undoBtn->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"color: #a5aeaf;\n"
"text-align: left;\n"
"font: 18pt \"IROicons\";"));
        undoBtn->setFlat(true);
        saveBtn = new QPushButton(centralwidget);
        saveBtn->setObjectName(QString::fromUtf8("saveBtn"));
        saveBtn->setGeometry(QRect(94, 410, 21, 31));
        QFont font7;
        font7.setPointSize(19);
        font7.setBold(false);
        font7.setItalic(false);
        saveBtn->setFont(font7);
        saveBtn->setCursor(QCursor(Qt::PointingHandCursor));
        saveBtn->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"color: #a5aeaf;\n"
"text-align: left;\n"
"font: 19pt \"IROicons\";"));
        saveBtn->setFlat(true);
        verticalSlider = new QSlider(centralwidget);
        verticalSlider->setObjectName(QString::fromUtf8("verticalSlider"));
        verticalSlider->setGeometry(QRect(94, 471, 16, 301));
        verticalSlider->setStyleSheet(QString::fromUtf8("\n"
"\n"
".QSlider::groove:vertical {\n"
"    border: 1px solid #262626;\n"
"    width: 3px;\n"
"	background: #000000;\n"
"}\n"
"\n"
".QSlider::handle:vertical {\n"
"	background:#000000;\n"
"    height: 8px;\n"
"    margin: 0px -5px;\n"
"}"));
        verticalSlider->setMinimum(1);
        verticalSlider->setMaximum(25);
        verticalSlider->setOrientation(Qt::Vertical);
        searchBar = new QLineEdit(centralwidget);
        searchBar->setObjectName(QString::fromUtf8("searchBar"));
        searchBar->setGeometry(QRect(897, 26, 201, 33));
        QFont font8;
        font8.setPointSize(9);
        font8.setBold(false);
        font8.setItalic(false);
        searchBar->setFont(font8);
        searchBar->setStyleSheet(QString::fromUtf8("background-color: #f9f9f9;\n"
"color: black;\n"
"border-radius: 15px;\n"
"padding: 45px;\n"
"font: 9pt \"Montserrat\";\n"
""));
        searchIcon = new QLabel(centralwidget);
        searchIcon->setObjectName(QString::fromUtf8("searchIcon"));
        searchIcon->setGeometry(QRect(912, 27, 22, 31));
        QFont font9;
        font9.setPointSize(20);
        font9.setBold(false);
        font9.setItalic(false);
        font9.setKerning(true);
        searchIcon->setFont(font9);
        searchIcon->setStyleSheet(QString::fromUtf8("font: 20pt \"IROicons\";"));
        ersr_Btn = new QPushButton(centralwidget);
        ersr_Btn->setObjectName(QString::fromUtf8("ersr_Btn"));
        ersr_Btn->setGeometry(QRect(88, 230, 29, 24));
        QFont font10;
        font10.setPointSize(22);
        font10.setBold(false);
        font10.setItalic(false);
        ersr_Btn->setFont(font10);
        ersr_Btn->setCursor(QCursor(Qt::PointingHandCursor));
        ersr_Btn->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"color: #a5aeaf;\n"
"text-align: left;\n"
"font: 22pt \"IROicons\";"));
        ersr_Btn->setFlat(true);
        tableCont = new QGroupBox(centralwidget);
        tableCont->setObjectName(QString::fromUtf8("tableCont"));
        tableCont->setGeometry(QRect(1220, 149, 321, 571));
        tableCont->setStyleSheet(QString::fromUtf8("border-radius:0 px;"));
        DataTable = new QTableWidget(tableCont);
        DataTable->setObjectName(QString::fromUtf8("DataTable"));
        DataTable->setEnabled(true);
        DataTable->setGeometry(QRect(0, 0, 321, 311));
        InfoTable = new QTableWidget(tableCont);
        InfoTable->setObjectName(QString::fromUtf8("InfoTable"));
        InfoTable->setEnabled(true);
        InfoTable->setGeometry(QRect(0, 330, 321, 161));
        SortASBtn = new QPushButton(tableCont);
        SortASBtn->setObjectName(QString::fromUtf8("SortASBtn"));
        SortASBtn->setEnabled(true);
        SortASBtn->setGeometry(QRect(-1, 510, 161, 41));
        SortASBtn->setStyleSheet(QString::fromUtf8("background-color: #f9f9f9;\n"
"color: black;\n"
"border-radius: 20px;\n"
"font: 11pt \"Montserrat\";"));
        SortDSBtn = new QPushButton(tableCont);
        SortDSBtn->setObjectName(QString::fromUtf8("SortDSBtn"));
        SortDSBtn->setEnabled(true);
        SortDSBtn->setGeometry(QRect(160, 510, 161, 41));
        SortDSBtn->setStyleSheet(QString::fromUtf8("background-color: #f9f9f9;\n"
"color: black;\n"
"border-radius: 20px;\n"
"font: 11pt \"Montserrat\";"));
        redVal = new QLabel(centralwidget);
        redVal->setObjectName(QString::fromUtf8("redVal"));
        redVal->setGeometry(QRect(250, 829, 51, 16));
        redVal->setFont(font);
        greenVal = new QLabel(centralwidget);
        greenVal->setObjectName(QString::fromUtf8("greenVal"));
        greenVal->setGeometry(QRect(410, 829, 51, 16));
        greenVal->setFont(font);
        blueVal = new QLabel(centralwidget);
        blueVal->setObjectName(QString::fromUtf8("blueVal"));
        blueVal->setGeometry(QRect(580, 829, 51, 16));
        blueVal->setFont(font);
        hexVal = new QLabel(centralwidget);
        hexVal->setObjectName(QString::fromUtf8("hexVal"));
        hexVal->setGeometry(QRect(920, 829, 101, 16));
        hexVal->setFont(font);
        lineWVal = new QLabel(centralwidget);
        lineWVal->setObjectName(QString::fromUtf8("lineWVal"));
        lineWVal->setGeometry(QRect(1060, 829, 111, 16));
        lineWVal->setFont(font);
        menu = new QGroupBox(centralwidget);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu->setGeometry(QRect(50, -115, 121, 111));
        menu->setStyleSheet(QString::fromUtf8("background-color:  #fff;\n"
"border-radius: 15px;"));
        verticalLayoutWidget = new QWidget(menu);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 121, 111));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        menuNew = new QPushButton(verticalLayoutWidget);
        menuNew->setObjectName(QString::fromUtf8("menuNew"));
        menuNew->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 9pt \"Montserrat\";"));

        verticalLayout->addWidget(menuNew);

        menuOpen = new QPushButton(verticalLayoutWidget);
        menuOpen->setObjectName(QString::fromUtf8("menuOpen"));
        menuOpen->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 9pt \"Montserrat\";"));

        verticalLayout->addWidget(menuOpen);

        menuSave = new QPushButton(verticalLayoutWidget);
        menuSave->setObjectName(QString::fromUtf8("menuSave"));
        menuSave->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 9pt \"Montserrat\";"));

        verticalLayout->addWidget(menuSave);

        logoBtn = new QPushButton(centralwidget);
        logoBtn->setObjectName(QString::fromUtf8("logoBtn"));
        logoBtn->setGeometry(QRect(90, 20, 40, 42));
        logoBtn->setStyleSheet(QString::fromUtf8("QPushButton{background: transparent;}"));
        logoBtn->setFlat(true);
        infoBtn = new QPushButton(centralwidget);
        infoBtn->setObjectName(QString::fromUtf8("infoBtn"));
        infoBtn->setGeometry(QRect(1170, 822, 21, 31));
        infoBtn->setFont(font7);
        infoBtn->setCursor(QCursor(Qt::PointingHandCursor));
        infoBtn->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"color: #a5aeaf;\n"
"text-align: left;\n"
"font: 19pt \"IROicons\";"));
        infoBtn->setFlat(true);
        borderCBtn = new QPushButton(centralwidget);
        borderCBtn->setObjectName(QString::fromUtf8("borderCBtn"));
        borderCBtn->setGeometry(QRect(90, 170, 26, 31));
        borderCBtn->setFont(font4);
        borderCBtn->setCursor(QCursor(Qt::PointingHandCursor));
        borderCBtn->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"color: #a5aeaf;\n"
"text-align: left;\n"
"font: 20pt \"IROicons\";"));
        borderCBtn->setFlat(true);
        PaintWindow->setCentralWidget(centralwidget);

        retranslateUi(PaintWindow);
        QObject::connect(closeBtn, &QPushButton::clicked, PaintWindow, qOverload<>(&QMainWindow::close));
        QObject::connect(miniBtn, &QPushButton::clicked, PaintWindow, qOverload<>(&QMainWindow::showMinimized));

        closeBtn->setDefault(false);


        QMetaObject::connectSlotsByName(PaintWindow);
    } // setupUi

    void retranslateUi(QMainWindow *PaintWindow)
    {
        PaintWindow->setWindowTitle(QCoreApplication::translate("PaintWindow", "MainWindow", nullptr));
        backgorund->setText(QString());
#if QT_CONFIG(tooltip)
        rectangleBtn->setToolTip(QCoreApplication::translate("PaintWindow", "<html><head/><body><p>Draw Rectangle</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        rectangleBtn->setText(QCoreApplication::translate("PaintWindow", "Rectangle", nullptr));
#if QT_CONFIG(tooltip)
        triangleBtn->setToolTip(QCoreApplication::translate("PaintWindow", "<html><head/><body><p>Draw Triangle</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        triangleBtn->setText(QCoreApplication::translate("PaintWindow", "Triangle", nullptr));
#if QT_CONFIG(tooltip)
        circleBtn->setToolTip(QCoreApplication::translate("PaintWindow", "<html><head/><body><p>Draw Circle</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        circleBtn->setText(QCoreApplication::translate("PaintWindow", "Circle", nullptr));
#if QT_CONFIG(tooltip)
        lineBtn->setToolTip(QCoreApplication::translate("PaintWindow", "<html><head/><body><p>Draw Line</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        lineBtn->setText(QCoreApplication::translate("PaintWindow", "Line", nullptr));
        logo->setText(QString());
#if QT_CONFIG(tooltip)
        closeBtn->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        closeBtn->setText(QCoreApplication::translate("PaintWindow", "x", nullptr));
        miniBtn->setText(QCoreApplication::translate("PaintWindow", "y", nullptr));
#if QT_CONFIG(tooltip)
        colorBtn->setToolTip(QCoreApplication::translate("PaintWindow", "<html><head/><body><p>Fill Color</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        colorBtn->setWhatsThis(QCoreApplication::translate("PaintWindow", "<html><head/><body><p>Color</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        colorBtn->setText(QCoreApplication::translate("PaintWindow", "i", nullptr));
#if QT_CONFIG(tooltip)
        redoBtn->setToolTip(QCoreApplication::translate("PaintWindow", "<html><head/><body><p>Redo</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        redoBtn->setText(QCoreApplication::translate("PaintWindow", "r", nullptr));
#if QT_CONFIG(shortcut)
        redoBtn->setShortcut(QCoreApplication::translate("PaintWindow", "Ctrl+Y", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        tableBtn->setToolTip(QCoreApplication::translate("PaintWindow", "<html><head/><body><p>Open Table</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        tableBtn->setText(QCoreApplication::translate("PaintWindow", "o", nullptr));
#if QT_CONFIG(tooltip)
        undoBtn->setToolTip(QCoreApplication::translate("PaintWindow", "<html><head/><body><p>Undo</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        undoBtn->setText(QCoreApplication::translate("PaintWindow", "u", nullptr));
#if QT_CONFIG(shortcut)
        undoBtn->setShortcut(QCoreApplication::translate("PaintWindow", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        saveBtn->setToolTip(QCoreApplication::translate("PaintWindow", "<html><head/><body><p>Save</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        saveBtn->setText(QCoreApplication::translate("PaintWindow", "f", nullptr));
#if QT_CONFIG(shortcut)
        saveBtn->setShortcut(QCoreApplication::translate("PaintWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        verticalSlider->setToolTip(QCoreApplication::translate("PaintWindow", "<html><head/><body><p>Line Weight Slider</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        searchBar->setToolTip(QCoreApplication::translate("PaintWindow", "<html><head/><body><p>Search for Item</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        searchBar->setText(QString());
        searchIcon->setText(QCoreApplication::translate("PaintWindow", "c", nullptr));
#if QT_CONFIG(tooltip)
        ersr_Btn->setToolTip(QCoreApplication::translate("PaintWindow", "<html><head/><body><p>Erase</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        ersr_Btn->setText(QCoreApplication::translate("PaintWindow", "e", nullptr));
        tableCont->setTitle(QString());
        SortASBtn->setText(QCoreApplication::translate("PaintWindow", "Sort Ascending", nullptr));
        SortDSBtn->setText(QCoreApplication::translate("PaintWindow", "Sort Dscending", nullptr));
        redVal->setText(QCoreApplication::translate("PaintWindow", "R: 0 ", nullptr));
        greenVal->setText(QCoreApplication::translate("PaintWindow", "G: 0  ", nullptr));
        blueVal->setText(QCoreApplication::translate("PaintWindow", "B:0", nullptr));
        hexVal->setText(QCoreApplication::translate("PaintWindow", "HEX: #000000", nullptr));
        lineWVal->setText(QCoreApplication::translate("PaintWindow", "Line Weight: 0", nullptr));
        menu->setTitle(QString());
#if QT_CONFIG(tooltip)
        menuNew->setToolTip(QCoreApplication::translate("PaintWindow", "<html><head/><body><p>Make a New Draw</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        menuNew->setText(QCoreApplication::translate("PaintWindow", "New", nullptr));
#if QT_CONFIG(tooltip)
        menuOpen->setToolTip(QCoreApplication::translate("PaintWindow", "<html><head/><body><p>Open a Draw</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        menuOpen->setText(QCoreApplication::translate("PaintWindow", "Open", nullptr));
#if QT_CONFIG(tooltip)
        menuSave->setToolTip(QCoreApplication::translate("PaintWindow", "<html><head/><body><p>Save a Draw</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        menuSave->setText(QCoreApplication::translate("PaintWindow", "Save", nullptr));
#if QT_CONFIG(tooltip)
        logoBtn->setToolTip(QCoreApplication::translate("PaintWindow", "<html><head/><body><p>Menu</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        logoBtn->setText(QString());
#if QT_CONFIG(tooltip)
        infoBtn->setToolTip(QCoreApplication::translate("PaintWindow", "<html><head/><body><p>About Us</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        infoBtn->setText(QCoreApplication::translate("PaintWindow", "l", nullptr));
#if QT_CONFIG(tooltip)
        borderCBtn->setToolTip(QCoreApplication::translate("PaintWindow", "<html><head/><body><p>Border Color</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        borderCBtn->setText(QCoreApplication::translate("PaintWindow", "k", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PaintWindow: public Ui_PaintWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAINTWINDOW_H
