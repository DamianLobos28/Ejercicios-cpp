#pragma once
#include "SerVivo.h"
#include<string>
using namespace std;

class Ave : public SerVivo
{
	protected:
		string tipoAlimentacion;
		bool vuela;
		string colorPlumaje;
	public:
		Ave();
		Ave(string, bool, string);
};

