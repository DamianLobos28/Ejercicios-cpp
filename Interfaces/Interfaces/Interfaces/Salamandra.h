#pragma once
#include "Anfibio.h"
#include<string>
using namespace std;

class Salamandra :  public Anfibio
{
private:
	string color;
public:
	Salamandra();
	Salamandra(bool, string, string);
	void respiro();
	void meAlimento();
	void habito();
	void meReproduzco();
	void meDesplazo();
};

