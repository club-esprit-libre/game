#include "widget.h"
#include "ui_widget.h"
#include<iostream>
#include<stdlib.h>
using namespace std ;
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    db.connectpen();
    vector<QString> labl;

    QSqlQuery qry ;
    qry.prepare("SELECT * FROM quest1 ORDER BY RAND()");
    if(qry.exec())
    {
        while(qry.next())
        {
            labl.push_back(qry.value(1).toString());
            order.push_back(qry.value(0).toInt());
        };
    }
    if(!qry.exec())
        qDebug() <<qry.lastError().text();

    ui->setupUi(this);
    setFixedSize(1139, 811);
    ui->question1->setText(labl[0]);

    ui->question2->setText(labl[1]);
    ui->question3->setText(labl[2]);
    ui->question4->setText(labl[3]);
    ui->question5->setText(labl[4]);
    ui->question6->setText(labl[5]);
    ui->question7->setText(labl[6]);
    //console =new Console ;
    //ui->label_2->setText();
}

Widget::~Widget()
{
    delete ui;
}
//:w



void Widget::on_commit_clicked()
{
   int i=0;
   if(ui->choix_1->value()==order[0])
       i++;

   if(ui->choix_2->value()==order[1])
       i++;
   if(ui->choix_3->value()==order[2])
       i++;

   if(ui->choix_4->value()==order[3])
       i++;

   if(ui->choix_5->value()==order[4])
       i++;

   if(ui->choix_6->value()==order[5])
       i++;

   if(ui->choix_7->value()==order[6])
       i++;
   score=((i/(float)7)*100);
   qDebug() << score;
   if(score>=60)
       ui->stackedWidget->setCurrentIndex(1);
}

void Widget::on_start_clicked()
{
    if(strt==1)
   strt=std::system("~/widgetQuest/script.sh");
}

void Widget::on_commit_2_clicked()
{
    if(strt==0)
    {

    std::system("~/widgetQuest/script3.sh");
    vector<string> tab ;
    }


}
