#include "ListaDeObjetos.h"
#include<iostream>
using namespace std;

ListaDeObjetos::ListaDeObjetos(){}

void ListaDeObjetos::addA(A item) {
	
	if (elements < 20) {
		list[elements] = item;
		cout << "\nItem added";
		elements++;
	}
	else {
		cout << "\nThere is no space for the item on the list";
	}
}

void ListaDeObjetos::deleteElement(int pos) {
	if (pos >= elements || pos<0 ) {
		cout << "\nThere is no element to delete";
	}
	else {
		for (int i = pos; i < elements; i++) {
			list[i] = list[i + 1];
		}
		cout << "\nThe element was deleted";
		elements--;
	}
}

void ListaDeObjetos::showA(int pos) {
	if (pos == -1) {
		for (int i = 0; i < elements; i++) {
			cout << "\nSerial: " << list[i].getSerial() << ", Name: " << list[i].getName();
		}
	}		
	else if (pos >= elements || pos < -1) {
		cout << "\nThere is no element to show";
	}
	else {
		cout << "\nSerial: " << list[pos].getSerial() << ", Name: " << list[pos].getName();
	}
}