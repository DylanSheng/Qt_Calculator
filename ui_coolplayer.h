/********************************************************************************
** Form generated from reading UI file 'coolplayer.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COOLPLAYER_H
#define UI_COOLPLAYER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CoolPlayer
{
public:
    QTextEdit *textEdit;
    QPushButton *calculate;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *Cal_1;
    QPushButton *Cal_2;
    QPushButton *Cal_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *Cal_4;
    QPushButton *Cal_5;
    QPushButton *Cal_6;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *Cal_7;
    QPushButton *Cal_8;
    QPushButton *Cal_9;
    QPushButton *Cal_0;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QPushButton *Cal_add;
    QPushButton *Cal_calculate;
    QPushButton *Cal_clear;

    void setupUi(QWidget *CoolPlayer)
    {
        if (CoolPlayer->objectName().isEmpty())
            CoolPlayer->setObjectName(QStringLiteral("CoolPlayer"));
        CoolPlayer->resize(1169, 635);
        textEdit = new QTextEdit(CoolPlayer);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(360, 20, 291, 101));
        calculate = new QPushButton(CoolPlayer);
        calculate->setObjectName(QStringLiteral("calculate"));
        calculate->setGeometry(QRect(360, 290, 301, 28));
        layoutWidget = new QWidget(CoolPlayer);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(360, 140, 297, 141));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        Cal_1 = new QPushButton(layoutWidget);
        Cal_1->setObjectName(QStringLiteral("Cal_1"));

        horizontalLayout->addWidget(Cal_1);

        Cal_2 = new QPushButton(layoutWidget);
        Cal_2->setObjectName(QStringLiteral("Cal_2"));

        horizontalLayout->addWidget(Cal_2);

        Cal_3 = new QPushButton(layoutWidget);
        Cal_3->setObjectName(QStringLiteral("Cal_3"));

        horizontalLayout->addWidget(Cal_3);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        Cal_4 = new QPushButton(layoutWidget);
        Cal_4->setObjectName(QStringLiteral("Cal_4"));

        horizontalLayout_2->addWidget(Cal_4);

        Cal_5 = new QPushButton(layoutWidget);
        Cal_5->setObjectName(QStringLiteral("Cal_5"));

        horizontalLayout_2->addWidget(Cal_5);

        Cal_6 = new QPushButton(layoutWidget);
        Cal_6->setObjectName(QStringLiteral("Cal_6"));

        horizontalLayout_2->addWidget(Cal_6);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        Cal_7 = new QPushButton(layoutWidget);
        Cal_7->setObjectName(QStringLiteral("Cal_7"));

        horizontalLayout_3->addWidget(Cal_7);

        Cal_8 = new QPushButton(layoutWidget);
        Cal_8->setObjectName(QStringLiteral("Cal_8"));

        horizontalLayout_3->addWidget(Cal_8);

        Cal_9 = new QPushButton(layoutWidget);
        Cal_9->setObjectName(QStringLiteral("Cal_9"));

        horizontalLayout_3->addWidget(Cal_9);


        verticalLayout->addLayout(horizontalLayout_3);

        Cal_0 = new QPushButton(layoutWidget);
        Cal_0->setObjectName(QStringLiteral("Cal_0"));

        verticalLayout->addWidget(Cal_0);

        widget = new QWidget(CoolPlayer);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(670, 140, 97, 102));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        Cal_add = new QPushButton(widget);
        Cal_add->setObjectName(QStringLiteral("Cal_add"));

        verticalLayout_2->addWidget(Cal_add);

        Cal_calculate = new QPushButton(widget);
        Cal_calculate->setObjectName(QStringLiteral("Cal_calculate"));

        verticalLayout_2->addWidget(Cal_calculate);


        verticalLayout_3->addLayout(verticalLayout_2);

        Cal_clear = new QPushButton(widget);
        Cal_clear->setObjectName(QStringLiteral("Cal_clear"));

        verticalLayout_3->addWidget(Cal_clear);


        retranslateUi(CoolPlayer);

        QMetaObject::connectSlotsByName(CoolPlayer);
    } // setupUi

    void retranslateUi(QWidget *CoolPlayer)
    {
        CoolPlayer->setWindowTitle(QApplication::translate("CoolPlayer", "CoolPlayer", 0));
        calculate->setText(QApplication::translate("CoolPlayer", "calculate", 0));
        Cal_1->setText(QApplication::translate("CoolPlayer", "1", 0));
        Cal_2->setText(QApplication::translate("CoolPlayer", "2", 0));
        Cal_3->setText(QApplication::translate("CoolPlayer", "3", 0));
        Cal_4->setText(QApplication::translate("CoolPlayer", "4", 0));
        Cal_5->setText(QApplication::translate("CoolPlayer", "5", 0));
        Cal_6->setText(QApplication::translate("CoolPlayer", "6", 0));
        Cal_7->setText(QApplication::translate("CoolPlayer", "7", 0));
        Cal_8->setText(QApplication::translate("CoolPlayer", "8", 0));
        Cal_9->setText(QApplication::translate("CoolPlayer", "9", 0));
        Cal_0->setText(QApplication::translate("CoolPlayer", "0", 0));
        Cal_add->setText(QApplication::translate("CoolPlayer", "+", 0));
        Cal_calculate->setText(QApplication::translate("CoolPlayer", "=", 0));
        Cal_clear->setText(QApplication::translate("CoolPlayer", "cr", 0));
    } // retranslateUi

};

namespace Ui {
    class CoolPlayer: public Ui_CoolPlayer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COOLPLAYER_H
