#pragma once
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

template<class T>
class ModGen
{
private:
	T** datos;
	int cantMax, cantActual;
public:
	ModGen(int cantMax);
	~ModGen();
	void registrar(T* dato);
	string toJson(string(*toJson)(T* dato));
	T* buscar(T* dato);
	void ordenar(bool (*cmp)(T*, T*));

};

template<class T>
ModGen<T>::ModGen(int cantMax)
{
	datos = new T * [cantMax];
	this->cantMax = cantMax;
	cantActual = 0;
}

template<class T>
ModGen<T>::~ModGen()
{
	delete[] datos;
}

template<class T>
void ModGen<T>::registrar(T* dato)
{
	if (cantActual < cantMax)
	{
		datos[cantActual] = dato;
		cantActual++;
	}
	else
		cout << "Limite, excedido" << endl;
}

template<class T>
string ModGen<T>::toJson(string(*toJson)(T* dato))
{
	stringstream ss;
	ss << "[";
	for (int i = 0; i < cantActual; i++)
	{
		ss << (*toJson)(datos[i]);
		if (i < cantActual - 1)
		{
			ss << ",";
		}
	}
	ss << "]";
	return ss.str();
}

template<class T>
T* ModGen<T>::buscar(T* dato)
{
	for (int i = 0; i < cantActual; i++)
	{
		if ((*datos[i]) == dato)
			return datos[i];

	}
	return NULL;
}

template<class T>
void ModGen<T>::ordenar(bool (*cmp)(T*, T*))
{
	for (int i = 0; i < cantActual; i++)
	{
		for (int j = 0; j < cantActual - i - 1; j++)
		{
			if ((*cmp)(datos[j], datos[j + 1]))
				swap(datos[j], datos[j + 1]);
		}
	}
}