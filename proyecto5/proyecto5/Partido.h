#pragma once
#include "Equipo.h"

class Partido
{
private:
	int id;
	int fecha;
	string resultado;
	Equipo* equipoLocal;
	Equipo* equipoVisitante;
public:
	Partido(int id, int fecha, string resultado, Equipo* equipoLocal, Equipo* equipoVisitante);
	~Partido();

	int getId();
	string getResultado();

	string toJson();


};

