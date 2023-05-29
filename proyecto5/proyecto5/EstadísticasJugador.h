#pragma once
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class EstadísticasJugador
{
private:
	int golesAnotados;
	int asistencias;
	float promedioPuntos;
public:
	EstadísticasJugador(int golesAnotados, int asistencias, float promedioPuntos);
	~EstadísticasJugador();

	int getGolesAnotados();
	void incrementarGolesAnotados();
	int getAsistencias();
	void incrementarAsistencias();
	float getPromedioPuntos();
	void actualizarPromedioPuntos(float puntos);

	string toJson();
	

};

