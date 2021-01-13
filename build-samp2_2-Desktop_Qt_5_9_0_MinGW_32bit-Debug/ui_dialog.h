/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QCheckBox *chxUnderline;
    QCheckBox *chxItalic;
    QCheckBox *chxBold;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPlainTextEdit *textEdit;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnApply;
    QPushButton *btnCancel;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnExit;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *groupBox;
    QRadioButton *rBtnBlack;
    QRadioButton *rBtnRed;
    QRadioButton *rBtnBlue;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(400, 300);
        horizontalLayoutWidget = new QWidget(Dialog);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 10, 381, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        chxUnderline = new QCheckBox(horizontalLayoutWidget);
        chxUnderline->setObjectName(QStringLiteral("chxUnderline"));

        horizontalLayout->addWidget(chxUnderline);

        chxItalic = new QCheckBox(horizontalLayoutWidget);
        chxItalic->setObjectName(QStringLiteral("chxItalic"));

        horizontalLayout->addWidget(chxItalic);

        chxBold = new QCheckBox(horizontalLayoutWidget);
        chxBold->setObjectName(QStringLiteral("chxBold"));

        horizontalLayout->addWidget(chxBold);

        horizontalLayoutWidget_2 = new QWidget(Dialog);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 122, 381, 101));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        textEdit = new QPlainTextEdit(horizontalLayoutWidget_2);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        horizontalLayout_2->addWidget(textEdit);

        horizontalLayoutWidget_3 = new QWidget(Dialog);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(10, 240, 381, 41));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        btnApply = new QPushButton(horizontalLayoutWidget_3);
        btnApply->setObjectName(QStringLiteral("btnApply"));

        horizontalLayout_3->addWidget(btnApply);

        btnCancel = new QPushButton(horizontalLayoutWidget_3);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));

        horizontalLayout_3->addWidget(btnCancel);

        horizontalSpacer = new QSpacerItem(30, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        btnExit = new QPushButton(horizontalLayoutWidget_3);
        btnExit->setObjectName(QStringLiteral("btnExit"));

        horizontalLayout_3->addWidget(btnExit);

        horizontalLayoutWidget_4 = new QWidget(Dialog);
        horizontalLayoutWidget_4->setObjectName(QStringLiteral("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(10, 60, 381, 51));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(horizontalLayoutWidget_4);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        rBtnBlack = new QRadioButton(groupBox);
        rBtnBlack->setObjectName(QStringLiteral("rBtnBlack"));
        rBtnBlack->setGeometry(QRect(10, 20, 82, 17));
        rBtnRed = new QRadioButton(groupBox);
        rBtnRed->setObjectName(QStringLiteral("rBtnRed"));
        rBtnRed->setGeometry(QRect(130, 20, 82, 17));
        rBtnBlue = new QRadioButton(groupBox);
        rBtnBlue->setObjectName(QStringLiteral("rBtnBlue"));
        rBtnBlue->setGeometry(QRect(260, 20, 82, 17));

        horizontalLayout_4->addWidget(groupBox);


        retranslateUi(Dialog);
        QObject::connect(btnApply, SIGNAL(clicked()), Dialog, SLOT(accept()));
        QObject::connect(btnCancel, SIGNAL(clicked()), Dialog, SLOT(reject()));
        QObject::connect(btnExit, SIGNAL(clicked()), Dialog, SLOT(close()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", Q_NULLPTR));
        chxUnderline->setText(QApplication::translate("Dialog", "Underline", Q_NULLPTR));
        chxItalic->setText(QApplication::translate("Dialog", "Italic", Q_NULLPTR));
        chxBold->setText(QApplication::translate("Dialog", "Bold", Q_NULLPTR));
        textEdit->setPlainText(QApplication::translate("Dialog", "Hello World\n"
"\n"
"It is Dylan's Demo", Q_NULLPTR));
        btnApply->setText(QApplication::translate("Dialog", "Apply", Q_NULLPTR));
        btnCancel->setText(QApplication::translate("Dialog", "Cancel", Q_NULLPTR));
        btnExit->setText(QApplication::translate("Dialog", "Exit", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Dialog", "Font Color", Q_NULLPTR));
        rBtnBlack->setText(QApplication::translate("Dialog", "Black", Q_NULLPTR));
        rBtnRed->setText(QApplication::translate("Dialog", "Red", Q_NULLPTR));
        rBtnBlue->setText(QApplication::translate("Dialog", "Blue", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
