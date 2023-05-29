#pragma once
#include "Deporte.h"
class Futbol :
    public Deporte
{
private:
    string tipo;
public:
    Futbol(string nombre, string reglas, string tipo);
    ~Futbol();

    string getTipo();

    string toJson();

};

