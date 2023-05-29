#pragma once
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Jugador
{
private:
	int ci;
	string nombre;
	string posicion;
	int edad;
public:
	Jugador(int ci, string nombre, string posicion, int edad);
	~Jugador();

	int getCi();
	string getNombre();
	string getPosicion();
	int getEdad();

	string toJson();
};

