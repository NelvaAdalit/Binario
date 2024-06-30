#include "pch.h"

#include "Laboratorio 7 c++.h"

using namespace Laboratorio7c;


// Implementación de la clase Profesor
Profesor::Profesor() {
    identificador = " ";
    nombre = " ";
    apellidos = " ";
    edad = 0;
    sexo = " ";
    celular = " ";
    direccion = " ";
    fechaIngreso = DateTime::Now;
    categoria = " ";
    salario = 0.0;
    tituloUniversitario = " ";
    asignaturas = gcnew List<Asignatura^>();
}

Profesor::Profesor(String^ _identificador, String^ _nombre, String^ _apellidos, int _edad, String^ _sexo, String^ _celular, String^ _direccion, DateTime _fechaIngreso, String^ _categoria, double _salario, String^ _tituloUniversitario) {
    identificador = _identificador;
    nombre = _nombre;
    apellidos = _apellidos;
    edad = _edad;
    sexo = _sexo;
    celular = _celular;
    direccion = _direccion;
    fechaIngreso = _fechaIngreso;
    categoria = _categoria;
    salario = _salario;
    tituloUniversitario = _tituloUniversitario;
    asignaturas = gcnew List<Asignatura^>();
}

Profesor::~Profesor() {
    throw gcnew System::NotImplementedException();
}


// Implementación de la clase Asignatura

Asignatura::Asignatura() {

    identificadorA= " ";
    nombreA= " ";
    descripcionA= " ";
    CantidadHoras= 0 ;
    FechaImpartir= DateTime::Now;
}

Asignatura::Asignatura(String^ _identificadorA, String^ _nombreA, String^ _descripcionA, int^ _CantidadHoras, DateTime^ _FechaImpartir) {
    identificadorA = _identificadorA;
    nombreA = _nombreA;
    descripcionA = _descripcionA;
    CantidadHoras = _CantidadHoras;
    FechaImpartir = _FechaImpartir;
}

Asignatura::~Asignatura() {
    throw gcnew System::NotImplementedException();
}



// Implementación de la clase ListaProfesores

ListaProfesores::ListaProfesores() {

    listaProfesores = gcnew List<Profesor^>();
}

ListaProfesores::~ListaProfesores() {
	throw gcnew System::NotImplementedException();
}

void ListaProfesores::insertarProfesor(String^ _identificador, String^ _nombre, String^ _apellidos, int _edad, String^ _sexo, String^ _celular, String^ _direccion, DateTime _fechaIngreso, String^ _categoria, double _salario, String^ _tituloUniversitario) {
    Profesor^ nuevoProfesor = gcnew Profesor(_identificador, _nombre, _apellidos, _edad, _sexo, _celular, _direccion, _fechaIngreso, _categoria, _salario, _tituloUniversitario);
    listaProfesores -> Add(nuevoProfesor);
}

void ListaProfesores::mostrarProfesor()
{
    for each (Profesor ^ profesor in listaProfesores)
    {
        for each (Asignatura ^ asignatura in profesor->asignaturas)
        {
            Console::WriteLine("identificadorA: {0}", asignatura->identificadorA);
            Console::WriteLine("nombreA: {0}", asignatura->nombreA);
            Console::WriteLine("descripcionA: {0}", asignatura->descripcionA);
            Console::WriteLine("CantidadHoras: {0}", asignatura->CantidadHoras);
            Console::WriteLine("FechaImpartir: {0}", asignatura->FechaImpartir);
        }
        Console::WriteLine(); // Salto de línea
    }
}


Profesor^ Laboratorio7c:: ListaProfesores::primerProfesor() 
{
    Profesor^ b;
    b = listaProfesores[0];
    return b;

}

Profesor^ Laboratorio7c::ListaProfesores::ultimoProfesor()
{
	Profesor^ b;
    b= listaProfesores[listaProfesores->Count - 1];
    return b;

}


Profesor^ Laboratorio7c::ListaProfesores::profesorAnterior(String^ _identificador)
{
    Profesor^ profesorEspecifico = nullptr;
    for each (Profesor^ prof in listaProfesores)
	{
		if (prof->getidentificador_Profesor() == _identificador)
		{
			profesorEspecifico = prof;
            break;
		}
	
	}
    Profesor^ profesorAnterior = nullptr;
    if(profesorEspecifico!= nullptr && listaProfesores->IndexOf(profesorEspecifico)!=0)
	{
        int indice = listaProfesores->IndexOf(profesorEspecifico);
        profesorAnterior = listaProfesores[indice - 1];
    } 
    return profesorAnterior;

}

Profesor^ Laboratorio7c::ListaProfesores::profesorSiguiente(String^ _identificador)
{
	Profesor^ profesorEspecifico = nullptr;
	for each (Profesor^ prof in listaProfesores)
	{
		if (prof->getidentificador_Profesor() == _identificador)
		{
			profesorEspecifico = prof;
			break;
		}

	}
	Profesor^ profesorSiguiente = nullptr;
	if (profesorEspecifico != nullptr && listaProfesores->IndexOf(profesorEspecifico) != listaProfesores->Count-1)
	{
		int indice = listaProfesores->IndexOf(profesorEspecifico);
		profesorSiguiente = listaProfesores[indice + 1];
	}
	return profesorSiguiente;
}
Profesor^ Laboratorio7c::ListaProfesores::buscarProfesor(String^ _identificador) {
    for each (Profesor^ profesor in listaProfesores) {
        if (profesor->getidentificador_Profesor() == _identificador) {
            return profesor;
        }
    }
    return nullptr;
}


bool ListaProfesores::eliminarProfesor(String^ identificador) {
    Profesor^ profesorEspecifico = nullptr;
    for each (Profesor^ prof in listaProfesores)
	{
		if (prof->getidentificador_Profesor() == identificador)
		{
			profesorEspecifico = prof;
			break;
		}
	}
    if (profesorEspecifico != nullptr)
    {
		listaProfesores->Remove(profesorEspecifico);
		return true;
	}
    else
         return false;
}

bool ListaProfesores::actualizarProfesor(String^ identificador, String^ nombre, String^ apellidos, int edad, String^ sexo, String^ celular, String^ direccion, DateTime fechaIngreso, String^ categoria, double salario, String^ tituloUniversitario) {
	Profesor^ profesorEspecifico = nullptr;
	for each (Profesor^ prof in listaProfesores)
	{
		if (prof->getidentificador_Profesor() == identificador)
		{
			profesorEspecifico = prof;
			break;
		}
	}
	if (profesorEspecifico != nullptr)
	{
		profesorEspecifico->setnombre(nombre);
		profesorEspecifico->setapellidos(apellidos);
		profesorEspecifico->setedad(edad);
		profesorEspecifico->setsexo(sexo);
		profesorEspecifico->setcelular(celular);
		profesorEspecifico->setdireccion(direccion);
		profesorEspecifico->setfechaIngreso(fechaIngreso);
		profesorEspecifico->setcategoria(categoria);
		profesorEspecifico->setsalario(salario);
		profesorEspecifico->settituloUniversitario(tituloUniversitario);
		return true;
	}
	else
		return false;
}



//de asignaturas
void Profesor::insertarAsignatura(String^ _identificadorA, String^ _nombreA, String^ _descripcionA, int _CantidadHoras, DateTime _FechaImpartir) {
    Asignatura^ nuevaAsignatura = gcnew Asignatura(_identificadorA, _nombreA, _descripcionA, _CantidadHoras, _FechaImpartir);
    asignaturas->Add(nuevaAsignatura);
}

void Profesor::mostrarAsignaturas() {
    for each (Asignatura ^ asignatura in asignaturas) {
        Console::WriteLine("Identificador: {0}", asignatura->identificadorA);
        Console::WriteLine("Nombre: {0}", asignatura->nombreA);
        Console::WriteLine("Descripción: {0}", asignatura->descripcionA);
        Console::WriteLine("Cantidad de Horas: {0}", asignatura->CantidadHoras);
        Console::WriteLine("Fecha a Impartir: {0}", asignatura->FechaImpartir);
    }
}

Asignatura^ Profesor::primeraAsignatura() {
    if (asignaturas->Count > 0) {
        return asignaturas[0];
    }
    else {
        return nullptr;
    }
}

Asignatura^ Profesor::ultimaAsignatura() {
    if (asignaturas->Count > 0) {
        return asignaturas[asignaturas->Count - 1];
    }
    else {
        return nullptr;
    }
}

Asignatura^ Profesor::asignaturaAnterior(String^ _identificadorA) {
    Asignatura^ asignaturaEspecifica = nullptr;
    for (int i = 0; i < asignaturas->Count; i++) {
        if (asignaturas[i]->identificadorA == _identificadorA) {
            asignaturaEspecifica = asignaturas[i];
            if (i > 0) {
                return asignaturas[i - 1];
            }
            else {
                return nullptr;
            }
        }
    }
    return nullptr;
}

Asignatura^ Profesor::asignaturaSiguiente(String^ _identificadorA) {
    Asignatura^ asignaturaEspecifica = nullptr;
    for (int i = 0; i < asignaturas->Count; i++) {
        if (asignaturas[i]->identificadorA == _identificadorA) {
            asignaturaEspecifica = asignaturas[i];
            if (i < asignaturas->Count - 1) {
                return asignaturas[i + 1];
            }
            else {
                return nullptr;
            }
        }
    }
    return nullptr;
}

bool Profesor::eliminarAsignatura(String^ _identificadorA) {
    for (int i = 0; i < asignaturas->Count; i++) {
        if (asignaturas[i]->identificadorA == _identificadorA) {
            asignaturas->RemoveAt(i);
            return true;
        }
    }
    return false;
}

bool Profesor::actualizarAsignatura(String^ _identificadorA, String^ _nombreA, String^ _descripcionA, int _CantidadHoras, DateTime _FechaImpartir) {
    for (int i = 0; i < asignaturas->Count; i++) {
        if (asignaturas[i]->identificadorA == _identificadorA) {
            asignaturas[i]->nombreA = _nombreA;
            asignaturas[i]->descripcionA = _descripcionA;
            asignaturas[i]->CantidadHoras = _CantidadHoras;
            asignaturas[i]->FechaImpartir = _FechaImpartir;
            return true;
        }
    }
    return false;
}


