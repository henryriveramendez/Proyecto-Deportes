#include "Grupo.h"

Grupo::Grupo(string nombre) : equipos(CANT_MAX_EQUI)
{
	this->nombre = nombre;
}

Grupo::~Grupo()
{
}

string Grupo::getNombre()
{
	return nombre;
}

string Grupo::toJson()
{
    stringstream ss;
    ss << "{";
    ss << "\"nombre\": \"" << nombre << "\", ";
    ss << "\"equipos\": [";
    //ss <<
    ss << "]";
    ss << "}";
    return ss.str();
}
