/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_calculator
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QPushButton *Add;
    QPushButton *Button5;
    QPushButton *Button6;
    QPushButton *Button1;
    QPushButton *Button2;
    QPushButton *Button4;
    QPushButton *Button3;
    QPushButton *Button7;
    QPushButton *Button8;
    QPushButton *Multiply;
    QPushButton *Button9;
    QPushButton *Divide;
    QPushButton *Clear;
    QPushButton *Button0;
    QPushButton *Subtract;
    QLineEdit *Display;
    QPushButton *Equals;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *calculator)
    {
        if (calculator->objectName().isEmpty())
            calculator->setObjectName(QStringLiteral("calculator"));
        calculator->resize(400, 300);
        centralWidget = new QWidget(calculator);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        Add = new QPushButton(centralWidget);
        Add->setObjectName(QStringLiteral("Add"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Add->sizePolicy().hasHeightForWidth());
        Add->setSizePolicy(sizePolicy);
        Add->setStyleSheet(QLatin1String("QPushButton{\n"
"		background-color:#FF8C00;\n"
"		border: 1px solid gray;\n"
"		padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"		background-color:#A9A9A9;\n"
"		border: 1px solid gray;\n"
"		padding: 5px;\n"
"}"));

        gridLayout->addWidget(Add, 3, 3, 1, 1);

        Button5 = new QPushButton(centralWidget);
        Button5->setObjectName(QStringLiteral("Button5"));
        sizePolicy.setHeightForWidth(Button5->sizePolicy().hasHeightForWidth());
        Button5->setSizePolicy(sizePolicy);
        Button5->setStyleSheet(QLatin1String("QPushButton{\n"
"		background-color:#C0C0C0;\n"
"		border: 1px solid gray;\n"
"		padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"		background-color:#A9A9A9;\n"
"		border: 1px solid gray;\n"
"		padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button5, 2, 1, 1, 1);

        Button6 = new QPushButton(centralWidget);
        Button6->setObjectName(QStringLiteral("Button6"));
        sizePolicy.setHeightForWidth(Button6->sizePolicy().hasHeightForWidth());
        Button6->setSizePolicy(sizePolicy);
        Button6->setStyleSheet(QLatin1String("QPushButton{\n"
"		background-color:#C0C0C0;\n"
"		border: 1px solid gray;\n"
"		padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"		background-color:#A9A9A9;\n"
"		border: 1px solid gray;\n"
"		padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button6, 2, 2, 1, 1);

        Button1 = new QPushButton(centralWidget);
        Button1->setObjectName(QStringLiteral("Button1"));
        sizePolicy.setHeightForWidth(Button1->sizePolicy().hasHeightForWidth());
        Button1->setSizePolicy(sizePolicy);
        Button1->setStyleSheet(QLatin1String("QPushButton{\n"
"		background-color:#C0C0C0;\n"
"		border: 1px solid gray;\n"
"		padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"		background-color:#A9A9A9;\n"
"		border: 1px solid gray;\n"
"		padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button1, 3, 0, 1, 1);

        Button2 = new QPushButton(centralWidget);
        Button2->setObjectName(QStringLiteral("Button2"));
        sizePolicy.setHeightForWidth(Button2->sizePolicy().hasHeightForWidth());
        Button2->setSizePolicy(sizePolicy);
        Button2->setStyleSheet(QLatin1String("QPushButton{\n"
"		background-color:#C0C0C0;\n"
"		border: 1px solid gray;\n"
"		padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"		background-color:#A9A9A9;\n"
"		border: 1px solid gray;\n"
"		padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button2, 3, 1, 1, 1);

        Button4 = new QPushButton(centralWidget);
        Button4->setObjectName(QStringLiteral("Button4"));
        sizePolicy.setHeightForWidth(Button4->sizePolicy().hasHeightForWidth());
        Button4->setSizePolicy(sizePolicy);
        Button4->setStyleSheet(QLatin1String("QPushButton{\n"
"		background-color:#C0C0C0;\n"
"		border: 1px solid gray;\n"
"		padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"		background-color:#A9A9A9;\n"
"		border: 1px solid gray;\n"
"		padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button4, 2, 0, 1, 1);

        Button3 = new QPushButton(centralWidget);
        Button3->setObjectName(QStringLiteral("Button3"));
        sizePolicy.setHeightForWidth(Button3->sizePolicy().hasHeightForWidth());
        Button3->setSizePolicy(sizePolicy);
        Button3->setStyleSheet(QLatin1String("QPushButton{\n"
"		background-color:#C0C0C0;\n"
"		border: 1px solid gray;\n"
"		padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"		background-color:#A9A9A9;\n"
"		border: 1px solid gray;\n"
"		padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button3, 3, 2, 1, 1);

        Button7 = new QPushButton(centralWidget);
        Button7->setObjectName(QStringLiteral("Button7"));
        sizePolicy.setHeightForWidth(Button7->sizePolicy().hasHeightForWidth());
        Button7->setSizePolicy(sizePolicy);
        Button7->setStyleSheet(QLatin1String("QPushButton{\n"
"		background-color:#C0C0C0;\n"
"		border: 1px solid gray;\n"
"		padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"		background-color:#A9A9A9;\n"
"		border: 1px solid gray;\n"
"		padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button7, 1, 0, 1, 1);

        Button8 = new QPushButton(centralWidget);
        Button8->setObjectName(QStringLiteral("Button8"));
        sizePolicy.setHeightForWidth(Button8->sizePolicy().hasHeightForWidth());
        Button8->setSizePolicy(sizePolicy);
        Button8->setStyleSheet(QLatin1String("QPushButton{\n"
"		background-color:#C0C0C0;\n"
"		border: 1px solid gray;\n"
"		padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"		background-color:#A9A9A9;\n"
"		border: 1px solid gray;\n"
"		padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button8, 1, 1, 1, 1);

        Multiply = new QPushButton(centralWidget);
        Multiply->setObjectName(QStringLiteral("Multiply"));
        sizePolicy.setHeightForWidth(Multiply->sizePolicy().hasHeightForWidth());
        Multiply->setSizePolicy(sizePolicy);
        Multiply->setStyleSheet(QLatin1String("QPushButton{\n"
"		background-color:#FF8C00;\n"
"		border: 1px solid gray;\n"
"		padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"		background-color:#A9A9A9;\n"
"		border: 1px solid gray;\n"
"		padding: 5px;\n"
"}"));

        gridLayout->addWidget(Multiply, 2, 3, 1, 1);

        Button9 = new QPushButton(centralWidget);
        Button9->setObjectName(QStringLiteral("Button9"));
        sizePolicy.setHeightForWidth(Button9->sizePolicy().hasHeightForWidth());
        Button9->setSizePolicy(sizePolicy);
        Button9->setStyleSheet(QLatin1String("QPushButton{\n"
"		background-color:#C0C0C0;\n"
"		border: 1px solid gray;\n"
"		padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"		background-color:#A9A9A9;\n"
"		border: 1px solid gray;\n"
"		padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button9, 1, 2, 1, 1);

        Divide = new QPushButton(centralWidget);
        Divide->setObjectName(QStringLiteral("Divide"));
        sizePolicy.setHeightForWidth(Divide->sizePolicy().hasHeightForWidth());
        Divide->setSizePolicy(sizePolicy);
        Divide->setStyleSheet(QLatin1String("QPushButton{\n"
"		background-color:#FF8C00;\n"
"		border: 1px solid gray;\n"
"		padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"		background-color:#A9A9A9;\n"
"		border: 1px solid gray;\n"
"		padding: 5px;\n"
"}"));

        gridLayout->addWidget(Divide, 1, 3, 1, 1);

        Clear = new QPushButton(centralWidget);
        Clear->setObjectName(QStringLiteral("Clear"));
        sizePolicy.setHeightForWidth(Clear->sizePolicy().hasHeightForWidth());
        Clear->setSizePolicy(sizePolicy);
        Clear->setStyleSheet(QLatin1String("QPushButton{\n"
"		background-color:#C0C0C0;\n"
"		border: 1px solid gray;\n"
"		padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"		background-color:#A9A9A9;\n"
"		border: 1px solid gray;\n"
"		padding: 5px;\n"
"}"));

        gridLayout->addWidget(Clear, 4, 0, 1, 1);

        Button0 = new QPushButton(centralWidget);
        Button0->setObjectName(QStringLiteral("Button0"));
        sizePolicy.setHeightForWidth(Button0->sizePolicy().hasHeightForWidth());
        Button0->setSizePolicy(sizePolicy);
        Button0->setStyleSheet(QLatin1String("QPushButton{\n"
"		background-color:#C0C0C0;\n"
"		border: 1px solid gray;\n"
"		padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"		background-color:#A9A9A9;\n"
"		border: 1px solid gray;\n"
"		padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button0, 4, 1, 1, 1);

        Subtract = new QPushButton(centralWidget);
        Subtract->setObjectName(QStringLiteral("Subtract"));
        sizePolicy.setHeightForWidth(Subtract->sizePolicy().hasHeightForWidth());
        Subtract->setSizePolicy(sizePolicy);
        Subtract->setStyleSheet(QLatin1String("QPushButton{\n"
"		background-color:#FF8C00;\n"
"		border: 1px solid gray;\n"
"		padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"		background-color:#A9A9A9;\n"
"		border: 1px solid gray;\n"
"		padding: 5px;\n"
"}"));

        gridLayout->addWidget(Subtract, 4, 3, 1, 1);

        Display = new QLineEdit(centralWidget);
        Display->setObjectName(QStringLiteral("Display"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Display->sizePolicy().hasHeightForWidth());
        Display->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QStringLiteral("MS PMincho"));
        font.setPointSize(28);
        Display->setFont(font);
        Display->setStyleSheet(QLatin1String("QLineEdit{\n"
"		background-color:gray;\n"
"		border: 1px solid gray;\n"
"		color: #ffffff;\n"
"}"));
        Display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(Display, 0, 0, 1, 4);

        Equals = new QPushButton(centralWidget);
        Equals->setObjectName(QStringLiteral("Equals"));
        sizePolicy.setHeightForWidth(Equals->sizePolicy().hasHeightForWidth());
        Equals->setSizePolicy(sizePolicy);
        Equals->setStyleSheet(QLatin1String("QPushButton{\n"
"		background-color:#rgb(180, 180, 180);\n"
"		border: 1px solid gray;\n"
"		padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"		background-color:#A9A9A9;\n"
"		border: 1px solid gray;\n"
"		padding: 5px;\n"
"}"));

        gridLayout->addWidget(Equals, 4, 2, 1, 1);

        calculator->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(calculator);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 21));
        calculator->setMenuBar(menuBar);
        statusBar = new QStatusBar(calculator);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        calculator->setStatusBar(statusBar);

        retranslateUi(calculator);

        QMetaObject::connectSlotsByName(calculator);
    } // setupUi

    void retranslateUi(QMainWindow *calculator)
    {
        calculator->setWindowTitle(QApplication::translate("calculator", "calculator", Q_NULLPTR));
        Add->setText(QApplication::translate("calculator", "+", Q_NULLPTR));
        Button5->setText(QApplication::translate("calculator", "5", Q_NULLPTR));
        Button6->setText(QApplication::translate("calculator", "6", Q_NULLPTR));
        Button1->setText(QApplication::translate("calculator", "1", Q_NULLPTR));
        Button2->setText(QApplication::translate("calculator", "2", Q_NULLPTR));
        Button4->setText(QApplication::translate("calculator", "4", Q_NULLPTR));
        Button3->setText(QApplication::translate("calculator", "3", Q_NULLPTR));
        Button7->setText(QApplication::translate("calculator", "7", Q_NULLPTR));
        Button8->setText(QApplication::translate("calculator", "8", Q_NULLPTR));
        Multiply->setText(QApplication::translate("calculator", "*", Q_NULLPTR));
        Button9->setText(QApplication::translate("calculator", "9", Q_NULLPTR));
        Divide->setText(QApplication::translate("calculator", "/", Q_NULLPTR));
        Clear->setText(QApplication::translate("calculator", "AC", Q_NULLPTR));
        Button0->setText(QApplication::translate("calculator", "0", Q_NULLPTR));
        Subtract->setText(QApplication::translate("calculator", "-", Q_NULLPTR));
        Display->setText(QApplication::translate("calculator", "0.0", Q_NULLPTR));
        Equals->setText(QApplication::translate("calculator", "=", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class calculator: public Ui_calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
