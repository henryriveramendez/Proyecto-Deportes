#pragma once
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class EstadísticasEquipo
{
private:
	int partidosGanados;
	int partidosPerdidos;
	int partidosEmpatados;
	int golesAnotados;
public:
	EstadísticasEquipo(int partidosGanados, int partidosPerdidos, int partidosEmpatados, int golesAnotados);
	~EstadísticasEquipo();

	int getPartidosGanados();
	void incrementarPartidosGanados();
	int getPartidosPerdidos();
	void incrementarPartidosPerdidos();
	int getPartidosEmpatados();
	void incrementarPartidosEmpatados();
	int getGolesAnotados();
	void incrementarGolesAnotados(int cantidad);

	string toJson();
};

