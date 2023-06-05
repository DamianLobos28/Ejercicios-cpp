#pragma once
#include "Reptil.h"
#include<string>
using namespace std;

class Cocodrilo : public Reptil
{
protected:
	string alimentacion;
public:
	Cocodrilo();
	Cocodrilo(string, string, string);
	void respiro();
	void meAlimento();
	void habito();
	void meReproduzco();
	void meDesplazo();
};

