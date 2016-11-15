#include <QCoreApplication>
#include <iostream>

#include "utils/cibprueba.h"

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    cout << "Hola git" << endl;
    cout << "Ahora tambien hola TFS" << endl;
    cout << "Voy a modificar mas cosas" << endl;

    cout << "Ahora agrego el uso de la nueva clase!" << endl;

    CibPrueba ib_prueba;

    cout << "Resultado => " << ib_prueba.ibSuma(5,4) << endl;
    cout << "De dentro del directorio no funciona. Comprensible!" << endl;

    return a.exec();
}
