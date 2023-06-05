#include "Ave.h"

Ave::Ave(){}

Ave::Ave(string tipoAlimentacion, bool vuela, string colorPlumaje) {
	this->tipoAlimentacion = tipoAlimentacion;
	this->vuela = vuela;
	this->colorPlumaje = colorPlumaje;
}