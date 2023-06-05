#include "Fecha.h"
using namespace std;

Fecha::Fecha(){}

Fecha::Fecha(int ano, int mes, int dia, int hora) {
	this->ano = ano;
	this->mes = mes;
	this->dia = dia;
	this->hora = hora;
}

bool Fecha::verificarFecha() {
    int fecha_correcta = 0;
    int dia_maximo;

    if (mes >= 1 && mes <= 12)
    {
        switch (mes)
        {
        case  1:
        case  3:
        case  5:
        case  7:
        case  8:
        case 10:
        case 12: dia_maximo = 31;
            break;

        case  4:
        case  6:
        case  9:
        case 11: dia_maximo = 30;
            break;

        case  2: if (ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0)
            dia_maximo = 29;
               else
            dia_maximo = 28;
        }

        if (dia >= 1 && dia <= dia_maximo && (hora>=0 && hora<=23))
            fecha_correcta = 1;
    }

    if (fecha_correcta)
        return true;
    else
        return false;
}

string Fecha::toString() {
    return " Fecha[Año: " +  to_string(this->ano) + ",Mes: " + to_string(this->mes) + ", Dia: " + to_string(this->dia) + ", Hora: " + to_string(this->hora)+"]";
}