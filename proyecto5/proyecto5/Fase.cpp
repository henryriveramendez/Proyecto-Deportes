#include "Fase.h"

Fase::Fase(string nombre) 
	: grupos(CANT_MAX_GRU), eliminatoriasDirectas(CANT_MAX_ELI)
{
	this->nombre = nombre;
}

Fase::~Fase()
{
}

ModGen<Grupo>& Fase::getGrupos()
{
	// TODO: insert return statement here
	return grupos;
}

ModGen<EliminatoriaDirecta>& Fase::getEliminatoriasDirectas()
{
	// TODO: insert return statement here
	return eliminatoriasDirectas;
}

string Fase::toJson()
{
    stringstream ss;
    ss << "{";
    ss << "\"nombre\": \"" << nombre << "\", ";
    ss << "\"grupos\": [";
    // ss <<
    ss << "], ";
    ss << "\"eliminatoriasDirectas\": [";
    //ss <<
    ss << "]";
    ss << "}";
    return ss.str();
}
