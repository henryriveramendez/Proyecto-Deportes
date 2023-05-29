#pragma once
#include "Partido.h"
#include "ModGen.h"

#define CANT_MAX_PAR 10

class Ronda
{
private:
	ModGen<Partido> partidos;
public:
	Ronda();
	~Ronda();

	ModGen<Partido>& getPartidos();

	string toJson();
};

