#include "Estad�sticasJugador.h"

Estad�sticasJugador::Estad�sticasJugador(int golesAnotados, int asistencias, float promedioPuntos)
{
	this->golesAnotados = golesAnotados;
	this->asistencias = asistencias;
	this->promedioPuntos = promedioPuntos;
}

Estad�sticasJugador::~Estad�sticasJugador()
{
}

int Estad�sticasJugador::getGolesAnotados()
{
	return golesAnotados;
}

void Estad�sticasJugador::incrementarGolesAnotados()
{
	golesAnotados++;
}

int Estad�sticasJugador::getAsistencias()
{
	return asistencias;
}

void Estad�sticasJugador::incrementarAsistencias()
{
	asistencias++;
}

float Estad�sticasJugador::getPromedioPuntos()
{
	return promedioPuntos;
}

void Estad�sticasJugador::actualizarPromedioPuntos(float puntos)
{
	promedioPuntos = (promedioPuntos * golesAnotados + puntos) / (golesAnotados + 1);
}

string Estad�sticasJugador::toJson()
{
	stringstream ss;
	ss << "{";
	ss << "\"golesAnotados\": " << golesAnotados << ", ";
	ss << "\"asistencias\": " << asistencias << ", ";
	ss << "\"promedioPuntos\": " << promedioPuntos;
	ss << "}";
	return ss.str();
}
