#pragma once
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Estad�sticasEquipo
{
private:
	int partidosGanados;
	int partidosPerdidos;
	int partidosEmpatados;
	int golesAnotados;
public:
	Estad�sticasEquipo(int partidosGanados, int partidosPerdidos, int partidosEmpatados, int golesAnotados);
	~Estad�sticasEquipo();

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

