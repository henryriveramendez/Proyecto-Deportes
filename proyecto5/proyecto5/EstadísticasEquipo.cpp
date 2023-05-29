#include "EstadísticasEquipo.h"

EstadísticasEquipo::EstadísticasEquipo(int partidosGanados, int partidosPerdidos, int partidosEmpatados, int golesAnotados)
{
	this->partidosGanados = partidosGanados;
	this->partidosPerdidos = partidosPerdidos;
	this->partidosEmpatados = partidosEmpatados;
	this->golesAnotados = golesAnotados;
}

EstadísticasEquipo::~EstadísticasEquipo()
{
}

int EstadísticasEquipo::getPartidosGanados()
{
	return partidosGanados;
}

void EstadísticasEquipo::incrementarPartidosGanados()
{
	partidosGanados++;
}

int EstadísticasEquipo::getPartidosPerdidos()
{
	return partidosPerdidos;
}

void EstadísticasEquipo::incrementarPartidosPerdidos()
{
	partidosPerdidos++;
}

int EstadísticasEquipo::getPartidosEmpatados()
{
	return partidosEmpatados;
}

void EstadísticasEquipo::incrementarPartidosEmpatados()
{
	partidosEmpatados++;
}

int EstadísticasEquipo::getGolesAnotados()
{
	return golesAnotados;
}

void EstadísticasEquipo::incrementarGolesAnotados(int cantidad)
{
	golesAnotados += cantidad;
}

string EstadísticasEquipo::toJson()
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
