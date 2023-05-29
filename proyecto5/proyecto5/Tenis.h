#pragma once
#include "Deporte.h"
class Tenis :
    public Deporte
{
private:
    string superficie;
public:
    Tenis(string nombre, string reglas, string superficie);
    ~Tenis();

    string getSuperficie();

    string toJson();
};

