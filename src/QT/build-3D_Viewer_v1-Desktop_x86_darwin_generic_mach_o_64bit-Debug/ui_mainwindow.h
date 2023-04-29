/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>
#include <glview.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    glview *display_widget;
    QLabel *label;
    QPushButton *openfile;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QTextBrowser *displayer;
    QLabel *label_8;
    QDoubleSpinBox *doubleSpinBox;
    QDoubleSpinBox *rotate_x;
    QDoubleSpinBox *rotate_y;
    QDoubleSpinBox *rotate_z;
    QDoubleSpinBox *mov_x;
    QDoubleSpinBox *mov_y;
    QDoubleSpinBox *mov_z;
    QPushButton *screen_jpeg;
    QPushButton *gif;
    QPushButton *screen_bmp;
    QSlider *projection_type;
    QPushButton *background_color;
    QPushButton *line_color;
    QPushButton *vertices_color;
    QLabel *label_9;
    QSpinBox *line_size;
    QLabel *label_10;
    QSpinBox *vert_size;
    QLabel *label_11;
    QSlider *vert_type;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QSlider *linetype;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(932, 715);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        display_widget = new glview(centralwidget);
        display_widget->setObjectName(QString::fromUtf8("display_widget"));
        display_widget->setGeometry(QRect(40, 10, 600, 600));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(759, 320, 91, 20));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        openfile = new QPushButton(centralwidget);
        openfile->setObjectName(QString::fromUtf8("openfile"));
        openfile->setGeometry(QRect(720, 0, 100, 32));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(759, 350, 81, 20));
        label_2->setFont(font);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(759, 380, 71, 20));
        label_3->setFont(font);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(744, 410, 91, 20));
        label_4->setFont(font);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(744, 470, 91, 20));
        label_5->setFont(font);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(744, 440, 91, 20));
        label_6->setFont(font);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(769, 502, 58, 16));
        label_7->setFont(font);
        displayer = new QTextBrowser(centralwidget);
        displayer->setObjectName(QString::fromUtf8("displayer"));
        displayer->setGeometry(QRect(680, 30, 171, 61));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(670, 249, 101, 41));
        QFont font1;
        font1.setPointSize(16);
        font1.setKerning(false);
        label_8->setFont(font1);
        doubleSpinBox = new QDoubleSpinBox(centralwidget);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setGeometry(QRect(839, 500, 62, 22));
        doubleSpinBox->setMinimum(0.200000000000000);
        doubleSpinBox->setMaximum(10.000000000000000);
        doubleSpinBox->setSingleStep(0.100000000000000);
        doubleSpinBox->setValue(1.000000000000000);
        rotate_x = new QDoubleSpinBox(centralwidget);
        rotate_x->setObjectName(QString::fromUtf8("rotate_x"));
        rotate_x->setGeometry(QRect(839, 410, 62, 22));
        rotate_x->setMinimum(-180.000000000000000);
        rotate_x->setMaximum(180.000000000000000);
        rotate_y = new QDoubleSpinBox(centralwidget);
        rotate_y->setObjectName(QString::fromUtf8("rotate_y"));
        rotate_y->setGeometry(QRect(839, 440, 62, 22));
        rotate_y->setMinimum(-180.000000000000000);
        rotate_y->setMaximum(180.000000000000000);
        rotate_z = new QDoubleSpinBox(centralwidget);
        rotate_z->setObjectName(QString::fromUtf8("rotate_z"));
        rotate_z->setGeometry(QRect(839, 470, 62, 22));
        rotate_z->setMinimum(-180.000000000000000);
        rotate_z->setMaximum(180.000000000000000);
        mov_x = new QDoubleSpinBox(centralwidget);
        mov_x->setObjectName(QString::fromUtf8("mov_x"));
        mov_x->setGeometry(QRect(839, 320, 62, 22));
        mov_x->setMinimum(-200.000000000000000);
        mov_x->setMaximum(200.000000000000000);
        mov_y = new QDoubleSpinBox(centralwidget);
        mov_y->setObjectName(QString::fromUtf8("mov_y"));
        mov_y->setGeometry(QRect(839, 350, 62, 22));
        mov_y->setMinimum(-200.000000000000000);
        mov_y->setMaximum(200.000000000000000);
        mov_z = new QDoubleSpinBox(centralwidget);
        mov_z->setObjectName(QString::fromUtf8("mov_z"));
        mov_z->setGeometry(QRect(839, 380, 62, 22));
        mov_z->setMinimum(-200.000000000000000);
        mov_z->setMaximum(200.000000000000000);
        screen_jpeg = new QPushButton(centralwidget);
        screen_jpeg->setObjectName(QString::fromUtf8("screen_jpeg"));
        screen_jpeg->setGeometry(QRect(740, 90, 51, 45));
        gif = new QPushButton(centralwidget);
        gif->setObjectName(QString::fromUtf8("gif"));
        gif->setGeometry(QRect(800, 90, 51, 45));
        screen_bmp = new QPushButton(centralwidget);
        screen_bmp->setObjectName(QString::fromUtf8("screen_bmp"));
        screen_bmp->setGeometry(QRect(680, 90, 51, 45));
        projection_type = new QSlider(centralwidget);
        projection_type->setObjectName(QString::fromUtf8("projection_type"));
        projection_type->setGeometry(QRect(670, 290, 71, 25));
        projection_type->setMaximum(1);
        projection_type->setPageStep(1);
        projection_type->setOrientation(Qt::Horizontal);
        background_color = new QPushButton(centralwidget);
        background_color->setObjectName(QString::fromUtf8("background_color"));
        background_color->setGeometry(QRect(800, 150, 100, 41));
        background_color->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     background-color:rgb(131, 225, 193);\n"
"	border: 1px solid black;\n"
"     border-radius: 5px;\n"
"}"));
        line_color = new QPushButton(centralwidget);
        line_color->setObjectName(QString::fromUtf8("line_color"));
        line_color->setGeometry(QRect(800, 205, 100, 41));
        line_color->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     background-color:rgb(131, 225, 193);\n"
"	border: 1px solid black;\n"
"     border-radius: 5px;\n"
"}"));
        vertices_color = new QPushButton(centralwidget);
        vertices_color->setObjectName(QString::fromUtf8("vertices_color"));
        vertices_color->setGeometry(QRect(800, 260, 100, 41));
        vertices_color->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     background-color:rgb(131, 225, 193);\n"
"	border: 1px solid black;\n"
"     border-radius: 5px;\n"
"}"));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(734, 563, 101, 20));
        label_9->setFont(font);
        line_size = new QSpinBox(centralwidget);
        line_size->setObjectName(QString::fromUtf8("line_size"));
        line_size->setGeometry(QRect(840, 560, 61, 22));
        line_size->setMinimum(1);
        line_size->setMaximum(10);
        line_size->setValue(1);
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(697, 533, 141, 16));
        label_10->setFont(font);
        vert_size = new QSpinBox(centralwidget);
        vert_size->setObjectName(QString::fromUtf8("vert_size"));
        vert_size->setGeometry(QRect(840, 530, 61, 22));
        vert_size->setMinimum(1);
        vert_size->setMaximum(10);
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(660, 150, 111, 16));
        QFont font2;
        font2.setPointSize(16);
        label_11->setFont(font2);
        vert_type = new QSlider(centralwidget);
        vert_type->setObjectName(QString::fromUtf8("vert_type"));
        vert_type->setGeometry(QRect(670, 167, 71, 25));
        vert_type->setMaximum(2);
        vert_type->setPageStep(1);
        vert_type->setValue(1);
        vert_type->setOrientation(Qt::Horizontal);
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(690, 190, 31, 16));
        QFont font3;
        font3.setPointSize(8);
        label_12->setFont(font3);
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(730, 190, 31, 16));
        label_13->setFont(font3);
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(660, 190, 31, 16));
        label_14->setFont(font3);
        label_15 = new QLabel(centralwidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(675, 210, 81, 16));
        label_15->setFont(font2);
        linetype = new QSlider(centralwidget);
        linetype->setObjectName(QString::fromUtf8("linetype"));
        linetype->setGeometry(QRect(670, 230, 71, 25));
        linetype->setMaximum(1);
        linetype->setOrientation(Qt::Horizontal);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 932, 22));
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
        label->setText(QCoreApplication::translate("MainWindow", "MOVE X", nullptr));
        openfile->setText(QCoreApplication::translate("MainWindow", "CHOOSE FILE", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "MOVE Y", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "MOVE Z", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "ROTATE X", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "ROTATE Z", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "ROTATE Y", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "ZOOM", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "PROJECTION\n"
"TYPE", nullptr));
        screen_jpeg->setText(QCoreApplication::translate("MainWindow", "screen\n"
"jpeg", nullptr));
        gif->setText(QCoreApplication::translate("MainWindow", "gif", nullptr));
        screen_bmp->setText(QCoreApplication::translate("MainWindow", "screen\n"
"bmp", nullptr));
        background_color->setText(QCoreApplication::translate("MainWindow", "BACKGROUND\n"
"COLOR", nullptr));
        line_color->setText(QCoreApplication::translate("MainWindow", "LINE\n"
"COLOR", nullptr));
        vertices_color->setText(QCoreApplication::translate("MainWindow", "VERTICES\n"
"COLOR", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "LINES SIZE", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "VERTICES SIZE", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "VERTICES TYPE", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "circle", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "square", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "no", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "LINE TYPE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
