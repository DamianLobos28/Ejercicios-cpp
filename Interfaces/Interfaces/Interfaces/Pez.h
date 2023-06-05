#pragma once
#include "SerVivo.h"
#include<string>
using namespace std;

class Pez : public SerVivo
{
protected:
	string habitat;
	string tipoPez;
public:
	Pez();
	Pez(string, string);

};

