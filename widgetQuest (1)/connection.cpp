#include "connection.h"

connection::connection()
{
    db = QSqlDatabase::addDatabase("QMYSQL");
        db.setHostName("localhost");
        db.setPort(3306);

        db.setDatabaseName("Esprit_libre");
        db.setUserName("riadh");
        db.setPassword("eragon157756");


}

bool connection::connectpen()
{
bool a;
    a=db.open();
            return a ;

}
connection::~connection()
{
    db.close();
}
