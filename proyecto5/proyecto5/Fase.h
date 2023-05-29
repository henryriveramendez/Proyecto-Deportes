#pragma once
#include "EliminatoriaDirecta.h"
#include "Grupo.h"
#include "ModGen.h"

#define CANT_MAX_GRU 10
#define CANT_MAX_ELI 10

class Fase
{
private:
	string nombre;
	ModGen<Grupo> grupos;
	ModGen<EliminatoriaDirecta> eliminatoriasDirectas;
public:
	Fase(string nombre);
	~Fase();

	ModGen<Grupo>& getGrupos();
	ModGen<EliminatoriaDirecta>& getEliminatoriasDirectas();

	string toJson();

};

