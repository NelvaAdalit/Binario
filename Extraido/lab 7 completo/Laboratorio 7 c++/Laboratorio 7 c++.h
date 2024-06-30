#pragma once

using namespace std;
using namespace System;
using namespace System::Collections::Generic;

namespace Laboratorio7c {

    // Clase Asignatura
    public ref class Asignatura 
    {
    public:
        property String^ identificadorA;
        property String^ nombreA;
        property String^ descripcionA;
        property int^ CantidadHoras;
        property DateTime^ FechaImpartir;

        Asignatura();
        Asignatura(String^ _identificadorA, String^ _nombreA, String^ _descripcionA, int^ _CantidadHoras, DateTime^ _FechaImpartir);
        ~Asignatura();
    
    };

    // Clase Profesor
    public ref class Profesor {
    private:
        property String^ identificador;
        property String^ nombre;
        property String^ apellidos;
        property int edad;
        property String^ sexo;
        property String^ celular;
        property String^ direccion;
        property DateTime fechaIngreso;
        property String^ categoria;
        property double salario;
        property String^ tituloUniversitario;

    public:
        List<Asignatura^>^ asignaturas;
        Profesor();
        Profesor(String^ _identificador, String^ _nombre, String^ _apellidos, int _edad, String^ _sexo, String^ _celular, String^ _direccion, DateTime _fechaIngreso, String^ _categoria, double _salario, String^ _tituloUniversitario);
        ~Profesor();

        //metodos accesores get y set
        String^ getidentificador_Profesor() { return identificador; }
        String^ getnombre_Profesor() { return nombre; }
        String^ getapellidos_Profesor() { return apellidos; }
        int getedad_Profesor() { return edad; }
        String^ getsexo_Profesor() { return sexo; }
        String^ getcelular_Profesor() { return celular; }
        String^ getdireccion_Profesor() { return direccion; }
        DateTime getfechaIngreso_Profesor() { return fechaIngreso; }
        String^ getcategoria_Profesor() { return categoria; }
        double getsalario_Profesor() { return salario; }
        String^ gettituloUniversitario_Profesor() { return tituloUniversitario; }


        void setidentificador(String^ _identificador) {identificador = _identificador; }
        void setnombre(String^ _nombre) { nombre = _nombre; }
        void setapellidos(String^ _apellidos) { apellidos = _apellidos; }
        void setedad(int _edad) { edad = _edad; }
        void setsexo(String^ _sexo) { sexo = _sexo; }
        void setcelular(String^ _celular) { celular = _celular; }
        void setdireccion(String^ _direccion) { direccion = _direccion; }
        void setfechaIngreso(DateTime _fechaIngreso) { fechaIngreso = _fechaIngreso; }
        void setcategoria(String^ _categoria) { categoria = _categoria; }
        void setsalario(double _salario) { salario = _salario; }
        void settituloUniversitario(String^ _tituloUniversitario) { tituloUniversitario = _tituloUniversitario; }

        //metodos de asignaturas

        void insertarAsignatura(String^ _identificadorA, String^ _nombreA, String^ _descripcionA, int _CantidadHoras, DateTime _FechaImpartir);
        void mostrarAsignaturas();
        Asignatura^ primeraAsignatura();
        Asignatura^ ultimaAsignatura();
        Asignatura^ asignaturaAnterior(String^ _identificadorA);
        Asignatura^ asignaturaSiguiente(String^ _identificadorA);
        bool eliminarAsignatura(String^ _identificadorA);
        bool actualizarAsignatura(String^ _identificadorA, String^ _nombreA, String^ _descripcionA, int _CantidadHoras, DateTime _FechaImpartir);
    };


    // Clase ListaProfesores
    public ref class ListaProfesores {
    public:
        List<Profesor^>^ listaProfesores;
   
        ListaProfesores();
        ~ListaProfesores();
        void insertarProfesor(String^ _identificador, String^ _nombre, String^ _apellidos, int _edad, String^ _sexo, String^ _celular, String^ _direccion, DateTime _fechaIngreso, String^ _categoria, double _salario, String^ _tituloUniversitario);
        void mostrarProfesor();
        Profesor^ primerProfesor();
        Profesor^ ultimoProfesor();
        Profesor^ profesorAnterior(String^ _identificador);
        Profesor^ profesorSiguiente(String^ _identificador);
        bool eliminarProfesor(String^ _identificador);
        bool actualizarProfesor(String^ _identificador, String^ _nombre, String^ _apellidos, int _edad, String^ _sexo, String^ _celular, String^ _direccion, DateTime _fechaIngreso, String^ _categoria, double _salario, String^ _tituloUniversitario);
        Profesor^ buscarProfesor(String^ _identificador);
        //de asignaturas
        
    };

}
