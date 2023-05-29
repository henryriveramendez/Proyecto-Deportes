#include "Baloncesto.h"

Baloncesto::Baloncesto(string nombre, string reglas, string cancha)
	:Deporte(nombre, reglas)
{
	this->cancha = cancha;
}

Baloncesto::~Baloncesto()
{
}

string Baloncesto::getCancha()
{
	return cancha;
}

string Baloncesto::toJson()
{
    stringstream ss;
    ss << "{";
    ss << "\"nombre\": \"" << nombre << "\", ";
    ss << "\"reglas\": \"" << reglas << "\", ";
    ss << "\"cancha\": \"" << cancha << "\", ";
    ss << "\"tipo\": \"Baloncesto\", ";
    ss << "\"equipos\": [";
    //ss <<
    ss << "]";
    ss << "}";
    return ss.str();
}
