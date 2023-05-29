#include "Partido.h"

Partido::Partido(int id, int fecha, string resultado, Equipo* equipoLocal, Equipo* equipoVisitante)
{
	this->id = id;
	this->fecha = fecha;
	this->resultado = resultado;
	this->equipoLocal = equipoLocal;
	this->equipoVisitante = equipoVisitante;
}

Partido::~Partido()
{
}

int Partido::getId()
{
	return id;
}

string Partido::getResultado()
{
	return resultado;
}

string Partido::toJson()
{
	stringstream ss;
	ss << "{";
	ss << "\"fecha\": \"" << fecha << "\", ";
	ss << "\"resultado\": \"" << resultado << "\", ";
	ss << "\"id\": \"" << id << "\", ";
	ss << "\"equipoLocal\": " << equipoLocal->toJson() << ", ";
	ss << "\"equipoVisitante\": " << equipoVisitante->toJson();
	ss << "}";
	return ss.str();
}


