#include "Cocodrilo.h"
#include<iostream>
#include<string>
using namespace std;

Cocodrilo::Cocodrilo(){}

Cocodrilo::Cocodrilo(string alimentacion, string tipoPiel, string color) :Reptil(tipoPiel, color) {
	this->alimentacion = alimentacion;
}

void Cocodrilo::respiro() {
	cout << "\nRespiro cual cocodrilo\n";
}

void Cocodrilo::meAlimento() {
	cout << "\nComo " + this->alimentacion + "\n";
}

void Cocodrilo::habito() {
	cout << "\nVivo en el pantano\n";
}

void Cocodrilo::meReproduzco() {
	cout << "\nMe reproduzco sexualmente\n";
}

void Cocodrilo::meDesplazo() {
	cout << "\nMe desplazo caminando en 4 patas\n";
}