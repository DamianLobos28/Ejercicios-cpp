#include "Insecto.h"

Insecto::Insecto(){}

Insecto::Insecto(bool vuela, string tipoInsecto, string color) {
	this->vuela = vuela;
	this->tipoInsecto = tipoInsecto;
	this->color = color;
}