#pragma once

using namespace System::Collections::Generic;
using namespace System;


namespace ClasesArbolesBinario {
	public ref class contacto
	{
	private:
		property String^ nombre;
		property String^ celular;
		property String^ telefono;
		property String^ direccion;
		property DateTime fechaN;
		property String^ Nota;	

		contacto^ izq;
		contacto^ der;
		List<contacto^>^ listaContactos;

	public:

		contacto();
		contacto(String^ _nombre, String^ _celular, String^ _telefono, String^ _direccion, DateTime _fechaN ,String ^_Nota);
		~contacto();
		//metodos get y set
		String^ getNombre() { return nombre; }
		String^ getCelular() { return celular; }
		String^ getTelefono() { return telefono; }
		String^ getDireccion() { return direccion; }	
		DateTime getFechaN() { return fechaN; }
		String^ getNota() { return Nota; }
		contacto^ getIzq() { return izq; }
		contacto^ getDer() { return der; }



		void setNombre(String^ _nombre) { nombre = _nombre; }
		void setCelular(String^ _celular) { celular = _celular; }
		void setTelefono(String^ _telefono) { telefono = _telefono; }
		void setDireccion(String^ _direccion) { direccion = _direccion; }
		void setFechaN(DateTime _fechaN) { fechaN = _fechaN; }
		void setIzq(contacto^ _izq) { izq = _izq; }
		void setDer(contacto^ _der) { der = _der; }
		void setNota(String^ _Nota) { Nota = _Nota; }

	};
	public ref class ArbolBinario
	{

	public:
		contacto^ raiz;

		ArbolBinario();

		~ArbolBinario();
		void agregar(contacto^ nuevo);
		contacto^ buscar(String^ nombre);
		void eliminar(String^ nombre);
		void editar(String^ nombre, String^ celular, String^ telefono, String^ direccion, DateTime fechaN, String^ Nota);
		void devolverFechaHoy(DateTime fechaN);

	    
	};
}
