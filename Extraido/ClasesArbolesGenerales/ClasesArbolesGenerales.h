#pragma once


using namespace System;
using namespace System::Collections::Generic;

namespace ClasesArbolesGenerales {

    public ref class Nodo {
    public:
        property String^ Nombre;
         List<Nodo^>^ Hijos;

        Nodo(String^ nombre);

        void AgregarHijo(Nodo^ hijo);
        virtual void MostrarInfo(int nivel);
    };

    public ref class NodoPersona : public Nodo {
    public:
		property String^ Nombrep;
        property String^ Rol;
        property int Edad;
        property String^ Genero;

        NodoPersona(String^ nombrep, String^ rol, int edad, String^ genero);
        virtual void MostrarInfo(int nivel) override;
    };

    public ref class NodoArea : public Nodo {
    public:
        property String^ Descripcion;
        property String^ Responsable;

        NodoArea(String^ nombre, String^ descripcion, String^ responsable);
        virtual void MostrarInfo(int nivel) override;
    };

    public ref class Arbol {
    public:
       Nodo^ Raiz;

        Arbol(Nodo^ raiz);

        void AgregarNodo(Nodo^ padre, Nodo^ nuevoNodo);
        Nodo^ BuscarNodo(Nodo^ nodo, String^ nombre);
        void MostrarArbol();
    };
}


