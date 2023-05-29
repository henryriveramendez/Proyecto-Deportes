#pragma once
#include "Equipo.h"
#include "ModGen.h"

#define CANT_MAX_EQUI 10

class Grupo
{
private:
	string nombre;
	ModGen<Equipo> equipos;
public:
	Grupo(string nombre);
	~Grupo();

	string getNombre();

	string toJson();
};

