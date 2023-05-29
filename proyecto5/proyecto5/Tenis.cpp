#include "Tenis.h"

Tenis::Tenis(string nombre, string reglas, string superficie)
	:Deporte(nombre, reglas)
{
	this->superficie = superficie;
}

Tenis::~Tenis()
{
}

string Tenis::getSuperficie()
{
	return superficie;
}

string Tenis::toJson()
{
    stringstream ss;
    ss << "{";
    ss << "\"nombre\": \"" << nombre << "\", ";
    ss << "\"reglas\": \"" << reglas << "\", ";
    ss << "\"superficie\": \"" << superficie << "\", ";
    ss << "\"tipo\": \"Tenis\", ";
    ss << "\"equipos\": [";
    //ss <<
    ss << "]";
    ss << "}";
    return ss.str();
}
