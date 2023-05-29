#include "Jugador.h"

Jugador::Jugador(int ci, string nombre, string posicion, int edad)
{
	this->ci = ci;
	this->nombre = nombre;
	this->posicion = posicion;
	this->edad = edad;
}

Jugador::~Jugador()
{
}

int Jugador::getCi()
{
	return ci;
}

string Jugador::getNombre()
{
	return nombre;
}

string Jugador::getPosicion()
{
	return posicion;
}

int Jugador::getEdad()
{
	return edad;
}

string Jugador::toJson()
{
	stringstream ss;
	ss << "{";
	ss << "\"nombre\": \"" << nombre << "\", ";
	ss << "\"posicion\": \"" << posicion << "\", ";
	ss << "\"edad\": " << edad << ", ";
	ss << "\"ci\": \"" << ci << "\"";
	ss << "}";
	return ss.str();
}
