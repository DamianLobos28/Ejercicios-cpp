#pragma once
#include<string>
using namespace std;

class Fecha
{
private:
	int ano;
	int mes;
	int dia;
	int hora;
public:
	Fecha();
	Fecha(int, int, int, int);
	string toString();
	bool verificarFecha();
};

