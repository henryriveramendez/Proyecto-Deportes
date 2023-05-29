#include "Ronda.h"

Ronda::Ronda() :partidos(CANT_MAX_PAR)
{
}

Ronda::~Ronda()
{
}

ModGen<Partido>& Ronda::getPartidos()
{
	// TODO: insert return statement here
	return partidos;
}

string Ronda::toJson()
{
    std::stringstream ss;
    ss << "{";
    ss << "\"partidos\": [";
    // ss <<
    ss << "]";
    ss << "}";
    return ss.str();
}
