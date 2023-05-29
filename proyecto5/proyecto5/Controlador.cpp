#include "Controlador.h"

Controlador::Controlador() : equipos(CANT_MAX_EQUI), competencias(CANT_MAX_COM)
{
}

Controlador::~Controlador()
{
}

ModGen<Equipo>& Controlador::getEquipos()
{
	// TODO: insert return statement here
	return equipos;
}

ModGen<Competencia>& Controlador::getCompetencias()
{
	// TODO: insert return statement here
	return competencias;
}

void Controlador::crearEquipo( string& nombre,  string& entrenador)
{
	Equipo* equipo = new Equipo(nombre, entrenador);
	equipos.registrar(equipo);
	cout << "Equipo creado: " << nombre << endl;
}

void Controlador::mostrarEquipos()
{
	string json = equipos.toJson([](Equipo* equipo) {
		stringstream ss;
		ss << "{\"nombre\":\"" << equipo->getNombre() << "\",\"entrenador\":\"" << equipo->getEntrenador() << "\"}";
		return ss.str();
		});
	cout << "Equipos:" << endl;
	cout << json << endl;
}

void Controlador::mostrarEquipo( string nombre)
{
	Equipo equipo(nombre, "");
	Equipo* encontrado = equipos.buscar(&equipo);
	if (encontrado) {
		cout << "Equipo encontrado: " << encontrado->getNombre() << ", Entrenador: " << encontrado->getEntrenador() << std::endl;
	}
	else {
		cout << "Equipo no encontrado" << std::endl;
	}
}

void Controlador::agregarJugador(string nombreEquipo, string nombreJugador, int ci, int edadJugador, string posicion)
{
	Equipo equipo(nombreEquipo, "");
	Equipo* encontrado = equipos.buscar(&equipo);
	if (encontrado) {
		Jugador* jugador = new Jugador(ci, nombreJugador, posicion, edadJugador);
		encontrado->agregarJugador(jugador);
		cout << "Jugador agregado al equipo " << nombreEquipo << ": " << nombreJugador << ", CI: " << ci << endl;
	}
	else {
		cout << "Equipo no encontrado" << std::endl;
	}
}

void Controlador::agregarEquipo(string nombreEquipo, string entrenador)
{
	Equipo* equipo = new Equipo(nombreEquipo, entrenador);
	equipos.registrar(equipo);
	cout << "Equipo agregado: " << nombreEquipo << ", Entrenador: " << entrenador << endl;
}

void Controlador::agregarCompetencia(string nombreCompetencia)
{
	Competencia* competencia = new Competencia(nombreCompetencia);
	competencias.registrar(competencia);
	cout << "Competencia creada: " << nombreCompetencia << endl;
}

void Controlador::crearCompetencia(string nombre)
{
	Competencia* competencia = new Competencia(nombre);
	competencias.registrar(competencia);
	cout << "Competencia creada" << endl;
}

void Controlador::agregarEquipoCompetencia( string& nombreCompetencia,  string& nombreEquipo)
{
	Competencia competencia(nombreCompetencia); 
	Competencia* encontrado = competencias.buscar(&competencia);
	if (encontrado) {
		Equipo equipo(nombreEquipo, ""); 
		Equipo* encontradoEquipo = equipos.buscar(&equipo);
		if (encontradoEquipo) {
			encontrado->agregarEquipo(encontradoEquipo); 
			cout << "Equipo agregado a la competencia: " << nombreCompetencia << ", Equipo: " << nombreEquipo << endl;
		}
		else {
			cout << "Equipo no encontrado" << endl;
		}
	}
	else {
		cout << "Competencia no encontrada" << endl;
	}
}
/*
void Controlador::registrarPartido(string& nombreCompetencia,  string& nombreEquipoLocal,  string& nombreEquipoVisitante, int golesLocal, int golesVisitante, int partidoId, int fechaPartido, string resultadoPartido)
{
	Competencia competencia(nombreCompetencia);
	Competencia* encontrado = competencias.buscar(&competencia);
	if (encontrado) {
		Equipo equipoLocal(nombreEquipoLocal, "");
		Equipo* encontradoEquipoLocal = equipos.buscar(&equipoLocal);
		Equipo equipoVisitante(nombreEquipoVisitante, "");
		Equipo* encontradoEquipoVisitante = equipos.buscar(&equipoVisitante);
		if (encontradoEquipoLocal && encontradoEquipoVisitante) {
			Partido* partido = new Partido(partidoId, fechaPartido, resultadoPartido, encontradoEquipoLocal, encontradoEquipoVisitante);
			encontrado->registrarPartido(partido);
			cout << "Partido registrado en la competencia: " << nombreCompetencia << endl;
		}
		else {
			cout << "Uno o ambos equipos no encontrados" << endl;
		}
	}
	else {
		cout << "Competencia no encontrada" << endl;
	}

}*/


