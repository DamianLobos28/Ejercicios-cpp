#pragma once
#include "A.h"
class ListaDeObjetos
{
private:
	int elements = 0;
	A list[20];
public:
	ListaDeObjetos();
	void addA(A);
	void deleteElement(int);
	void showA(int);
};

