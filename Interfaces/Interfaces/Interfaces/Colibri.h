#pragma once
#include "Ave.h"
#include<string>
using namespace std;
class Colibri : public Ave
{
protected:
	bool canta;
public:
	Colibri();
	Colibri(bool, string, bool, string);
	void respiro();
	void meAlimento();
	void habito();
	void meReproduzco();
	void meDesplazo();
};

