#pragma once
#include "Deporte.h"
class Baloncesto :
    public Deporte
{
private:
    string cancha;
public:
    Baloncesto(string nombre, string reglas, string cancha);
    ~Baloncesto();

    string getCancha();

    string toJson();

};

