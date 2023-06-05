#pragma once
#include "Insecto.h"
#include<string>
using namespace std;

class Mosca : public Insecto
{
protected:
	string como;
public:
	Mosca();
	Mosca(string, bool, string, string);
	void respiro();
	void meAlimento();
	void habito();
	void meReproduzco();
	void meDesplazo();
};

