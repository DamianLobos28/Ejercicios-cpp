#pragma once
#include "SerVivo.h"
#include<string>
using namespace std;

class Anfibio :  public SerVivo
{
protected:
	bool poneHuevos;
	string habitat;
public:
	Anfibio();
	Anfibio(bool, string);
};

