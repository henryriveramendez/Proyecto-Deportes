#include "Deporte.h"

Deporte::Deporte(string nombre, string reglas):equipos(CANT_MAX_EQUI)
{
	this->nombre = nombre;
	this->reglas = reglas;
}

Deporte::~Deporte()
{
}

string Deporte::getNombre()
{
	return nombre;
}

string Deporte::getReglas()
{
	return reglas;
}

string Deporte::toJson()
{
    stringstream ss;
    ss << "{";
    ss << "\"nombre\": \"" << nombre << "\", ";
    ss << "\"reglas\": \"" << reglas << "\", ";
    ss << "\"equipos\": [";
    //ss << equipos.toJson();
    ss << "]";
    ss << "}";
    return ss.str();
}
