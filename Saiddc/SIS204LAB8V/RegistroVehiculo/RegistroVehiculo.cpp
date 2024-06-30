#include "pch.h"
#include <cliext/vector>

#include "RegistroVehiculo.h"

RegistroVehiculo::Nodo::Nodo(Vehiculo^ vehiculo)
{
	this->vehiculo = vehiculo;
	this->izquierda = nullptr;
	this->derecha = nullptr;
}

RegistroVehiculo::Nodo::Nodo()
{
	throw gcnew System::NotImplementedException();
}

RegistroVehiculo::Vehiculo::Vehiculo(String^ Nro_placa, String^ marca, String^ modelo, int anio)
{
	this->Nro_placa = Nro_placa;
	this->marca = marca;
	this->modelo = modelo;
	this->anio = anio;
}

RegistroVehiculo::Vehiculo::Vehiculo()
{
	this->Nro_placa = "";
	this->marca = "";
	this->modelo = "";
	this->anio = 0;
}

RegistroVehiculo::Nodo^ RegistroVehiculo::ArbolBinarioBusqueda::insertRecursivo(Nodo^ nodo, Vehiculo^ vehiculo)
{
	if (nodo == nullptr) {
		return gcnew Nodo(vehiculo);
	}
	if (String::Compare(vehiculo->Nro_placa, nodo->vehiculo->Nro_placa) < 0) {
		nodo->izquierda = insertRecursivo(nodo->izquierda, vehiculo);
	}
	else {
		nodo->derecha = insertRecursivo(nodo->derecha, vehiculo);
	}
	return nodo;

	Console::WriteLine("Vehículo insertado: " + vehiculo->ToString());
	
}

RegistroVehiculo::Nodo^ RegistroVehiculo::ArbolBinarioBusqueda::buscarRecursivo(Nodo^ nodo, String^ nro_placa)
{

	if (nodo == nullptr || nodo->vehiculo->Nro_placa == nro_placa) {
		return nodo;
	}
	if (String::Compare(nro_placa, nodo->vehiculo->Nro_placa) < 0) {
		return buscarRecursivo(nodo->izquierda, nro_placa);
	}
	else {
		return buscarRecursivo(nodo->derecha, nro_placa);
	}
	
}

RegistroVehiculo::Nodo^ RegistroVehiculo::ArbolBinarioBusqueda::eliminarRecursivo(Nodo^ nodo, String^ nro_placa)
{

	if (nodo == nullptr) return nodo;

	if (String::Compare(nro_placa, nodo->vehiculo->Nro_placa) < 0) {
		nodo->izquierda = eliminarRecursivo(nodo->izquierda, nro_placa);
	}
	else if (String::Compare(nro_placa, nodo->vehiculo->Nro_placa) > 0) {
		nodo->derecha = eliminarRecursivo(nodo->derecha, nro_placa);
	}
	else {
		if (nodo->izquierda == nullptr) {
			return nodo->derecha;
		}
		else if (nodo->derecha == nullptr) {
			return nodo->izquierda;
		}

		Nodo^ temp = minValorNodo(nodo->derecha);
		nodo->vehiculo = temp->vehiculo;
		nodo->derecha = eliminarRecursivo(nodo->derecha, temp->vehiculo->Nro_placa);
	}
	return nodo;
	
}

void RegistroVehiculo::ArbolBinarioBusqueda::GuardarNodo(StreamWriter^ archivo, Nodo^ nodo)
{
	if (nodo != nullptr) {
		archivo->WriteLine(nodo->vehiculo->Nro_placa + "," + nodo->vehiculo->marca + "," + nodo->vehiculo->modelo + "," + nodo->vehiculo->anio);
		GuardarNodo(archivo, nodo->izquierda);
		GuardarNodo(archivo, nodo->derecha);
	}
	//throw gcnew System::NotImplementedException();
}

RegistroVehiculo::Nodo^ RegistroVehiculo::ArbolBinarioBusqueda::minValorNodo(Nodo^ nodo)
{
	Nodo^ actual = nodo;
	while (actual->izquierda != nullptr) {
		actual = actual->izquierda;
	}
	return actual;
	
}

void RegistroVehiculo::ArbolBinarioBusqueda::inOrdenRecursivo(Nodo^ nodo, List<Vehiculo^>^ vehiculos)
{
	if (nodo != nullptr) {
		inOrdenRecursivo(nodo->izquierda, vehiculos);
		vehiculos->Add(nodo->vehiculo);
		inOrdenRecursivo(nodo->derecha, vehiculos);
	}
}

void RegistroVehiculo::ArbolBinarioBusqueda::insertV(Vehiculo^ vehiculo)
{
	raiz = insertRecursivo(raiz, vehiculo);
}

RegistroVehiculo::Vehiculo^ RegistroVehiculo::ArbolBinarioBusqueda::buscarVehiculo(String^ nro_placa)
{

	Nodo^ resultado = buscarRecursivo(raiz, nro_placa);
	return resultado == nullptr ? nullptr : resultado->vehiculo;

}

void RegistroVehiculo::ArbolBinarioBusqueda::eliminarVehiculo(String^ nro_placa)
{
	raiz = eliminarRecursivo(raiz, nro_placa);
}

System::Collections::Generic::List<RegistroVehiculo::Vehiculo^>^ RegistroVehiculo::ArbolBinarioBusqueda::listarVehiculos()
{
	System::Collections::Generic::List<Vehiculo^>^ vehiculos = gcnew System::Collections::Generic::List<Vehiculo^>();
	inOrdenRecursivo(raiz, vehiculos);
	return vehiculos;
	
}




