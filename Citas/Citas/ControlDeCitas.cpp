#include "ControlDeCitas.h"
#include<iostream>
#include<string.h>
using namespace std;

ControlDeCitas::ControlDeCitas(){}

void ControlDeCitas::createDate() {
	string name1, name2, place;
	int ano, mes, dia, hora;
	cout << "\nEnter the first name: ";
	cin >> name1;
	cin.get();
	cout << "\nEnter the second name: ";
	cin >> name2;
	cin.get();
	cout << "\nEnter the place: ";
	getline(cin, place);
	cout << "\nEnter the year: ";
	cin >> ano;
	cout << "\nEnter month: ";
	cin >> mes;
	cout << "\nEnter day: ";
	cin >> dia;
	cout << "\nEnter Hour: ";
	cin >> hora;
	Fecha date(ano, mes, dia, hora);
	bool isOk = date.verificarFecha();
	if (isOk) {
		Cita cita(name1, name2, place, date);
		dates[datesAdded] = cita;
		datesAdded++;
		cout << "\nDate created\n";
	}
	else {
		cout << "\nWe can't create the date. date incorrect\n";
		cout << "\nObject discard\n";
	}
}

void ControlDeCitas::seeDates() {
	for (int i = 0; i < datesAdded; i++) {
		cout << dates[i].toString()<<"\n";
	}
}