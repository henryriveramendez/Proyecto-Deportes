#pragma once
#include "Jugador.h"
#include "ModGen.h"

#define CANT_MAX_JU 10

class Equipo
{
private:
	string nombre;
	string entrenador;
	ModGen<Jugador> jugadores;
public:
	Equipo(string nombre, string entrenador);
	~Equipo();

	string getNombre();
	string getEntrenador();

	void agregarJugador(Jugador* j);

	string toJson();
};

