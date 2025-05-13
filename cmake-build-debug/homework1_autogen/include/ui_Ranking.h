/********************************************************************************
** Form generated from reading UI file 'ranking.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RANKING_H
#define UI_RANKING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Ranking
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QTableView *tableView;

    void setupUi(QWidget *Ranking)
    {
        if (Ranking->objectName().isEmpty())
            Ranking->setObjectName("Ranking");
        Ranking->resize(727, 531);
        widget = new QWidget(Ranking);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 440, 711, 91));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        groupBox = new QGroupBox(widget);
        groupBox->setObjectName("groupBox");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setMaximumSize(QSize(16777215, 227));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName("horizontalLayout");
        textEdit = new QTextEdit(groupBox);
        textEdit->setObjectName("textEdit");
        textEdit->setMaximumSize(QSize(16777215, 192));

        horizontalLayout->addWidget(textEdit);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");

        horizontalLayout->addWidget(pushButton);


        gridLayout->addWidget(groupBox, 0, 0, 2, 1);

        horizontalSpacer = new QSpacerItem(228, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setEnabled(true);
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_2, 1, 2, 1, 1);

        tableView = new QTableView(Ranking);
        tableView->setObjectName("tableView");
        tableView->setEnabled(false);
        tableView->setGeometry(QRect(20, 30, 681, 401));

        retranslateUi(Ranking);

        QMetaObject::connectSlotsByName(Ranking);
    } // setupUi

    void retranslateUi(QWidget *Ranking)
    {
        Ranking->setWindowTitle(QCoreApplication::translate("Ranking", "\346\216\222\350\241\214\346\246\234", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Ranking", "\350\276\223\345\205\245\346\203\263\346\237\245\350\257\242\347\232\204\345\211\215n\344\272\272", nullptr));
        pushButton->setText(QCoreApplication::translate("Ranking", "\346\237\245\350\257\242", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Ranking", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Ranking: public Ui_Ranking {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RANKING_H
