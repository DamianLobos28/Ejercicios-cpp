#include "Sardina.h"
#include<iostream>
#include<string>
using namespace std;

Sardina::Sardina(){}

Sardina::Sardina(string color, string habitat, string tipoPez) :Pez(habitat, tipoPez) {
	this->color = color;
}

void Sardina::respiro() {
	cout << "\nRespiro por mis branquias de sardina\n";
}

void Sardina::meAlimento() {
	cout << "\nMe alimento de peces mas chiquitos\n";
}

void Sardina::habito() {
	cout << "\nHabito "+this->habitat+"\n";
}

void Sardina::meReproduzco() {
	cout << "\nMe reproduzco con sardinas\n";
}

void Sardina::meDesplazo() {
	cout << "\nMe desplazo nadando\n";
}