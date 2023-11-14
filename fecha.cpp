#include "fecha.h"

Fecha::Fecha()
{

}

Fecha::Fecha(int dia, int mes, int anio) :
    dia(dia), mes(mes), anio(anio)
{

}
string Fecha::toString()
{
    return to_string(dia) + "/"
            +to_string(mes) +"/"
            +to_string(anio);
}

bool Fecha::validar()
{
    if(dia>31 || dia<=0)
        return false;
    switch(mes){
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        if(dia<=31){
            return true;
        }else
            return false;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        if(dia <=30){
            return true;
        }else
            return false;
        break;
    case 2:
        //TODO: Considerar los años bisiestos
        if(esBisiesto())
            return (dia <=29);
            else
                return (dia<=28);
            break;
    default:
        return false;
    }
}

bool Fecha::esBisiesto()
{
    return (anio % 4==0 && (anio % 100 != 0 || anio % 400 ==0));
}

void Fecha::siguiente()
{
    dia++;
    switch(mes){
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:

        if(dia<=31){
           dia=1;
        break;
    case 12:
        if(dia > 31){
            dia=1;
            mes=1;
            anio++;
        }
    case 4:
    case 6:
    case 9:
    case 11:
        if(dia <=30){
            dia=1;
            mes++;
        }
        break;
    case 2:
        //TODO: Considerar los años bisiestos
        if(esBisiesto()){
            if(dia <=29){
                dia=1;
                mes++;
            }else{
                if(dia <=29){
                    dia=1;
                    mes++;
                }
            }
            break;
        }
}
    if(dia>31){
        dia=1;
        mes++;
        if(mes>12){
            anio++;
            mes=1;
        }
    }
}
}
