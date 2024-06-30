#include "pch.h"

#include "ClasesArbolesBinario.h"
ClasesArbolesBinario::contacto::contacto()
{
	nombre = "";
	celular = "";
	telefono = "";
	direccion = "";
	izq = nullptr;
	der = nullptr;
}
ClasesArbolesBinario::contacto::contacto(String^ _nombre, String^ _celular, String^ _telefono, String^ _direccion)
{
	nombre = _nombre;
	celular = _celular;
	telefono = _telefono;
	direccion = _direccion;
	izq = nullptr;
	der = nullptr;
}
ClasesArbolesBinario::contacto::~contacto()
{
}
ClasesArbolesBinario::ArbolBinario::ArbolBinario()
{
	raiz = nullptr;
}
ClasesArbolesBinario::ArbolBinario::~ArbolBinario()
{
}

void ClasesArbolesBinario::ArbolBinario::agregar(contacto^ nuevo)
{
	if (raiz == nullptr)
	{
		raiz = nuevo;
	}
	else
	{
		contacto^ aux = raiz;
		while (true)
		{
			if (String::Compare(nuevo->getNombre(), aux->getNombre()) < 0)
			{
				if (aux->getIzq() == nullptr)
				{
					aux->setIzq(nuevo);
					break;
				}
				else
				{
					aux = aux->getIzq();
				}
			}
			else
			{
				if (aux->getDer() == nullptr)
				{
					aux->setDer(nuevo);
					break;
				}
				else
				{
					aux = aux->getDer();
				}
			}
		}
	}
}
ClasesArbolesBinario::contacto^ ClasesArbolesBinario::ArbolBinario::buscar(String^ nombre)
{
	contacto^ aux = raiz;
	while (aux != nullptr)
	{
		if (String::Compare(nombre, aux->getNombre()) == 0)
		{
			return aux;
		}
		else if (String::Compare(nombre, aux->getNombre()) < 0)
		{
			aux = aux->getIzq();
		}
		else
		{
			aux = aux->getDer();
		}
	}
	return nullptr;
}


void ClasesArbolesBinario::ArbolBinario::eliminar(String^ nombre)
{
	contacto^ aux = raiz;
	contacto^ padre = nullptr;
	while (aux != nullptr)
	{
		if (String::Compare(nombre, aux->getNombre()) == 0)
		{
			if (aux->getIzq() == nullptr && aux->getDer() == nullptr)
			{
			
			}
			else if (aux->getIzq() != nullptr && aux->getDer() == nullptr)
			{
			}
			else if (aux->getIzq() == nullptr && aux->getDer() != nullptr)
			{
			}
			else
			{
				
				contacto^ aux2 = aux->getDer();
				contacto^ padre2 = aux;
				while (aux2->getIzq() != nullptr)
				{
					padre2 = aux2;
					aux2 = aux2->getIzq();
				}
				aux->setNombre(aux2->getNombre());
				aux->setCelular(aux2->getCelular());
				aux->setTelefono(aux2->getTelefono());
				aux->setDireccion(aux2->getDireccion());
				if (padre2->getIzq() == aux2)
				{
					padre2->setIzq(aux2->getDer());
				}
				else
				{
					padre2->setDer(aux2->getDer());
				}
			}
			break;
		}
		else if (String::Compare(nombre, aux->getNombre()) < 0)
		{
			padre = aux;
			aux = aux->getIzq();
		}
		else
		{
			padre = aux;
			aux = aux->getDer();
		}
	}
}

void ClasesArbolesBinario::ArbolBinario::editar(String^ nombre, String^ celular, String^ telefono, String^ direccion)
{
	contacto^ aux = raiz;
	while (aux != nullptr)
	{
		if (String::Compare(nombre, aux->getNombre()) == 0)
		{
			aux->setCelular(celular);
			aux->setTelefono(telefono);
			aux->setDireccion(direccion);
			break;
		}
		else if (String::Compare(nombre, aux->getNombre()) < 0)
		{
			aux = aux->getIzq();
		}
		else
		{
			aux = aux->getDer();
		}
	}
}
String^ ClasesArbolesBinario::ArbolBinario::mostrar()
{
	String^ mostrar = "";
	mostrar += "         ";
	mostrar += "---------------------------";

	return mostrar;
}
