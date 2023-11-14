#include <iostream>
#include "fecha.h"
#include<iomanip>
using namespace std;

int main()
{
    cout << "==PRUEBA" << endl;
    cout<<"Autor: Mayerli Campuez\n"<<endl;

    Fecha f(29, 02, 1996);
    cout<<setw(2)<< setfill('0')<<f.toString();
    cout<<f.toString()<<endl;
    if(f.validar()){
        cout<<"Es una fecha valida!"<<endl;
        f.siguiente();
    }else{
        cout<<"Es una fecha incorrecta";
    }
    cout<<f.toString();
    cout<< "valida: "<<f.validar()<< endl;
    return 0;
}

