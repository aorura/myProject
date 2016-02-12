/********************************************************************************
** Form generated from reading UI file 'testpango.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTPANGO_H
#define UI_TESTPANGO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestPangoClass
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QPushButton *pushButton_5;
    QPushButton *pushButton_10;
    QLabel *labelPixmap;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QTextEdit *textEdit;
    QLabel *label_18;
    QLineEdit *lineEditX;
    QLabel *label_17;
    QLineEdit *lineEditY;
    QLabel *label_16;
    QComboBox *comboBoxFontFamily;
    QLabel *label_4;
    QLineEdit *lineEditSize;
    QLabel *label;
    QLineEdit *lineEditWidth;
    QLabel *label_2;
    QLineEdit *lineEditHeight;
    QCheckBox *checkBoxDrawLayout;
    QLabel *label_5;
    QComboBox *comboBoxWrap;
    QLabel *label_6;
    QComboBox *comboBoxEllipse;
    QLabel *label_7;
    QLineEdit *lineEditIndent;
    QLabel *label_8;
    QLineEdit *lineEditSpacing;
    QCheckBox *checkBoxJustify;
    QCheckBox *checkBoxAutoDir;
    QLabel *label_9;
    QComboBox *comboBoxAlignment;
    QCheckBox *checkBoxSingleParagraphMode;
    QLabel *label_10;
    QLineEdit *lineEditForeRed;
    QLabel *label_13;
    QLineEdit *lineEditBackRed;
    QLabel *label_11;
    QLineEdit *lineEditForeGreen;
    QLabel *label_14;
    QLineEdit *lineEditBackGreen;
    QLabel *label_12;
    QLineEdit *lineEditForeBlue;
    QLabel *label_15;
    QLineEdit *lineEditBackBlue;
    QSpacerItem *horizontalSpacer;
    QPushButton *button_apply;
    QStatusBar *statusBar;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *TestPangoClass)
    {
        if (TestPangoClass->objectName().isEmpty())
            TestPangoClass->setObjectName(QString::fromUtf8("TestPangoClass"));
        TestPangoClass->resize(905, 595);
        centralWidget = new QWidget(TestPangoClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout_2 = new QHBoxLayout(centralWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pushButton_6 = new QPushButton(frame);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        gridLayout_2->addWidget(pushButton_6, 5, 0, 1, 1);

        pushButton_7 = new QPushButton(frame);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        gridLayout_2->addWidget(pushButton_7, 6, 0, 1, 1);

        pushButton_8 = new QPushButton(frame);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        gridLayout_2->addWidget(pushButton_8, 7, 0, 1, 1);

        pushButton_9 = new QPushButton(frame);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));

        gridLayout_2->addWidget(pushButton_9, 8, 0, 1, 1);

        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout_2->addWidget(pushButton_2, 1, 0, 1, 1);

        pushButton_4 = new QPushButton(frame);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout_2->addWidget(pushButton_4, 3, 0, 1, 1);

        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout_2->addWidget(pushButton_3, 2, 0, 1, 1);

        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout_2->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_5 = new QPushButton(frame);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        gridLayout_2->addWidget(pushButton_5, 4, 0, 1, 1);

        pushButton_10 = new QPushButton(frame);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));

        gridLayout_2->addWidget(pushButton_10, 9, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout_2);

        labelPixmap = new QLabel(frame);
        labelPixmap->setObjectName(QString::fromUtf8("labelPixmap"));

        horizontalLayout->addWidget(labelPixmap);


        horizontalLayout_2->addWidget(frame);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        textEdit = new QTextEdit(groupBox);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        gridLayout->addWidget(textEdit, 0, 2, 1, 5);

        label_18 = new QLabel(groupBox);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout->addWidget(label_18, 1, 0, 1, 1);

        lineEditX = new QLineEdit(groupBox);
        lineEditX->setObjectName(QString::fromUtf8("lineEditX"));
        lineEditX->setInputMethodHints(Qt::ImhPreferNumbers);

        gridLayout->addWidget(lineEditX, 1, 2, 1, 2);

        label_17 = new QLabel(groupBox);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout->addWidget(label_17, 1, 4, 1, 1);

        lineEditY = new QLineEdit(groupBox);
        lineEditY->setObjectName(QString::fromUtf8("lineEditY"));
        lineEditY->setInputMethodHints(Qt::ImhPreferNumbers);

        gridLayout->addWidget(lineEditY, 1, 5, 1, 2);

        label_16 = new QLabel(groupBox);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout->addWidget(label_16, 2, 0, 1, 2);

        comboBoxFontFamily = new QComboBox(groupBox);
        comboBoxFontFamily->setObjectName(QString::fromUtf8("comboBoxFontFamily"));

        gridLayout->addWidget(comboBoxFontFamily, 2, 3, 1, 3);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        lineEditSize = new QLineEdit(groupBox);
        lineEditSize->setObjectName(QString::fromUtf8("lineEditSize"));
        lineEditSize->setInputMethodHints(Qt::ImhPreferNumbers);

        gridLayout->addWidget(lineEditSize, 3, 3, 1, 2);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 4, 0, 1, 3);

        lineEditWidth = new QLineEdit(groupBox);
        lineEditWidth->setObjectName(QString::fromUtf8("lineEditWidth"));
        lineEditWidth->setInputMethodHints(Qt::ImhPreferNumbers);

        gridLayout->addWidget(lineEditWidth, 4, 3, 1, 2);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 5, 0, 1, 3);

        lineEditHeight = new QLineEdit(groupBox);
        lineEditHeight->setObjectName(QString::fromUtf8("lineEditHeight"));
        lineEditHeight->setInputMethodHints(Qt::ImhPreferNumbers);

        gridLayout->addWidget(lineEditHeight, 5, 3, 1, 2);

        checkBoxDrawLayout = new QCheckBox(groupBox);
        checkBoxDrawLayout->setObjectName(QString::fromUtf8("checkBoxDrawLayout"));

        gridLayout->addWidget(checkBoxDrawLayout, 5, 5, 1, 2);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 6, 0, 1, 1);

        comboBoxWrap = new QComboBox(groupBox);
        comboBoxWrap->setObjectName(QString::fromUtf8("comboBoxWrap"));

        gridLayout->addWidget(comboBoxWrap, 6, 3, 1, 2);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 7, 0, 1, 1);

        comboBoxEllipse = new QComboBox(groupBox);
        comboBoxEllipse->setObjectName(QString::fromUtf8("comboBoxEllipse"));

        gridLayout->addWidget(comboBoxEllipse, 7, 3, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 8, 0, 1, 1);

        lineEditIndent = new QLineEdit(groupBox);
        lineEditIndent->setObjectName(QString::fromUtf8("lineEditIndent"));
        lineEditIndent->setInputMethodHints(Qt::ImhPreferNumbers);

        gridLayout->addWidget(lineEditIndent, 8, 3, 1, 2);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 9, 0, 1, 1);

        lineEditSpacing = new QLineEdit(groupBox);
        lineEditSpacing->setObjectName(QString::fromUtf8("lineEditSpacing"));
        lineEditSpacing->setInputMethodHints(Qt::ImhPreferNumbers);

        gridLayout->addWidget(lineEditSpacing, 9, 3, 1, 2);

        checkBoxJustify = new QCheckBox(groupBox);
        checkBoxJustify->setObjectName(QString::fromUtf8("checkBoxJustify"));

        gridLayout->addWidget(checkBoxJustify, 10, 0, 1, 1);

        checkBoxAutoDir = new QCheckBox(groupBox);
        checkBoxAutoDir->setObjectName(QString::fromUtf8("checkBoxAutoDir"));

        gridLayout->addWidget(checkBoxAutoDir, 11, 0, 1, 3);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 12, 0, 1, 1);

        comboBoxAlignment = new QComboBox(groupBox);
        comboBoxAlignment->setObjectName(QString::fromUtf8("comboBoxAlignment"));

        gridLayout->addWidget(comboBoxAlignment, 12, 3, 1, 1);

        checkBoxSingleParagraphMode = new QCheckBox(groupBox);
        checkBoxSingleParagraphMode->setObjectName(QString::fromUtf8("checkBoxSingleParagraphMode"));

        gridLayout->addWidget(checkBoxSingleParagraphMode, 13, 0, 1, 4);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 14, 0, 1, 1);

        lineEditForeRed = new QLineEdit(groupBox);
        lineEditForeRed->setObjectName(QString::fromUtf8("lineEditForeRed"));
        lineEditForeRed->setInputMethodHints(Qt::ImhPreferNumbers);

        gridLayout->addWidget(lineEditForeRed, 14, 1, 1, 3);

        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout->addWidget(label_13, 14, 4, 1, 1);

        lineEditBackRed = new QLineEdit(groupBox);
        lineEditBackRed->setObjectName(QString::fromUtf8("lineEditBackRed"));
        lineEditBackRed->setInputMethodHints(Qt::ImhPreferNumbers);

        gridLayout->addWidget(lineEditBackRed, 14, 5, 1, 2);

        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout->addWidget(label_11, 15, 0, 1, 1);

        lineEditForeGreen = new QLineEdit(groupBox);
        lineEditForeGreen->setObjectName(QString::fromUtf8("lineEditForeGreen"));
        lineEditForeGreen->setInputMethodHints(Qt::ImhPreferNumbers);

        gridLayout->addWidget(lineEditForeGreen, 15, 1, 1, 3);

        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout->addWidget(label_14, 15, 4, 1, 1);

        lineEditBackGreen = new QLineEdit(groupBox);
        lineEditBackGreen->setObjectName(QString::fromUtf8("lineEditBackGreen"));
        lineEditBackGreen->setInputMethodHints(Qt::ImhPreferNumbers);

        gridLayout->addWidget(lineEditBackGreen, 15, 5, 1, 2);

        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout->addWidget(label_12, 16, 0, 1, 1);

        lineEditForeBlue = new QLineEdit(groupBox);
        lineEditForeBlue->setObjectName(QString::fromUtf8("lineEditForeBlue"));
        lineEditForeBlue->setInputMethodHints(Qt::ImhPreferNumbers);

        gridLayout->addWidget(lineEditForeBlue, 16, 1, 1, 3);

        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout->addWidget(label_15, 16, 4, 1, 1);

        lineEditBackBlue = new QLineEdit(groupBox);
        lineEditBackBlue->setObjectName(QString::fromUtf8("lineEditBackBlue"));
        lineEditBackBlue->setInputMethodHints(Qt::ImhPreferNumbers);

        gridLayout->addWidget(lineEditBackBlue, 16, 5, 1, 2);

        horizontalSpacer = new QSpacerItem(238, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 17, 0, 1, 5);

        button_apply = new QPushButton(groupBox);
        button_apply->setObjectName(QString::fromUtf8("button_apply"));

        gridLayout->addWidget(button_apply, 17, 6, 1, 1);


        horizontalLayout_2->addWidget(groupBox);

        horizontalLayout_2->setStretch(0, 1);
        TestPangoClass->setCentralWidget(centralWidget);
        groupBox->raise();
        frame->raise();
        statusBar = new QStatusBar(TestPangoClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        TestPangoClass->setStatusBar(statusBar);
        menuBar = new QMenuBar(TestPangoClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 905, 21));
        TestPangoClass->setMenuBar(menuBar);

        retranslateUi(TestPangoClass);

        QMetaObject::connectSlotsByName(TestPangoClass);
    } // setupUi

    void retranslateUi(QMainWindow *TestPangoClass)
    {
        TestPangoClass->setWindowTitle(QApplication::translate("TestPangoClass", "TestPango", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("TestPangoClass", "\330\255\342\200\216", 0, QApplication::UnicodeUTF8));
        pushButton_7->setText(QApplication::translate("TestPangoClass", "\330\256\342\200\216", 0, QApplication::UnicodeUTF8));
        pushButton_8->setText(QApplication::translate("TestPangoClass", "\330\257\342\200\216", 0, QApplication::UnicodeUTF8));
        pushButton_9->setText(QApplication::translate("TestPangoClass", "\330\260\342\200\216", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("TestPangoClass", "\330\250\342\200\216", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("TestPangoClass", "\330\253\342\200\216", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("TestPangoClass", "\330\252\342\200\216", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("TestPangoClass", "\330\243\342\200\216", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("TestPangoClass", "\330\254\342\200\216", 0, QApplication::UnicodeUTF8));
        pushButton_10->setText(QApplication::translate("TestPangoClass", "Clear", 0, QApplication::UnicodeUTF8));
        labelPixmap->setText(QString());
        groupBox->setTitle(QApplication::translate("TestPangoClass", "GroupBox", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("TestPangoClass", "Text", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("TestPangoClass", "X", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("TestPangoClass", "Y", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("TestPangoClass", "Font Family", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("TestPangoClass", "Font Size", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("TestPangoClass", "Layout Width", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("TestPangoClass", "Layouyt Height", 0, QApplication::UnicodeUTF8));
        checkBoxDrawLayout->setText(QApplication::translate("TestPangoClass", "Draw Layout", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("TestPangoClass", "Wrap", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("TestPangoClass", "Ellipse", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("TestPangoClass", "Indent", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("TestPangoClass", "Spacing", 0, QApplication::UnicodeUTF8));
        checkBoxJustify->setText(QApplication::translate("TestPangoClass", "Justify", 0, QApplication::UnicodeUTF8));
        checkBoxAutoDir->setText(QApplication::translate("TestPangoClass", "Auto Dir", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("TestPangoClass", "Alignment", 0, QApplication::UnicodeUTF8));
        checkBoxSingleParagraphMode->setText(QApplication::translate("TestPangoClass", "Single Paragraph Mode", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("TestPangoClass", "FR", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("TestPangoClass", "BR", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("TestPangoClass", "FG", 0, QApplication::UnicodeUTF8));
        lineEditForeGreen->setText(QString());
        label_14->setText(QApplication::translate("TestPangoClass", "BG", 0, QApplication::UnicodeUTF8));
        lineEditBackGreen->setText(QString());
        label_12->setText(QApplication::translate("TestPangoClass", "FB", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("TestPangoClass", "BB", 0, QApplication::UnicodeUTF8));
        button_apply->setText(QApplication::translate("TestPangoClass", "Apply", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TestPangoClass: public Ui_TestPangoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTPANGO_H
