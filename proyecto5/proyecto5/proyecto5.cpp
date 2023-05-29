#include "Controlador.h" // Asegúrate de incluir el archivo de encabezado de la clase Controlador

using namespace std;

void mostrarMenu() {
    cout << "========== Menú ==========" << endl;
    cout << "1. Agregar Equipo" << endl;
    cout << "2. Agregar Competencia" << endl;
    cout << "3. Agregar Equipo a Competencia" << endl;
    cout << "4. Agregar Jugador" << endl;
    cout << "5. Registrar Partido" << endl;
    cout << "6. Salir" << endl;
    cout << "==========================" << endl;
    cout << "Ingrese la opción deseada: ";
}

int main() {
    Controlador controlador;

    int opcion;
    string nombreEquipo, entrenador, nombreCompetencia, nombreEquipoCompetencia;
    string nombreJugador, posicion;
    int ci, edad;
    int golesLocal, golesVisitante;

    do {
        mostrarMenu();
        cin >> opcion;

        switch (opcion) {
        case 1:
            cout << "Ingrese el nombre del equipo: ";
            cin >> nombreEquipo;
            cout << "Ingrese el nombre del entrenador: ";
            cin >> entrenador;
            controlador.agregarEquipo(nombreEquipo, entrenador);
            break;
        case 2:
            cout << "Ingrese el nombre de la competencia: ";
            cin >> nombreCompetencia;
            controlador.agregarCompetencia(nombreCompetencia);
            break;
        case 3:
            cout << "Ingrese el nombre de la competencia: ";
            cin >> nombreCompetencia;
            cout << "Ingrese el nombre del equipo: ";
            cin >> nombreEquipoCompetencia;
            controlador.agregarEquipoCompetencia(nombreCompetencia, nombreEquipoCompetencia);
            break;
        case 4:
            cout << "Ingrese el nombre del Equipo: ";
            cin >> nombreEquipo;
            cout << "Ingrese el CI del jugador: ";
            cin >> ci;
            cout << "Ingrese el nombre del jugador: ";
            cin >> nombreJugador;
            cout << "Ingrese la posicion del jugador: ";
            cin >> posicion;
            cout << "Ingrese la edad del jugador: ";
            cin >> edad;
            controlador.agregarJugador(nombreEquipo, nombreJugador, ci, edad, posicion);
            break;
        case 5:
            cout << "Ingrese el nombre de la competencia: ";
            cin >> nombreCompetencia;
            cout << "Ingrese el nombre del equipo local: ";
            cin >> nombreEquipo;
            cout << "Ingrese el nombre del equipo visitante: ";
            cin >> nombreEquipoCompetencia;
            cout << "Ingrese los goles del equipo local: ";
            cin >> golesLocal;
            cout << "Ingrese los goles del equipo visitante: ";
            cin >> golesVisitante;
            //controlador.registrarPartido(nombreCompetencia, nombreEquipo, nombreEquipoCompetencia, golesLocal, golesVisitante);
            break;
        case 6:
            cout << "¡Hasta luego!" << endl;
            break;
        default:
            cout << "Opción inválida. Por favor, ingrese una opción válida." << endl;
        }

        cout << endl;

    } while (opcion != 6);

    return 0;
}