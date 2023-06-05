#pragma once
#include<string>
using namespace std;

class A
{
private:
	int serial;
	string name;
public:
	A();
	A(int, string);
	int getSerial();
	string getName();
	void setSerial(int);
	void setName(string);
	
};

