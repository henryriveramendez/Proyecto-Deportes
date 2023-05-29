#pragma once
#include "Equipo.h"
#include "ModGen.h"

#define CANT_MAX_EQUI 10

class Deporte
{
protected:
	string nombre;
	string reglas;
	ModGen<Equipo> equipos;
public:
	Deporte(string nombre, string reglas);
	~Deporte();

	string getNombre();
	string getReglas();

	string toJson();

};

