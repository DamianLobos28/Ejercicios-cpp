#pragma once
#include "Cita.h"
class ControlDeCitas
{
private:
	int datesAdded = 0;
	Cita dates[10];
public:
	ControlDeCitas();
	void createDate();
	void seeDates();

};

