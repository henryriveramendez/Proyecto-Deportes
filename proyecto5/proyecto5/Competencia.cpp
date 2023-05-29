#include "Competencia.h"



Competencia::Competencia(string nombre) :fases(CANT_MAX_FA), equiposPaticipantes(CANT_MAX_EQUI), partidos(CANT_MAX_PAR)
{
}

Competencia::~Competencia()
{
}

string Competencia::getNombre()
{
	return nombre;
}

ModGen<Fase>& Competencia::getFases()
{
    // TODO: insert return statement here
    return fases;
}

ModGen<Equipo>& Competencia::getEquiposParticipantes()
{
    // TODO: insert return statement here
    return equiposPaticipantes;
}

void Competencia::agregarEquipo(Equipo* e)
{
    equiposPaticipantes.registrar(e);
}

void Competencia::registrarPartido(Partido* p)
{
    partidos.registrar(p);
}

void Competencia::setNombre(string nombre)
{
    this->nombre = nombre;
}



string Competencia::toJson()
{
    stringstream ss;
    ss << "{";
    ss << "\"nombre\": \"" << nombre << "\", ";
    ss << "\"fases\": [";
    //ss <<
    ss << "], ";
    ss << "\"equiposParticipantes\": [";
    // ss <<
    ss << "]";
    ss << "}";
    return ss.str();
}
