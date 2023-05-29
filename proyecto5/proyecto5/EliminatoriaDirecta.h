#pragma once
#include "Partido.h"
#include "ModGen.h"

#define CANT_MAX_PAR 10

class EliminatoriaDirecta
{
private:
	string nombre;
	ModGen<Partido> partidos;
public:
	EliminatoriaDirecta(string nombre);
	~EliminatoriaDirecta();

	string getNombre();

	string toJson();
};

