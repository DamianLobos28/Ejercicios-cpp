#include "Leon.h"
#include<string>
#include<iostream>
using namespace std;

Leon::Leon(){ }

Leon::Leon(string color, int cantPatas, string tipoAlimentacion) :Mamifero(cantPatas, tipoAlimentacion) {
	this->color = color;
}

void Leon::respiro() {
	cout << "\nRespiro cual leon\n";
}

void Leon::meAlimento() {
	cout << "\nMe alimento de " + this->tipoAlimentacion;
}

void Leon::habito() {
	cout << "\nHabito con otros leones\n";
}

void Leon::meReproduzco() {
	cout << "\nMe reproduzco con leonas\n";
}

void Leon::meDesplazo() {
	cout << "\nMe desplazo caminando como leon\n";
}