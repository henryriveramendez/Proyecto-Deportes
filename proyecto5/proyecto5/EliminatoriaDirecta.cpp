#include "EliminatoriaDirecta.h"

EliminatoriaDirecta::EliminatoriaDirecta(string nombre) :partidos(CANT_MAX_PAR)
{
	this->nombre = nombre;
}

EliminatoriaDirecta::~EliminatoriaDirecta()
{
}

string EliminatoriaDirecta::getNombre()
{
	return nombre;
}

string EliminatoriaDirecta::toJson()
{
    stringstream ss;
    ss << "{";
    ss << "\"nombre\": \"" << nombre << "\", ";
    ss << "\"partidos\": [";
    // ss<<
    ss << "]";
    ss << "}";
    return ss.str();
}


