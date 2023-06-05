#include "Mosca.h"
#include<string>
#include<iostream>
using namespace std;

Mosca::Mosca(){}

Mosca::Mosca(string como, bool vuela, string tipoInsecto, string color) :Insecto(vuela, tipoInsecto, color) {
	this->como = como;
}

void Mosca::respiro() {
	cout << "\nRespiro como mosca\n";
}

void Mosca::meAlimento() {
	cout << "\nMe alimento de "+como+"\n";
}

void Mosca::habito() {
	cout << "\nHabito en el aire\n";
}

void Mosca::meReproduzco() {
	cout << "\nMe reproduzco con moscas femeninas\n";
}

void Mosca::meDesplazo() {
	cout << "\nVuelo: " + to_string(this->vuela) + "\n";
}