#pragma once
#include "SerVivo.h"
#include<string>
using namespace std;

class Reptil :  public SerVivo
{
protected:
	string tipoPiel;
	string color;
public:
	Reptil();
	Reptil(string, string);
};

