#include "Colibri.h"
#include<string>
#include <iostream>
using namespace std;

Colibri :: Colibri(){}

Colibri::Colibri(bool canta, string tipoAlimentacion, bool vuela, string colorPlumaje) :Ave(tipoAlimentacion, vuela, colorPlumaje) {
	this->canta = canta;
}

void Colibri::respiro() {
	cout<<"\nRespiro cual colibri\n";
}

void Colibri::meAlimento() {
	cout << "\nMe alimento de " + this->tipoAlimentacion + "\n";
}

void Colibri::habito() {
	cout << "\nHabito arboles\n";
}

void Colibri::meReproduzco() {
	cout << "\nMe reproduzco con colibries\n";
}

void Colibri::meDesplazo() {
	cout << "\nVuelo: " + to_string(this->vuela) + "\n";
}