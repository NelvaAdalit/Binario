#pragma once
#include <vector>
#include <list>
#include <iostream>
#include <msclr\marshal_cppstd.h>
#include <fstream>
#include <sstream>
#include <string>

using namespace System;
using namespace System::IO;
using namespace cliext;

using namespace std;
using namespace System::Collections::Generic;

namespace RegistroVehiculo {
	public ref class Vehiculo
	{
	public:
		property String^ Nro_placa;
		property String^ marca;
		property String^ modelo;
		property int anio;

		String^ getMarca() {
			return this->marca;
		}

		String^ getModelo() {
			return this->modelo;
		}

		int getAnio() {
			return this->anio;
		}

		Vehiculo(String^ Nro_placa, String^ marca, String^ modelo, int anio);
		Vehiculo();
		virtual String^ ToString() override {
			return "Placa: " + Nro_placa + "\r\n" +
				" Marca: " + marca + "\r\n" +
				" Modelo: " + modelo + "\r\n" +
				" Anio: " + anio.ToString() + "\r\n";
		}


		String^ GetNro_placa() { return Nro_placa; }
		String^ GetMarca() { return marca; }
		String^ GetModelo() { return modelo; }
		int GetAnio() { return anio; }

		void SetNro_placa(String^ Nro_placa) { this->Nro_placa = Nro_placa; }
		void SetMarca(String^ marca) { this->marca = marca; }
		void SetModelo(String^ modelo) { this->modelo = modelo; }
		void SetAnio(int anio) { this->anio = anio; }

		// TODO: Agregue aquí los métodos de esta clase.
	};

	public ref class Nodo {
	public:
		Vehiculo^ vehiculo;
		Nodo^ izquierda;
		Nodo^ derecha;

		Nodo(Vehiculo^ vehiculo);

		Nodo();

		Vehiculo^ GetVehiculo() { return vehiculo; }
		void SetVehiculo(Vehiculo^ vehiculo) { this->vehiculo = vehiculo; }
		Nodo^ GetIzquierda() { return izquierda; }
		void SetIzquierda(Nodo^ izquierda) { this->izquierda = izquierda; }
		Nodo^ GetDerecha() { return derecha; }
		void SetDerecha(Nodo^ derecha) { this->derecha = derecha; }


	};

	public ref class ArbolBinarioBusqueda {
	private:
		Nodo^ raiz;
		//property List<Vehiculo^>^ vehiculos;

		Nodo^ insertRecursivo(Nodo^ nodo, Vehiculo^ vehiculo);
		Nodo^ buscarRecursivo(Nodo^ nodo, String^ nro_placa);
		Nodo^ eliminarRecursivo(Nodo^ nodo, String^ nro_placa);
		void GuardarNodo(StreamWriter^ archivo, Nodo^ nodo);
		Nodo^ minValorNodo(Nodo^ nodo);
		void inOrdenRecursivo(Nodo^ nodo, List<Vehiculo^>^ vehiculos);

	public:
		ArbolBinarioBusqueda() { raiz = nullptr; }

		void insertV(Vehiculo^ vehiculo);
		Vehiculo^ buscarVehiculo(String^ nro_placa);
		void eliminarVehiculo(String^ nro_placa);
		System::Collections::Generic::List<Vehiculo^>^ listarVehiculos();

	};
}