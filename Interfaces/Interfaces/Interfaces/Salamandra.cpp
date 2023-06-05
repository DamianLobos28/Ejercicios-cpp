#include "Salamandra.h"
#include <iostream>
using namespace std;

Salamandra::Salamandra(){}

Salamandra::Salamandra(bool poneHuevos, string habitat, string color) :Anfibio(poneHuevos, habitat) {
	this->color = color;
}

void Salamandra :: respiro() {
	cout << "\nRespiro cual salamandra\n";
}

void Salamandra :: meAlimento() {
	cout << "\nMe alimento de comida para salamandra\n";
}

void Salamandra :: habito() {
	cout << "\nHabito en: " << this->habitat;
}

void Salamandra::meReproduzco() {
	cout << "\nMe reproduzco cual salamandra\n";
}

void Salamandra::meDesplazo() {
	cout << "\nCamino en 4 patas\n";
}