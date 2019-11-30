/********************************************************************************
** Form generated from reading UI file 'inspectorWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSPECTORWINDOW_H
#define UI_INSPECTORWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_inspectorWindow
{
public:
    QPushButton *requestButton;
    QTextEdit *requestText;

    void setupUi(QDialog *inspectorWindow)
    {
        if (inspectorWindow->objectName().isEmpty())
            inspectorWindow->setObjectName(QString::fromUtf8("inspectorWindow"));
        inspectorWindow->resize(400, 300);
        requestButton = new QPushButton(inspectorWindow);
        requestButton->setObjectName(QString::fromUtf8("requestButton"));
        requestButton->setGeometry(QRect(30, 50, 75, 23));
        requestText = new QTextEdit(inspectorWindow);
        requestText->setObjectName(QString::fromUtf8("requestText"));
        requestText->setGeometry(QRect(20, 80, 201, 191));

        retranslateUi(inspectorWindow);

        QMetaObject::connectSlotsByName(inspectorWindow);
    } // setupUi

    void retranslateUi(QDialog *inspectorWindow)
    {
        inspectorWindow->setWindowTitle(QCoreApplication::translate("inspectorWindow", "inspectorWindow", nullptr));
        requestButton->setText(QCoreApplication::translate("inspectorWindow", "Request", nullptr));
    } // retranslateUi

};

namespace Ui {
    class inspectorWindow: public Ui_inspectorWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSPECTORWINDOW_H
