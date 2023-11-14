#ifndef FECHA_H
#define FECHA_H

#include<string>
using namespace std;

class Fecha
{
private:
    int dia;
    int mes;
    int anio;

public:
    Fecha();
    Fecha(int mes, int dia, int anio);
    string toString();
    bool validar();
    bool esBisiesto();
    void siguiente();
};

#endif // FECHA_H
