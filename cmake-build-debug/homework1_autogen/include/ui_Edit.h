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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Edit
{
public:

    void setupUi(QWidget *Edit)
    {
        if (Edit->objectName().isEmpty())
            Edit->setObjectName("Edit");
        Edit->resize(727, 537);

        retranslateUi(Edit);

        QMetaObject::connectSlotsByName(Edit);
    } // setupUi

    void retranslateUi(QWidget *Edit)
    {
        Edit->setWindowTitle(QCoreApplication::translate("Edit", "\344\277\256\346\224\271\346\210\220\347\273\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Edit: public Ui_Edit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDIT_H
