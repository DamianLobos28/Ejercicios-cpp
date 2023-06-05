#include<iostream>
#include "ControlDeCitas.h"
using namespace std;

int main() {
	ControlDeCitas control;
	int op = 0;
	while (op != -1) {
		cout << "\nOptions:\n1_Add Date\n2_See Dates\n-1_Exit\n";
		cin >> op;
		switch (op)
		{
		case 1:
			control.createDate();
			break;
		case 2:
			control.seeDates();
			break;
		case -1:
			cout << "\nEXIT\n";
			break;
		default:
			cout << "\nWrong option\n";
			break;
		}
	}
}