#include "EstadísticasJugador.h"

EstadísticasJugador::EstadísticasJugador(int golesAnotados, int asistencias, float promedioPuntos)
{
	this->golesAnotados = golesAnotados;
	this->asistencias = asistencias;
	this->promedioPuntos = promedioPuntos;
}

EstadísticasJugador::~EstadísticasJugador()
{
}

int EstadísticasJugador::getGolesAnotados()
{
	return golesAnotados;
}

void EstadísticasJugador::incrementarGolesAnotados()
{
	golesAnotados++;
}

int EstadísticasJugador::getAsistencias()
{
	return asistencias;
}

void EstadísticasJugador::incrementarAsistencias()
{
	asistencias++;
}

float EstadísticasJugador::getPromedioPuntos()
{
	return promedioPuntos;
}

void EstadísticasJugador::actualizarPromedioPuntos(float puntos)
{
	promedioPuntos = (promedioPuntos * golesAnotados + puntos) / (golesAnotados + 1);
}

string EstadísticasJugador::toJson()
{
	stringstream ss;
	ss << "{";
	ss << "\"golesAnotados\": " << golesAnotados << ", ";
	ss << "\"asistencias\": " << asistencias << ", ";
	ss << "\"promedioPuntos\": " << promedioPuntos;
	ss << "}";
	return ss.str();
}
