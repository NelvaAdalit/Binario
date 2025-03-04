#pragma once

using namespace RegistroVehiculo;

namespace SIS204LAB8V {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();;
			arbol = gcnew RegistroVehiculo::ArbolBinarioBusqueda();

			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~MyForm()
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
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::ListBox^ listBox1;



	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		ArbolBinarioBusqueda^ arbol;
	private: System::Windows::Forms::Button^ button6;
		   System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(98, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(281, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"REGISTRO DE VEH�CULOS";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 81);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(124, 24);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nro. de Placa";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(272, 81);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 24);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Marca";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(12, 149);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(74, 24);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Modelo";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(272, 149);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(45, 24);
			this->label5->TabIndex = 4;
			this->label5->Text = L"A�o";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(143, 81);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(143, 149);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 6;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(341, 149);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 7;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(341, 81);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 8;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(48, 213);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Ver lista";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_ClickVer);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(168, 213);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Agregar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_ClickAgregar);
			// 
			// button3
			// 
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button3->Location = System::Drawing::Point(286, 213);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Buscar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_ClickBuscar);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(103, 261);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 12;
			this->button4->Text = L"Editar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_ClickEditar);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(224, 261);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 13;
			this->button5->Text = L"Eliminar";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_ClickEliminar);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(463, 12);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(311, 290);
			this->listBox1->TabIndex = 14;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(341, 261);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 15;
			this->button6->Text = L"Salir";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSteelBlue;
			this->ClientSize = System::Drawing::Size(786, 331);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void button2_ClickAgregar(System::Object^ sender, System::EventArgs^ e) {
		/*String^ placa = textBox1->Text;
		String^ marca = textBox4->Text;
		String^ modelo = textBox2->Text;
		String^ anio = textBox3->Text;
		String^ datos = placa + " " + marca + " " + modelo + " " + anio;
		listBox1->Items->Add(datos);*/
		String^ nro_placa = textBox1->Text;
		String^ marca = textBox4->Text;
		String^ modelo = textBox2->Text;
		int anio = Int32::Parse(textBox3->Text);

		RegistroVehiculo::Vehiculo^ vehiculo = gcnew RegistroVehiculo::Vehiculo(nro_placa, marca, modelo, anio);
		arbol->insertV(vehiculo);

		MessageBox::Show("Veh�culo agregado correctamente.");
	}
private: System::Void button1_ClickVer(System::Object^ sender, System::EventArgs^ e) {
	/*for each (String ^ item in listBox1->Items)
	{
		MessageBox::Show(item);
	}*/
	listBox1->Items->Clear();
	System::Collections::Generic::List<RegistroVehiculo::Vehiculo^>^ vehiculos = arbol->listarVehiculos();
	for each (RegistroVehiculo::Vehiculo ^ vehiculo in vehiculos) {
		listBox1->Items->Add(vehiculo->ToString());
	}
}
private: System::Void button3_ClickBuscar(System::Object^ sender, System::EventArgs^ e) {
	String^ placa = textBox1->Text;
	Vehiculo^ vehiculo = arbol->buscarVehiculo(placa); 

	if (vehiculo != nullptr) {
		textBox4->Text = vehiculo->getMarca(); 
		textBox2->Text = vehiculo->getModelo(); 
		textBox3->Text = vehiculo->getAnio().ToString(); 
	}
	else {
		textBox2->Text = "";
		textBox3->Text = "";
		textBox4->Text = "";
		MessageBox::Show("Veh�culo no encontrado");
	}
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_ClickEditar(System::Object^ sender, System::EventArgs^ e) {
	String^ placa = textBox1->Text;
	String^ marca = textBox4->Text;
	String^ modelo = textBox2->Text;
	int anio = Convert::ToInt32(textBox3->Text);

	
	if (String::IsNullOrEmpty(placa) || String::IsNullOrEmpty(marca) || String::IsNullOrEmpty(modelo)) {
		MessageBox::Show("Por favor, rellena todos los campos.");
		return;
	}

	
	if (arbol->buscarVehiculo(placa) == nullptr) {
		MessageBox::Show("El veh�culo con la placa proporcionada no existe.");
		return;
	}

	arbol->eliminarVehiculo(placa);
	Vehiculo^ vehiculo = gcnew Vehiculo(placa, marca, modelo, anio);
	arbol->insertV(vehiculo);
	MessageBox::Show("Veh�culo editado correctamente");
}
private: System::Void button5_ClickEliminar(System::Object^ sender, System::EventArgs^ e) {
	String^ placa = textBox1->Text;

	if (String::IsNullOrEmpty(placa)) {
		MessageBox::Show("Por favor, ingresa el n�mero de placa del veh�culo a eliminar.");
		return;
	}

	
	if (arbol->buscarVehiculo(placa) == nullptr) {
		MessageBox::Show("El veh�culo con la placa proporcionada no existe.");
		return;
	}

	arbol->eliminarVehiculo(placa);
	MessageBox::Show("Veh�culo eliminado correctamente");
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
};
}
//};
//}

