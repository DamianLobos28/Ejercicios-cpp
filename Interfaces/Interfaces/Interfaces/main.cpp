#include<iostream>
#include<string>
#include "SerVivo.h"
#include "Leon.h"
#include "Mosca.h"
#include "Colibri.h"
using namespace std;

void impirmirDatosSerVivo(SerVivo* ser) {
	ser->habito();
	ser->meAlimento();
	ser->meDesplazo();
	ser->meReproduzco();
	ser->respiro();
}

int main() {
	Leon leon("marron", 4, "carne");
	Mosca mosca("basura", true, "volador", "negro");
	Colibri colibri(true, "gusanos", true, "rojo");
	impirmirDatosSerVivo(&leon);
	impirmirDatosSerVivo(&mosca);
	impirmirDatosSerVivo(&colibri);
}

