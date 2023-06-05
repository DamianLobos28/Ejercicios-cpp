#pragma once
#include "SerVivo.h"
#include<string>
using namespace std;

class Insecto : public SerVivo
{
protected:
	bool vuela;
	string tipoInsecto;
	string color;
public:
	Insecto();
	Insecto(bool, string, string);

};

