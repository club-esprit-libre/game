#ifndef CONNECTION_H
#define CONNECTION_H
#include <QSql>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include<QMessageBox>

class connection
{
    QSqlDatabase db;
public:
    bool connectpen();
    connection();
    ~connection();

};

#endif // CONNECTION_H
