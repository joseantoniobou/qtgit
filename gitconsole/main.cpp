#include <QCoreApplication>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    cout << "Hola git" << endl;
    cout << "Ahora tambien hola TFS" << endl;
    cout << "Voy a modificar mas cosas" << endl;

    return a.exec();
}
