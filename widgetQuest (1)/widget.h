#ifndef WIDGET_H
#define WIDGET_H
#include "connection.h"
#include <QWidget>
#include<vector>
#include<QDebug>
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:


    void on_commit_clicked();


    void on_start_clicked();

    void on_commit_2_clicked();

private:
    Ui::Widget *ui;
    connection db ;
    std::vector<int> order;
   float score ;
   int strt;
};

#endif // WIDGET_H
