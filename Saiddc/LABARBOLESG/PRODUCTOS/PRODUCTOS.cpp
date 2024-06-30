#include "pch.h"
#include "PRODUCTOS.h"

using namespace PRODUCTOS;

void Pasteleria::agregarProducto(Producto^ producto) {
    raiz->hijos->Add(producto);
}

Producto^ Pasteleria::buscarProducto(String^ nombre) {
    for each (Nodo ^ hijo in raiz->hijos) {
        if (hijo->nombre == nombre && dynamic_cast<Producto^>(hijo) != nullptr) {
            return dynamic_cast<Producto^>(hijo);
        }
    }
    return nullptr;
}

void Pasteleria::agregarRecetaAProducto(String^ nombreProducto, Receta^ receta) {
    Producto^ producto = buscarProducto(nombreProducto);
    if (producto != nullptr) {
        producto->hijos->Add(receta);
    }
}

Receta^ Pasteleria::buscarReceta(String^ nombre) {
    for each (Nodo ^ hijo in raiz->hijos) {
        if (dynamic_cast<Producto^>(hijo) != nullptr) {
            for each (Nodo ^ receta in hijo->hijos) {
                if (receta->nombre == nombre && dynamic_cast<Receta^>(receta) != nullptr) {
                    return dynamic_cast<Receta^>(receta);
                }
            }
        }
    }
    return nullptr;
}