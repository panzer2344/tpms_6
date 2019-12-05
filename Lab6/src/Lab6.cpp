#include <QtQuick>
#include <QQuickView>
#include <QtQml>
#include <QGuiApplication>

#include <sailfishapp.h>

#include "Task1/counter.h"
#include "Task1/stringlist.h"

int main(int argc, char *argv[]){
    QGuiApplication * q_application = SailfishApp :: application ( argc, argv );

    QQuickView * q_view = SailfishApp :: createView ( );

    qmlRegisterType <Counter> ( "com.lab6.Counter", 1, 0, "Counter" );
    qmlRegisterType <StringList> ("com.lab6.StringList", 1, 0, "StringList");

    q_view -> setSource ( SailfishApp :: pathTo ( "qml/Lab6.qml" ));
    q_view -> showFullScreen ( );

    return q_application -> exec ( );
}
