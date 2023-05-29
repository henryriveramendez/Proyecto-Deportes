#include "Equipo.h"

Equipo::Equipo(string nombre, string entrenador) :jugadores(CANT_MAX_JU)
{
	this->nombre = nombre;
	this->entrenador = entrenador;
}

Equipo::~Equipo()
{
}

string Equipo::getNombre()
{
	return nombre;
}

string Equipo::getEntrenador()
{
	return entrenador;
}

void Equipo::agregarJugador(Jugador* j)
{
    jugadores.registrar(j);
}

string Equipo::toJson()
{
    stringstream ss;
    ss << "{";
    ss << "\"nombre\": \"" << nombre << "\", ";
    ss << "\"entrenador\": \"" << entrenador << "\", ";
    ss << "\"jugadores\": [";
    //ss << jugadores.toJson;
    ss << "]";
    ss << "}";
    return ss.str();
}
