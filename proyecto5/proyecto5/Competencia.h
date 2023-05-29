#pragma once
#include "Fase.h"
#include "Equipo.h"
#include "Partido.h"
#include "ModGen.h"

#define CANT_MAX_FA 10
#define CANT_MAX_EQUI 10
#define CANT_MAX_PAR 10

class Competencia
{
private:
	string nombre;
	ModGen<Fase> fases;
	ModGen<Equipo> equiposPaticipantes;
	ModGen<Partido> partidos;
public:
	Competencia(string nombre);
	~Competencia();

	string getNombre();
	ModGen<Fase>& getFases();
	ModGen<Equipo>& getEquiposParticipantes();
	
	void agregarEquipo(Equipo* e);
	void registrarPartido(Partido* partido);

	void setNombre(string nombre);

	string toJson();
};

