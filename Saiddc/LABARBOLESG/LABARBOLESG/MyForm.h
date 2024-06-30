#pragma once

namespace LABARBOLESG {

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
		PRODUCTOS::Pasteleria^ pasteleria;

		MyForm(void)
		{
			InitializeComponent();
			pasteleria = gcnew PRODUCTOS::Pasteleria();

			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
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
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;

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
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Malgun Gothic Semilight", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(187, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(124, 30);
			this->label1->TabIndex = 0;
			this->label1->Text = L"PASTELERÍA";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(13, 47);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(119, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"PRODUCTOS";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(16, 84);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(47, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Nombre:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(16, 120);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(66, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Descripción:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(212, 84);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(40, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Precio:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(212, 120);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(52, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Cantidad:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(12, 197);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(92, 20);
			this->label7->TabIndex = 6;
			this->label7->Text = L"RECETAS";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(13, 267);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(68, 13);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Ingredientes:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(12, 305);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(102, 13);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Tiempo de Cocción:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(236, 298);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(49, 13);
			this->label10->TabIndex = 9;
			this->label10->Text = L"Proceso:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(12, 338);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(85, 13);
			this->label11->TabIndex = 10;
			this->label11->Text = L"Tiempo de Prep:";
			this->label11->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(88, 77);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 11;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(88, 117);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 12;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(286, 77);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 13;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(286, 112);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 14;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(120, 260);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 15;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(120, 298);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 16;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(286, 291);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 17;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(121, 331);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 20);
			this->textBox8->TabIndex = 18;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(17, 153);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(93, 23);
			this->button1->TabIndex = 19;
			this->button1->Text = L"Agregar Prod";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_ClickAgregarProducto);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(345, 155);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 20;
			this->button2->Text = L"Buscar Prod";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_ClickBuscarProd);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(17, 365);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(93, 23);
			this->button3->TabIndex = 21;
			this->button3->Text = L"Agregar Receta";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_ClickAgregarReceta);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(345, 364);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(96, 23);
			this->button4->TabIndex = 22;
			this->button4->Text = L"Buscar Receta";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_ClickBuscarReceta);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(468, 399);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 23;
			this->button5->Text = L"Salir";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(436, 9);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(164, 342);
			this->listBox1->TabIndex = 24;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(239, 158);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 20);
			this->textBox9->TabIndex = 25;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(16, 235);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(47, 13);
			this->label12->TabIndex = 26;
			this->label12->Text = L"Nombre:";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(121, 235);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 20);
			this->textBox10->TabIndex = 27;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(239, 367);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(100, 20);
			this->textBox11->TabIndex = 28;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(627, 434);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_ClickAgregarProducto(System::Object^ sender, System::EventArgs^ e) {
	String^ nombre = textBox1->Text;
	String^ descripcion = textBox2->Text;
	double precio = Double::Parse(textBox3->Text);
	int cantidad = Int32::Parse(textBox4->Text);

	PRODUCTOS::Producto^ producto = gcnew PRODUCTOS::Producto(nombre, descripcion, precio, cantidad);
	pasteleria->agregarProducto(producto);
	MessageBox::Show("Producto agregado");
}
private: System::Void button2_ClickBuscarProd(System::Object^ sender, System::EventArgs^ e) {
	String^ nombreProducto = textBox9->Text; // Asume que textBox8 contiene el nombre del producto a buscar
	PRODUCTOS::Producto^ producto = pasteleria->buscarProducto(nombreProducto);

	if (producto != nullptr) {
		listBox1->Items->Clear();
		listBox1->Items->Add("Nombre: " + producto->nombre);
		listBox1->Items->Add("Descripción: " + producto->descripcion);
		listBox1->Items->Add("Precio: " + producto->precio);
		listBox1->Items->Add("Cantidad: " + producto->cantidad);

		for each (PRODUCTOS::Nodo ^ nodo in producto->hijos) {
			PRODUCTOS::Receta^ receta = dynamic_cast<PRODUCTOS::Receta^>(nodo);
			if (receta != nullptr) {
				listBox1->Items->Add("Receta: " + receta->nombre);
				listBox1->Items->Add("Ingredientes: " + String::Join(", ", receta->ingredientes));
				listBox1->Items->Add("Pasos: " + String::Join(", ", receta->pasos));
			}
		}
	}
	else {
		MessageBox::Show("Producto no encontrado");
	}
}
private: System::Void button3_ClickAgregarReceta(System::Object^ sender, System::EventArgs^ e) {
	String^ nombre = textBox10->Text;
	System::Collections::Generic::List<String^>^ ingredientes = gcnew System::Collections::Generic::List<String^>();
	ingredientes->Add(textBox5->Text); // Asume que textBox6 contiene los ingredientes separados por comas
	System::Collections::Generic::List<String^>^ pasos = gcnew System::Collections::Generic::List<String^>();
	pasos->Add(textBox7->Text); // Asume que textBox7 contiene los pasos separados por comas

	PRODUCTOS::Receta^ receta = gcnew PRODUCTOS::Receta(nombre, ingredientes, pasos);
	String^ nombreProducto = textBox1->Text; // Asume que textBox1 contiene el nombre del producto al que se agregará la receta
	pasteleria->agregarRecetaAProducto(nombreProducto, receta);

	MessageBox::Show("Receta agregada al producto");
}
private: System::Void button4_ClickBuscarReceta(System::Object^ sender, System::EventArgs^ e) {
	String^ nombreReceta = textBox11->Text; // Asume que textBox10 contiene el nombre de la receta a buscar
	PRODUCTOS::Receta^ receta = pasteleria->buscarReceta(nombreReceta);

	if (receta != nullptr) {
		listBox1->Items->Clear();
		listBox1->Items->Add("Nombre: " + receta->nombre);
		listBox1->Items->Add("Ingredientes: " + String::Join(", ", receta->ingredientes));
		listBox1->Items->Add("Pasos: " + String::Join(", ", receta->pasos));
	}
	else {
		MessageBox::Show("Receta no encontrada");
	}
}
};
}
