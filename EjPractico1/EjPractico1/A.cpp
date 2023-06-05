#include "A.h"

A::A(){}

A::A(int serial, string name) {
	this->serial = serial;
	this->name = name;
}

string A::getName() {
	return this->name;
}

int A::getSerial() {
	return this->serial;
}

void A::setName(string name) {
	this->name = name;
}

void A::setSerial(int serial) {
	this->serial = serial;
}