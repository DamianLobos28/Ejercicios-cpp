#pragma once
#include "Mamifero.h"
#include<string>
using namespace std;

class Leon : public Mamifero
{
protected:
	string color;
public:
	Leon();
	Leon(string, int, string);
	void respiro();
	void meAlimento();
	void habito();
	void meReproduzco();
	void meDesplazo();
};


