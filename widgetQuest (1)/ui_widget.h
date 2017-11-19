/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_2;
    QSpinBox *choix_1;
    QSpinBox *choix_2;
    QSpinBox *choix_3;
    QSpinBox *choix_6;
    QSpinBox *choix_5;
    QLabel *question2;
    QLabel *question6;
    QSpinBox *choix_4;
    QLabel *question3;
    QLabel *question7;
    QLabel *question1;
    QSpinBox *choix_7;
    QLabel *question4;
    QLabel *question5;
    QLabel *label;
    QPushButton *commit;
    QSpacerItem *horizontalSpacer;
    QWidget *page_2;
    QLabel *label_2;
    QPushButton *start;
    QPushButton *commit_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(1139, 811);
        Widget->setStyleSheet(QStringLiteral("background:url(:/new/prefix1/fsociety-logo-mr_robot-tv_series-(10422).jpg)"));
        gridLayout = new QGridLayout(Widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        stackedWidget = new QStackedWidget(Widget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        gridLayout_2 = new QGridLayout(page);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        choix_1 = new QSpinBox(page);
        choix_1->setObjectName(QStringLiteral("choix_1"));

        gridLayout_2->addWidget(choix_1, 1, 1, 1, 1);

        choix_2 = new QSpinBox(page);
        choix_2->setObjectName(QStringLiteral("choix_2"));

        gridLayout_2->addWidget(choix_2, 2, 1, 1, 1);

        choix_3 = new QSpinBox(page);
        choix_3->setObjectName(QStringLiteral("choix_3"));

        gridLayout_2->addWidget(choix_3, 3, 1, 1, 1);

        choix_6 = new QSpinBox(page);
        choix_6->setObjectName(QStringLiteral("choix_6"));

        gridLayout_2->addWidget(choix_6, 6, 1, 1, 1);

        choix_5 = new QSpinBox(page);
        choix_5->setObjectName(QStringLiteral("choix_5"));

        gridLayout_2->addWidget(choix_5, 5, 1, 1, 1);

        question2 = new QLabel(page);
        question2->setObjectName(QStringLiteral("question2"));
        question2->setStyleSheet(QLatin1String("background:none;\n"
"background-color:none ;\n"
"color:rgb(255, 255, 255);font: 16pt \"Sans Serif\";"));

        gridLayout_2->addWidget(question2, 2, 0, 1, 1);

        question6 = new QLabel(page);
        question6->setObjectName(QStringLiteral("question6"));
        question6->setStyleSheet(QLatin1String("background:none;\n"
"background-color:none ;\n"
"color:rgb(255, 255, 255);font: 16pt \"Sans Serif\";"));

        gridLayout_2->addWidget(question6, 6, 0, 1, 1);

        choix_4 = new QSpinBox(page);
        choix_4->setObjectName(QStringLiteral("choix_4"));

        gridLayout_2->addWidget(choix_4, 4, 1, 1, 1);

        question3 = new QLabel(page);
        question3->setObjectName(QStringLiteral("question3"));
        question3->setStyleSheet(QLatin1String("background:none;\n"
"background-color:none ;\n"
"color:rgb(255, 255, 255);\n"
"font: 16pt \"Sans Serif\";"));

        gridLayout_2->addWidget(question3, 3, 0, 1, 1);

        question7 = new QLabel(page);
        question7->setObjectName(QStringLiteral("question7"));
        question7->setStyleSheet(QLatin1String("background:none;\n"
"background-color:none ;\n"
"color:rgb(255, 255, 255);font: 16pt \"Sans Serif\";"));

        gridLayout_2->addWidget(question7, 7, 0, 1, 1);

        question1 = new QLabel(page);
        question1->setObjectName(QStringLiteral("question1"));
        question1->setStyleSheet(QLatin1String("background:none;\n"
"background-color:none ;\n"
"color:rgb(255, 255, 255);font: 16pt \"Sans Serif\";"));

        gridLayout_2->addWidget(question1, 1, 0, 1, 1);

        choix_7 = new QSpinBox(page);
        choix_7->setObjectName(QStringLiteral("choix_7"));

        gridLayout_2->addWidget(choix_7, 7, 1, 1, 1);

        question4 = new QLabel(page);
        question4->setObjectName(QStringLiteral("question4"));
        question4->setStyleSheet(QLatin1String("background:none;\n"
"background-color:none ;\n"
"color:rgb(255, 255, 255);font: 16pt \"Sans Serif\";"));

        gridLayout_2->addWidget(question4, 4, 0, 1, 1);

        question5 = new QLabel(page);
        question5->setObjectName(QStringLiteral("question5"));
        question5->setStyleSheet(QLatin1String("background:none;\n"
"background-color:none ;\n"
"color:rgb(255, 255, 255);font: 16pt \"Sans Serif\";"));

        gridLayout_2->addWidget(question5, 5, 0, 1, 1);

        label = new QLabel(page);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setStyleSheet(QLatin1String("background:none;\n"
"background-color:none ;\n"
"color:rgb(255, 255, 255);"));

        gridLayout_2->addWidget(label, 0, 0, 1, 2);

        commit = new QPushButton(page);
        commit->setObjectName(QStringLiteral("commit"));
        commit->setStyleSheet(QLatin1String("color:rgb(255, 255, 255);\n"
"font: 16pt \"Sans Serif\";"));
        commit->setFlat(true);

        gridLayout_2->addWidget(commit, 9, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(828, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 9, 0, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        label_2 = new QLabel(page_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 10, 1111, 661));
        label_2->setStyleSheet(QLatin1String("background:none;\n"
"color:rgb(0, 255, 0)"));
        start = new QPushButton(page_2);
        start->setObjectName(QStringLiteral("start"));
        start->setGeometry(QRect(10, 740, 161, 41));
        start->setStyleSheet(QLatin1String("font: 16pt \"Sans Serif\";\n"
"backgroud:none;\n"
"color:rgb(255, 255, 255)"));
        commit_2 = new QPushButton(page_2);
        commit_2->setObjectName(QStringLiteral("commit_2"));
        commit_2->setGeometry(QRect(950, 740, 161, 41));
        commit_2->setStyleSheet(QLatin1String("font: 16pt \"Sans Serif\";\n"
"backgroud:none;\n"
"color:rgb(255, 255, 255)"));
        stackedWidget->addWidget(page_2);

        gridLayout->addWidget(stackedWidget, 0, 1, 1, 1);


        retranslateUi(Widget);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        question2->setText(QApplication::translate("Widget", "TextLabel", Q_NULLPTR));
        question6->setText(QApplication::translate("Widget", "TextLabel", Q_NULLPTR));
        question3->setText(QApplication::translate("Widget", "TextLabel", Q_NULLPTR));
        question7->setText(QApplication::translate("Widget", "TextLabel", Q_NULLPTR));
        question1->setText(QApplication::translate("Widget", "TextLabel", Q_NULLPTR));
        question4->setText(QApplication::translate("Widget", "TextLabel", Q_NULLPTR));
        question5->setText(QApplication::translate("Widget", "TextLabel", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "<html><head/><body><p><span style=\" font-size:14pt;\">ok if you are here that mean you accepted my request and for your first mission</span></p><p><span style=\" font-size:14pt;\">i need you to transmet a file in a diractory called bank_robbery and change the</span></p><p><span style=\" font-size:14pt;\">password stored in that file . </span></p><p><span style=\" font-size:14pt;\">and in order to help you finsh your quest we put all the command line you need in a container all you need to do is </span></p><p><span style=\" font-size:14pt;\">to order the steps rights and to chose the right command in evry step </span></p></body></html>", Q_NULLPTR));
        commit->setText(QApplication::translate("Widget", "commit ", Q_NULLPTR));
        label_2->setText(QApplication::translate("Widget", "<html><head/><body><p><span style=\" font-size:22pt;\">good job boy know put this commands on terminal </span></p><p><span style=\" font-size:22pt;\">0-open a terminal </span></p><p><span style=\" font-size:22pt;\">1-mkdir banck_robbery</span></p><p><span style=\" font-size:22pt;\">2- find / -name banck_account.txt</span></p><p><span style=\" font-size:22pt;\">3- mv ~/banck_account.txt path ~/banck_robery</span></p><p><span style=\" font-size:22pt;\">4- nano ~/banck_robbery/banck_account.txt</span></p><p><span style=\" font-size:22pt;\">5-mv ~/banck_robbery/banck_account.txt ~/old path of banck_robbery.txt</span></p><p><span style=\" font-size:22pt;\">6-sudo rm -r ~/banck_robbery</span></p><p><span style=\" font-size:22pt;\">7-exit </span></p><p><span style=\" font-size:22pt; color:#ec0000;\">Remeber when you find a /home/yourUserName changed with ~/</span></p></body></html>", Q_NULLPTR));
        start->setText(QApplication::translate("Widget", "Start", Q_NULLPTR));
        commit_2->setText(QApplication::translate("Widget", "commit", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
