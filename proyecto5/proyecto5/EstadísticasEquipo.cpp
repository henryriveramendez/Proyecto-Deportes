#include "Estad�sticasEquipo.h"

Estad�sticasEquipo::Estad�sticasEquipo(int partidosGanados, int partidosPerdidos, int partidosEmpatados, int golesAnotados)
{
	this->partidosGanados = partidosGanados;
	this->partidosPerdidos = partidosPerdidos;
	this->partidosEmpatados = partidosEmpatados;
	this->golesAnotados = golesAnotados;
}

Estad�sticasEquipo::~Estad�sticasEquipo()
{
}

int Estad�sticasEquipo::getPartidosGanados()
{
	return partidosGanados;
}

void Estad�sticasEquipo::incrementarPartidosGanados()
{
	partidosGanados++;
}

int Estad�sticasEquipo::getPartidosPerdidos()
{
	return partidosPerdidos;
}

void Estad�sticasEquipo::incrementarPartidosPerdidos()
{
	partidosPerdidos++;
}

int Estad�sticasEquipo::getPartidosEmpatados()
{
	return partidosEmpatados;
}

void Estad�sticasEquipo::incrementarPartidosEmpatados()
{
	partidosEmpatados++;
}

int Estad�sticasEquipo::getGolesAnotados()
{
	return golesAnotados;
}

void Estad�sticasEquipo::incrementarGolesAnotados(int cantidad)
{
	golesAnotados += cantidad;
}

string Estad�sticasEquipo::toJson()
{
	stringstream ss;
	ss << "{";
	ss << "\"partidosGanados\": " << partidosGanados << ", ";
	ss << "\"partidosPerdidos\": " << partidosPerdidos << ", ";
	ss << "\"partidosEmpatados\": " << partidosEmpatados << ", ";
	ss << "\"golesAnotados\": " << golesAnotados;
	ss << "}";
	return ss.str();
}
