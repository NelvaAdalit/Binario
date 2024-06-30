#pragma once

using namespace Laboratorio7c;
using namespace std;

namespace Laboratorio7Sis204 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Interfaz_Profesores
	/// </summary>
	public ref class Interfaz_Profesores : public System::Windows::Forms::Form
	{
	public:
		ListaProfesores^ listaProfesores;
		Interfaz_Profesores(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Interfaz_Profesores()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::TextBox^ textBox6;

	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::TextBox^ DescripcionA;


	private: System::Windows::Forms::TextBox^ NombreA;

	private: System::Windows::Forms::TextBox^ IdentificadorA;

	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::Label^ label18;


	private: System::Windows::Forms::Button^ SiguienteA;

	private: System::Windows::Forms::Button^ AnteriorA;



	private: System::Windows::Forms::Button^ EliminarA;

	private: System::Windows::Forms::Button^ NuevoA;
	private: System::Windows::Forms::Button^ AgregarA;
	private: System::Windows::Forms::Button^ ActualizarA;



	private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
	private: System::Windows::Forms::ListBox^ listBox1;


	

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->DescripcionA = (gcnew System::Windows::Forms::TextBox());
			this->NombreA = (gcnew System::Windows::Forms::TextBox());
			this->IdentificadorA = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->SiguienteA = (gcnew System::Windows::Forms::Button());
			this->AnteriorA = (gcnew System::Windows::Forms::Button());
			this->EliminarA = (gcnew System::Windows::Forms::Button());
			this->NuevoA = (gcnew System::Windows::Forms::Button());
			this->AgregarA = (gcnew System::Windows::Forms::Button());
			this->ActualizarA = (gcnew System::Windows::Forms::Button());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(15, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(65, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Identificador";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(203, 23);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nombre";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(359, 23);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(49, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Apellidos";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(169, 138);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Actualiza";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Interfaz_Profesores::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(88, 138);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Agregar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Interfaz_Profesores::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(7, 138);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Nuevo";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Interfaz_Profesores::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(250, 138);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 7;
			this->button4->Text = L"Eliminar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Interfaz_Profesores::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(331, 138);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 8;
			this->button5->Text = L"Ir al primero";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Interfaz_Profesores::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(412, 138);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 9;
			this->button6->Text = L"anterior";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Interfaz_Profesores::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(493, 138);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 10;
			this->button7->Text = L"siguiente";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Interfaz_Profesores::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(574, 138);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 11;
			this->button8->Text = L"ir al ultimo";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Interfaz_Profesores::button8_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(86, 23);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 12;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(253, 23);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 13;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(414, 23);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 14;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(520, 23);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(32, 13);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Edad";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(15, 63);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(31, 13);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Sexo";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(203, 63);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(39, 13);
			this->label6->TabIndex = 17;
			this->label6->Text = L"Celular";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(359, 65);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(52, 13);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Direccion";
			this->label7->Click += gcnew System::EventHandler(this, &Interfaz_Profesores::label7_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(520, 65);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(75, 13);
			this->label8->TabIndex = 19;
			this->label8->Text = L"Fecha Ingreso";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(15, 102);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(58, 13);
			this->label9->TabIndex = 20;
			this->label9->Text = L"Cateogoria";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(203, 102);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(39, 13);
			this->label10->TabIndex = 21;
			this->label10->Text = L"Salario";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(359, 102);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(94, 13);
			this->label11->TabIndex = 22;
			this->label11->Text = L"Titulo Universitario";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(253, 60);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 23;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(152, 63);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(34, 17);
			this->radioButton1->TabIndex = 24;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"M";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Interfaz_Profesores::radioButton1_CheckedChanged);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(559, 22);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 20);
			this->numericUpDown1->TabIndex = 25;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(86, 63);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(31, 17);
			this->radioButton2->TabIndex = 26;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"F";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(414, 60);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 27;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(601, 63);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(99, 20);
			this->dateTimePicker1->TabIndex = 28;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(86, 99);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 29;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(459, 102);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 20);
			this->textBox8->TabIndex = 31;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(0, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(77, 13);
			this->label12->TabIndex = 32;
			this->label12->Text = L"Datos Profesor";
			this->label12->Click += gcnew System::EventHandler(this, &Interfaz_Profesores::label12_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(4, 176);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(62, 13);
			this->label13->TabIndex = 33;
			this->label13->Text = L"Asignaturas";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(12, 199);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(65, 13);
			this->label14->TabIndex = 34;
			this->label14->Text = L"Identificador";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(203, 199);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(44, 13);
			this->label15->TabIndex = 35;
			this->label15->Text = L"Nombre";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(359, 199);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(64, 13);
			this->label16->TabIndex = 36;
			this->label16->Text = L"descrripcion";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(535, 195);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(80, 13);
			this->label17->TabIndex = 37;
			this->label17->Text = L"Cantidad Horas";
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(625, 192);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(75, 20);
			this->numericUpDown2->TabIndex = 38;
			// 
			// DescripcionA
			// 
			this->DescripcionA->Location = System::Drawing::Point(429, 192);
			this->DescripcionA->Name = L"DescripcionA";
			this->DescripcionA->Size = System::Drawing::Size(100, 20);
			this->DescripcionA->TabIndex = 39;
			// 
			// NombreA
			// 
			this->NombreA->Location = System::Drawing::Point(253, 191);
			this->NombreA->Name = L"NombreA";
			this->NombreA->Size = System::Drawing::Size(100, 20);
			this->NombreA->TabIndex = 40;
			// 
			// IdentificadorA
			// 
			this->IdentificadorA->Location = System::Drawing::Point(86, 191);
			this->IdentificadorA->Name = L"IdentificadorA";
			this->IdentificadorA->Size = System::Drawing::Size(100, 20);
			this->IdentificadorA->TabIndex = 41;
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker2->Location = System::Drawing::Point(121, 230);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(99, 20);
			this->dateTimePicker2->TabIndex = 43;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(5, 230);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(110, 13);
			this->label18->TabIndex = 42;
			this->label18->Text = L"Fecha Impartida inicio";
			// 
			// SiguienteA
			// 
			this->SiguienteA->Location = System::Drawing::Point(417, 258);
			this->SiguienteA->Name = L"SiguienteA";
			this->SiguienteA->Size = System::Drawing::Size(75, 23);
			this->SiguienteA->TabIndex = 50;
			this->SiguienteA->Text = L"siguiente";
			this->SiguienteA->UseVisualStyleBackColor = true;
			this->SiguienteA->Click += gcnew System::EventHandler(this, &Interfaz_Profesores::SiguienteA_Click);
			// 
			// AnteriorA
			// 
			this->AnteriorA->Location = System::Drawing::Point(336, 258);
			this->AnteriorA->Name = L"AnteriorA";
			this->AnteriorA->Size = System::Drawing::Size(75, 23);
			this->AnteriorA->TabIndex = 49;
			this->AnteriorA->Text = L"anterior";
			this->AnteriorA->UseVisualStyleBackColor = true;
			this->AnteriorA->Click += gcnew System::EventHandler(this, &Interfaz_Profesores::AnteriorA_Click);
			// 
			// EliminarA
			// 
			this->EliminarA->Location = System::Drawing::Point(252, 258);
			this->EliminarA->Name = L"EliminarA";
			this->EliminarA->Size = System::Drawing::Size(75, 23);
			this->EliminarA->TabIndex = 47;
			this->EliminarA->Text = L"Eliminar";
			this->EliminarA->UseVisualStyleBackColor = true;
			this->EliminarA->Click += gcnew System::EventHandler(this, &Interfaz_Profesores::EliminarA_Click);
			// 
			// NuevoA
			// 
			this->NuevoA->Location = System::Drawing::Point(9, 258);
			this->NuevoA->Name = L"NuevoA";
			this->NuevoA->Size = System::Drawing::Size(75, 23);
			this->NuevoA->TabIndex = 46;
			this->NuevoA->Text = L"Nuevo";
			this->NuevoA->UseVisualStyleBackColor = true;
			this->NuevoA->Click += gcnew System::EventHandler(this, &Interfaz_Profesores::NuevoA_Click);
			// 
			// AgregarA
			// 
			this->AgregarA->Location = System::Drawing::Point(90, 258);
			this->AgregarA->Name = L"AgregarA";
			this->AgregarA->Size = System::Drawing::Size(75, 23);
			this->AgregarA->TabIndex = 45;
			this->AgregarA->Text = L"Agregar";
			this->AgregarA->UseVisualStyleBackColor = true;
			this->AgregarA->Click += gcnew System::EventHandler(this, &Interfaz_Profesores::AgregarA_Click);
			// 
			// ActualizarA
			// 
			this->ActualizarA->Location = System::Drawing::Point(171, 258);
			this->ActualizarA->Name = L"ActualizarA";
			this->ActualizarA->Size = System::Drawing::Size(75, 23);
			this->ActualizarA->TabIndex = 44;
			this->ActualizarA->Text = L"Actualiza";
			this->ActualizarA->UseVisualStyleBackColor = true;
			this->ActualizarA->Click += gcnew System::EventHandler(this, &Interfaz_Profesores::ActualizarA_Click);
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(253, 100);
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(97, 20);
			this->numericUpDown3->TabIndex = 52;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(9, 287);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(670, 212);
			this->listBox1->TabIndex = 53;
			// 
			// Interfaz_Profesores
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(712, 510);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->numericUpDown3);
			this->Controls->Add(this->SiguienteA);
			this->Controls->Add(this->AnteriorA);
			this->Controls->Add(this->EliminarA);
			this->Controls->Add(this->NuevoA);
			this->Controls->Add(this->AgregarA);
			this->Controls->Add(this->ActualizarA);
			this->Controls->Add(this->dateTimePicker2);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->IdentificadorA);
			this->Controls->Add(this->NombreA);
			this->Controls->Add(this->DescripcionA);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Interfaz_Profesores";
			this->Text = L"Interfaz_Profesores";
			this->Load += gcnew System::EventHandler(this, &Interfaz_Profesores::Interfaz_Profesores_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void Interfaz_Profesores_Load(System::Object^ sender, System::EventArgs^ e) {
			listaProfesores = gcnew ListaProfesores();
		}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}


private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   //boton 2: Agregar profesor
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
{
                // Obtener los valores de los campos de texto y otros controles
                String^ identificador = textBox1->Text;
                String^ nombre = textBox2->Text;
                String^ apellidos = textBox3->Text;
                int edad = (int)numericUpDown1->Value;
				String^ sexo;
				if (radioButton1->Checked) {
					sexo = "Masculino";
				}
				else if (radioButton2->Checked) {
					sexo = "Femenino";
				}
			
                String^ celular = textBox4->Text;
                String^ direccion = textBox8->Text;
                DateTime fechaIngreso = dateTimePicker1->Value;
                String^ categoria = textBox6->Text;
                double salario = (double)numericUpDown3->Value;
                String^ tituloUniversitario = textBox5->Text;

                //// Imprimir los valores en la consola o en el panel de salida
                //Console::WriteLine("Identificador: " + identificador);
                //Console::WriteLine("Nombre: " + nombre);
                //Console::WriteLine("Apellidos: " + apellidos);
                //// ... imprimir los demás valores

                // Llamar a la función insertarProfesor con los valores obtenidos
                listaProfesores->insertarProfesor(identificador, nombre, apellidos, edad, sexo, celular, direccion, fechaIngreso, categoria, salario, tituloUniversitario);
				MessageBox::Show("Profesor Insertado Correctamente");
				listBox1->Items->Add(identificador + " " + nombre + " " + apellidos);
				listBox1->Items->Add("Edad: " + edad);
				listBox1->Items->Add("Sexo: " + sexo);
				listBox1->Items->Add("Celular: " + celular);
				listBox1->Items->Add("Direccion: " + direccion);
				listBox1->Items->Add("Fecha Ingreso: " + fechaIngreso);
				listBox1->Items->Add("Categoria: " + categoria);
				listBox1->Items->Add("Salario: " + salario);
				listBox1->Items->Add("Titulo Universitario: " + tituloUniversitario);


}


	   // Botón 1: Actualizar profesor
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	String^ identificador = textBox1->Text;
	String^ nombre = textBox2->Text;
	String^ apellidos = textBox3->Text;
	int edad = (int)numericUpDown1->Value;
	String^ sexo;
	if (radioButton1->Checked) {
		sexo = "Masculino";
	}
	else if (radioButton2->Checked) {
		sexo = "Femenino";
	}
	else {
		MessageBox::Show("Por favor seleccione el sexo");
		return; // Sale de la función si no se ha seleccionado el sexo
	}
	String^ celular = textBox4->Text;
	String^ direccion = textBox8->Text;
	DateTime fechaIngreso = dateTimePicker1->Value;
	String^ categoria = textBox6->Text;
	double salario = (double)numericUpDown3->Value;
	String^ tituloUniversitario = textBox5->Text;

	if(listaProfesores->actualizarProfesor(identificador, nombre, apellidos, edad, sexo, celular, direccion, fechaIngreso, categoria, salario, tituloUniversitario))
	{
		MessageBox::Show("Profesor actualizado correctamente");
	}
	else {
		MessageBox::Show("Profesor no encontrado");
	}
	listBox1->Items->Add(identificador + " " + nombre + " " + apellidos);
	listBox1->Items->Add("Edad: " + edad);
	listBox1->Items->Add("Sexo: " + sexo);
	listBox1->Items->Add("Celular: " + celular);
	listBox1->Items->Add("Direccion: " + direccion);
	listBox1->Items->Add("Fecha Ingreso: " + fechaIngreso);
	listBox1->Items->Add("Categoria: " + categoria);
	listBox1->Items->Add("Salario: " + salario);
	listBox1->Items->Add("Titulo Universitario: " + tituloUniversitario);

}



       // Botón 5: Ir al primer profesor
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e)
{
	Profesor^ profesor = listaProfesores->primerProfesor();
	textBox1->Text = profesor->getidentificador_Profesor();
	textBox2->Text = profesor->getnombre_Profesor();
	textBox3->Text = profesor->getapellidos_Profesor();
	numericUpDown1->Value = profesor->getedad_Profesor();
	// Configurar los radio buttons basado en el valor de sexo
	if (profesor->getsexo_Profesor() == "Masculino") {
		radioButton1->Checked = true;
	}
	else if (profesor->getsexo_Profesor() == "Femenino") {
		radioButton2->Checked = true;
	}
	textBox4->Text = profesor->getcelular_Profesor();
	textBox8->Text = profesor->getdireccion_Profesor();
	dateTimePicker1->Value = profesor->getfechaIngreso_Profesor();
	textBox6->Text = profesor->getcategoria_Profesor();
	numericUpDown3->Value = (Decimal)profesor->getsalario_Profesor();
	textBox5->Text = profesor->gettituloUniversitario_Profesor();
}



	   // Botón 8: Ir al último profesor
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e)
{
	Profesor^ profesor = listaProfesores->ultimoProfesor();
	textBox1->Text = profesor->getidentificador_Profesor();
	textBox2->Text = profesor->getnombre_Profesor();
	textBox3->Text = profesor->getapellidos_Profesor();
	numericUpDown1->Value = profesor->getedad_Profesor();
	// Configurar los radio buttons basado en el valor de sexo
	if (profesor->getsexo_Profesor() == "Masculino") {
		radioButton1->Checked = true;
	}
	else if (profesor->getsexo_Profesor() == "Femenino") {
		radioButton2->Checked = true;
	}
	textBox4->Text = profesor->getcelular_Profesor();
	textBox8->Text = profesor->getdireccion_Profesor();
	dateTimePicker1->Value = profesor->getfechaIngreso_Profesor();
	textBox6->Text = profesor->getcategoria_Profesor();
	numericUpDown3->Value = (Decimal)profesor->getsalario_Profesor();
	textBox5->Text = profesor->gettituloUniversitario_Profesor();
}



	   // Botón 6: Ir al profesor anterior
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e)
{
	Profesor^ c = listaProfesores->profesorAnterior(textBox1->Text);
	if (c != nullptr)
	{
		textBox1->Text = c->getidentificador_Profesor();
		textBox2->Text = c->getnombre_Profesor();
		textBox3->Text = c->getapellidos_Profesor();
		numericUpDown1->Value = c->getedad_Profesor();
		// Configurar los radio buttons basado en el valor de sexo
		if (c->getsexo_Profesor() == "Masculino") {
			radioButton1->Checked = true;
		}
		else if (c->getsexo_Profesor() == "Femenino") {
			radioButton2->Checked = true;
		}
		textBox4->Text = c->getcelular_Profesor();
		textBox8->Text = c->getdireccion_Profesor();
		dateTimePicker1->Value = c->getfechaIngreso_Profesor();
		textBox6->Text = c->getcategoria_Profesor();
		numericUpDown3->Value = (Decimal)c->getsalario_Profesor();
		textBox5->Text = c->gettituloUniversitario_Profesor();
	}
	else
	{
		MessageBox::Show("No hay profesor anterior");
	}
}


	   // Botón 7: Ir al profesor siguiente
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e)
{
	Profesor^ c = listaProfesores->profesorSiguiente(textBox1->Text);
	if (c != nullptr)
	{
		textBox1->Text = c->getidentificador_Profesor();
		textBox2->Text = c->getnombre_Profesor();
		textBox3->Text = c->getapellidos_Profesor();
		numericUpDown1->Value = c->getedad_Profesor();
		// Configurar los radio buttons basado en el valor de sexo
		if (c->getsexo_Profesor() == "Masculino") {
			radioButton1->Checked = true;
		}
		else if (c->getsexo_Profesor() == "Femenino") {
			radioButton2->Checked = true;
		}
		textBox4->Text = c->getcelular_Profesor();
		textBox8->Text = c->getdireccion_Profesor();
		dateTimePicker1->Value = c->getfechaIngreso_Profesor();
		textBox6->Text = c->getcategoria_Profesor();
		numericUpDown3->Value = (Decimal)c->getsalario_Profesor();
		textBox5->Text = c->gettituloUniversitario_Profesor();
	}
	else {
		MessageBox::Show("No hay profesor siguiente");
	}
}


	   // Botón 4: Eliminar profesor
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (listaProfesores->eliminarProfesor(textBox1->Text))
	{
		MessageBox::Show("Profesor eliminado correctamente");
	}
	else {
		MessageBox::Show("Profesor no encontrado");
	}
}



	   // Botón 3: Limpiar campos
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	textBox1->Text = "";
	textBox2->Text = "";
	textBox3->Text = "";
	numericUpDown1->Value = 0;
	// Limpiar los radio buttons
	radioButton1->Checked = false;
	radioButton2->Checked = false;
	textBox4->Text = "";
	textBox8->Text = "";
	dateTimePicker1->Value = DateTime::Now;
	textBox6->Text = "";
	numericUpDown3->Value = 0;
	textBox5->Text = "";
}


private: System::Void SiguienteA_Click(System::Object^ sender, System::EventArgs^ e)
{
	Profesor^ profesor = listaProfesores->buscarProfesor(textBox1->Text);
	if (profesor != nullptr) {
		Asignatura^ asignatura = profesor->asignaturaSiguiente(textBox1->Text);
		if (asignatura != nullptr) {
			IdentificadorA->Text = asignatura->identificadorA;
			NombreA->Text = asignatura->nombreA;
			DescripcionA->Text = asignatura->descripcionA;
			numericUpDown2->Value = System::Convert::ToDecimal(asignatura->CantidadHoras); // Conversión a Decimal
			dateTimePicker2->Value = System::Convert::ToDateTime(asignatura->FechaImpartir); // Conversión a DateTime
		
		}
		else {
			MessageBox::Show("No hay asignatura siguiente");
		}
	}
	else {
		MessageBox::Show("Profesor no encontrado");
	}


}
private: System::Void AnteriorA_Click(System::Object^ sender, System::EventArgs^ e)
{
	Profesor^ profesor = listaProfesores->buscarProfesor(textBox1->Text);
	if (profesor != nullptr) {
		Asignatura^ asignatura = profesor->asignaturaAnterior(textBox1->Text);
		if (asignatura != nullptr) {
			IdentificadorA->Text = asignatura->identificadorA;
			NombreA->Text = asignatura->nombreA;
			DescripcionA->Text = asignatura->descripcionA;
			numericUpDown2->Value = System::Convert::ToDecimal(asignatura->CantidadHoras); // Conversión a Decimal
			dateTimePicker2->Value = System::Convert::ToDateTime(asignatura->FechaImpartir); // Conversión a DateTime
		
		}
		else {
			MessageBox::Show("No hay asignatura anterior");
		}
	}
	else {
		MessageBox::Show("Profesor no encontrado");
	}

}

private: System::Void EliminarA_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ identificadorA = IdentificadorA->Text;

	Profesor^ profesor = listaProfesores->buscarProfesor(textBox1->Text);
	if (profesor != nullptr) {
		if (profesor->eliminarAsignatura(identificadorA)) {
			MessageBox::Show("Asignatura eliminada correctamente");
		}
		else {
			MessageBox::Show("Asignatura no encontrada");
		}
	}
	else {
		MessageBox::Show("Profesor no encontrado");
	}
}



private: System::Void NuevoA_Click(System::Object^ sender, System::EventArgs^ e)
{
	IdentificadorA->Text = "";
	DescripcionA->Text = "";
	NombreA->Text = "";
	numericUpDown1->Value = 0;
	dateTimePicker2->Value = DateTime::Now;
	numericUpDown2->Value = 0;

}
private: System::Void AgregarA_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ identificadorA = IdentificadorA->Text;
	String^ nombreA = NombreA->Text;
	String^ descripcionA = DescripcionA->Text;
	int cantidadHoras = (int)numericUpDown2->Value;
	DateTime fechaImpartir = dateTimePicker2->Value;

	// Llamar a la función insertarAsignatura con los valores obtenidos
	Profesor^ profesor = listaProfesores->buscarProfesor(textBox1->Text); // Asume que textBox1 tiene el identificador del profesor
	if (profesor != nullptr) {
		profesor->insertarAsignatura(identificadorA, nombreA, descripcionA, cantidadHoras, fechaImpartir);
		MessageBox::Show("Asignatura insertada correctamente");
		listBox1->Items->Add("Asignaturas"+identificadorA + " " + nombreA + " " + descripcionA);
	}
	else {
		MessageBox::Show("Profesor no encontrado");
	}

}

private: System::Void ActualizarA_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ identificadorA = IdentificadorA->Text;
	String^ nombreA = NombreA->Text;
	String^ descripcionA = DescripcionA->Text;
	int cantidadHoras = (int)numericUpDown2->Value;
	DateTime fechaImpartir = dateTimePicker2->Value;

	Profesor^ profesor = listaProfesores->buscarProfesor(textBox1->Text);
	if (profesor != nullptr) {
		if (profesor->actualizarAsignatura(identificadorA, nombreA, descripcionA, cantidadHoras, fechaImpartir)) {
			MessageBox::Show("Asignatura actualizada correctamente");
			listBox1->Items->Add("Asignaturas" + identificadorA + " " + nombreA + " " + descripcionA);
		}
		else {
			MessageBox::Show("Asignatura no encontrada");
		}
	}
	else {
		MessageBox::Show("Profesor no encontrado");
	}


}


private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) 
{
}
};
}
