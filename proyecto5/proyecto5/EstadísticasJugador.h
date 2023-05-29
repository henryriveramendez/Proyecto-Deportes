#pragma once
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Estad�sticasJugador
{
private:
	int golesAnotados;
	int asistencias;
	float promedioPuntos;
public:
	Estad�sticasJugador(int golesAnotados, int asistencias, float promedioPuntos);
	~Estad�sticasJugador();

	int getGolesAnotados();
	void incrementarGolesAnotados();
	int getAsistencias();
	void incrementarAsistencias();
	float getPromedioPuntos();
	void actualizarPromedioPuntos(float puntos);

	string toJson();
	

};

