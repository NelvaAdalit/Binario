#include "pch.h"

#include "ClasesArbolesGenerales.h"

ClasesArbolesGenerales::Nodo::Nodo(String^ nombre) {
	Nombre = nombre;
	Hijos = gcnew List<Nodo^>();
}


void ClasesArbolesGenerales::Nodo::AgregarHijo(Nodo^ hijo) {
	Hijos->Add(hijo);
}


void ClasesArbolesGenerales::Nodo::MostrarInfo(int nivel) {
	for (int i = 0; i < nivel; i++) {
		Console::Write("  ");
	}
	Console::WriteLine(Nombre);
	for each (Nodo ^ hijo in Hijos) {
		hijo->MostrarInfo(nivel + 1);
	}
}


ClasesArbolesGenerales::NodoPersona::NodoPersona(String^ nombrep, String^ rol, int edad, String^ genero) : Nodo(nombrep) {
	Nombrep = nombrep;
	Rol = rol;
	Edad = edad;
	Genero = genero;
}


void ClasesArbolesGenerales::NodoPersona::MostrarInfo(int nivel) {
	for (int i = 0; i < nivel; i++) {
		Console::Write("  ");
	}
	Console::WriteLine("{0} ({1}, {2})", Nombre, Rol, Edad);
	for each (Nodo ^ hijo in Hijos) {
		hijo->MostrarInfo(nivel + 1);
	}
}


ClasesArbolesGenerales::NodoArea::NodoArea(String^ nombre, String^ descripcion, String^ responsable) : Nodo(nombre) {
	Descripcion = descripcion;
	Responsable = responsable;
}


void ClasesArbolesGenerales::NodoArea::MostrarInfo(int nivel) {
	for (int i = 0; i < nivel; i++) {
		Console::Write("  ");
	}
	Console::WriteLine("{0} ({1}, {2})", Nombre, Descripcion, Responsable);
	for each (Nodo ^ hijo in Hijos) {
		hijo->MostrarInfo(nivel + 1);
	}
}


ClasesArbolesGenerales::Arbol::Arbol(Nodo^ raiz) {
	Raiz = raiz;
}


void ClasesArbolesGenerales::Arbol::AgregarNodo(Nodo^ padre, Nodo^ nuevoNodo) {
	padre->AgregarHijo(nuevoNodo);
}


ClasesArbolesGenerales::Nodo^ ClasesArbolesGenerales::Arbol::BuscarNodo(Nodo^ nodo, String^ nombre) {
	if (nodo->Nombre == nombre) {
		return nodo;
	}
	for each (Nodo ^ hijo in nodo->Hijos) {
		Nodo^ nodoBuscado = BuscarNodo(hijo, nombre);
		if (nodoBuscado != nullptr) {
			return nodoBuscado;
		}
	}
	return nullptr;
}


void ClasesArbolesGenerales::Arbol::MostrarArbol() {
	Raiz->MostrarInfo(0);
}





