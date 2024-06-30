#pragma once

using namespace System;
using namespace System::Collections::Generic;

namespace PRODUCTOS {
    public ref class Nodo
    {
    public:
        String^ nombre;
        List<Nodo^>^ hijos;

        Nodo(String^ nombre) : nombre(nombre), hijos(gcnew List<Nodo^>()) {}
    };

    public ref class Receta : Nodo
    {
    public:
        List<String^>^ ingredientes;
        List<String^>^ pasos;

        Receta(String^ nombre, List<String^>^ ingredientes, List<String^>^ pasos)
            : Nodo(nombre), ingredientes(ingredientes), pasos(pasos) {}
    };

    public ref class Producto : Nodo
    {
    public:
        String^ descripcion;
        double precio;
        int cantidad;

        Producto(String^ nombre, String^ descripcion, double precio, int cantidad)
            : Nodo(nombre), descripcion(descripcion), precio(precio), cantidad(cantidad) {}
    };

    public ref class Pasteleria
    {
    public:
        Nodo^ raiz;

        Pasteleria() : raiz(gcnew Nodo("Pasteleria")) {}

        void agregarProducto(Producto^ producto);
        Producto^ buscarProducto(String^ nombre);
        void agregarRecetaAProducto(String^ nombreProducto, Receta^ receta);
        Receta^ buscarReceta(String^ nombre);

    };
}