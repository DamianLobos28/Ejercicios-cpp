#pragma once
#include<string>
#include "Fecha.h"
using namespace std;

class Cita
{
private:
	string name1;
	string name2;
	string place;
	Fecha date;
public:
	Cita();
	Cita(string, string, string, Fecha);
	string toString();
};

