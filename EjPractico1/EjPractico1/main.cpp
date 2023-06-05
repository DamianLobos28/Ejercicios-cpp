#include<iostream>
#include "ListaDeObjetos.h"
#include "A.h"
using namespace std;

void newListObject(ListaDeObjetos* list) {
	int serial;
	string name;
	cout << "\nEnter the serial number: ";
	cin >> serial;
	cout << "\nEnter the name of the element: ";
	cin >> name;
	cin.get();
	A a(serial, name);
	list->addA(a);
}

int main() {
	int op = 0, pos;
	ListaDeObjetos list;
	while (op != -1) {
		cout << "\nSelect an operation: ";
		cout << "\n1_Add an element";
		cout << "\n2_Delete an element";
		cout << "\n3_See an element";
		cout << "\n-1_Exit\n";
		cin >> op;
		switch (op)
		{
		case 1:
			newListObject(&list);
			break;
		case 2:
			cout << "\nEnter the position of the element you want to delete: ";
			cin >> pos;
			list.deleteElement(pos);
			break;
		case 3:
			cout << "\nEnter the position of the element you want to see (-1 to see all): ";
			cin >> pos;
			list.showA(pos);
			break;
		case -1:
			cout << "\nEXIT";
			break;
		default:
			cout << "\nthere is no such option";
			break;
		}
	}


}

