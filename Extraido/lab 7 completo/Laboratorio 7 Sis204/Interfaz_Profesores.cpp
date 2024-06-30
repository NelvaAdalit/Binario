#include "Interfaz_Profesores.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Laboratorio7Sis204::Interfaz_Profesores form;
	Application::Run(% form);
}

