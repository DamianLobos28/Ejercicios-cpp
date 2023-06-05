#include "Cita.h"

Cita::Cita(){}

Cita::Cita(string name1, string name2, string place, Fecha date)
{
	this->name1 = name1;
	this->name2 = name2;
	this->place = place;
	this->date = date;
}

string Cita::toString() {
	return "Cita[Name 1: " + this->name1 + ", Name 2: " + this->name2 + ", Place: " + this->place + this->date.toString()+"]";
}