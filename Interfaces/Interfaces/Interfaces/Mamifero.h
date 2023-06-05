#pragma once
#include "SerVivo.h"
#include<string>
using namespace std;

class Mamifero:public SerVivo
{

protected:
	int cantPatas;
	string tipoAlimentacion;
public:
	Mamifero();
	Mamifero(int, string);

};

