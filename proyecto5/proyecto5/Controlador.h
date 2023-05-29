#pragma once
#include "ModGen.h"
#include "Equipo.h"
#include "Competencia.h"

#define CANT_MAX_EQUI 10
#define CANT_MAX_COM 10

class Controlador
{
private:
	ModGen<Equipo> equipos;
	ModGen<Competencia> competencias;
public:
	Controlador();
	~Controlador();

	ModGen<Equipo>& getEquipos();
	ModGen<Competencia>& getCompetencias();

    void crearEquipo( string& nombre,  string& entrenador);
    void mostrarEquipos();
    void mostrarEquipo( string nombre);
    void agregarJugador(string nombreEquipo, string nombreJugador, int ci, int edadJugador, string posicion);
    void agregarEquipo(string nombreEquipo, string entrenador);
    void agregarCompetencia(string nombreCompetencia);

    // Métodos para gestionar competencias
    void crearCompetencia(string nombre);
    void agregarEquipoCompetencia(string& nombreCompetencia, string& nombreEquipo);
    //void registrarPartido(string& nombreCompetencia, string& nombreEquipoLocal, string& nombreEquipoVisitante, int golesLocal, int golesVisitante, int partidoId, int fechaPartido, string resultadoPartido);

};

