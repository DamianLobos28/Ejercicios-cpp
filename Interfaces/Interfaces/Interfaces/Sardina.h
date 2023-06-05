#pragma once
#include "Pez.h"
#include<string>
using namespace std;


class Sardina : public Pez
{
protected:
	string color;
public:
	Sardina();
	Sardina(string, string, string);
	void respiro();
	void meAlimento();
	void habito();
	void meReproduzco();
	void meDesplazo();
};

