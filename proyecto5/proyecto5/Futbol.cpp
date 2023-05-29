#include "Futbol.h"

Futbol::Futbol(string nombre, string reglas, string tipo)
	: Deporte(nombre, reglas)
{
	this->tipo = tipo;
}

Futbol::~Futbol()
{
}

string Futbol::getTipo()
{
	return tipo;
}

string Futbol::toJson()
{
    stringstream ss;
    ss << "{";
    ss << "\"nombre\": \"" << nombre << "\", ";
    ss << "\"reglas\": \"" << reglas << "\", ";
    ss << "\"tipo\": \"" << tipo << "\", ";
    ss << "\"tipo\": \"Fútbol\", ";
    ss << "\"equipos\": [";
    //ss << 
    ss << "]";
    ss << "}";
    return ss.str();
}
