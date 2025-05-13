/********************************************************************************
** Form generated from reading UI file 'edit.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDIT_H
#define UI_EDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Edit
{
public:
    QWidget *widget_2;
    QTextEdit *textEdit_2;
    QPushButton *pushButton_3;
    QListView *listView;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_2;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *Edit)
    {
        if (Edit->objectName().isEmpty())
            Edit->setObjectName("Edit");
        Edit->resize(727, 210);
        widget_2 = new QWidget(Edit);
        widget_2->setObjectName("widget_2");
        widget_2->setEnabled(true);
        widget_2->setGeometry(QRect(9, 9, 709, 89));
        QFont font;
        font.setKerning(true);
        widget_2->setFont(font);
        widget_2->setStyleSheet(QString::fromUtf8(""));
        textEdit_2 = new QTextEdit(widget_2);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setEnabled(false);
        textEdit_2->setGeometry(QRect(138, 9, 481, 71));
        pushButton_3 = new QPushButton(widget_2);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setEnabled(false);
        pushButton_3->setGeometry(QRect(625, 32, 75, 24));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setMinimumSize(QSize(0, 23));
        pushButton_3->setStyleSheet(QString::fromUtf8(""));
        listView = new QListView(widget_2);
        listView->setObjectName("listView");
        listView->setEnabled(false);
        listView->setGeometry(QRect(10, 10, 121, 71));
        widget = new QWidget(Edit);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(9, 104, 711, 91));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setEnabled(true);
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_2, 1, 2, 1, 1);

        groupBox = new QGroupBox(widget);
        groupBox->setObjectName("groupBox");
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

        horizontalSpacer = new QSpacerItem(228, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addWidget(groupBox, 0, 0, 2, 1);


        retranslateUi(Edit);

        QMetaObject::connectSlotsByName(Edit);
    } // setupUi

    void retranslateUi(QWidget *Edit)
    {
        Edit->setWindowTitle(QCoreApplication::translate("Edit", "\344\277\256\346\224\271\344\270\216\346\237\245\350\257\242\346\210\220\347\273\251", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Edit", "\347\241\256\350\256\244\344\277\256\346\224\271", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Edit", "\350\277\224\345\233\236", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Edit", "\350\276\223\345\205\245\346\237\245\350\257\242\347\232\204\345\255\246\345\217\267", nullptr));
        pushButton->setText(QCoreApplication::translate("Edit", "\346\237\245\350\257\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Edit: public Ui_Edit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDIT_H
