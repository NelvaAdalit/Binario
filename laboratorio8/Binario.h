#pragma once

using namespace System::Collections::Generic;
using namespace ClasesArbolesBinario;
using namespace std;
namespace laboratorio8 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Binario
	/// </summary>
	public ref class Binario : public System::Windows::Forms::Form
	{
	public:
		ArbolBinario^ arbol;
		Binario(void)
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
		
		~Binario()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label6;

	private:

	private: System::Windows::Forms::Label^ Text;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ btnMostrarContactosHoy;



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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->Text = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->btnMostrarContactosHoy = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->panel1->Controls->Add(this->btnMostrarContactosHoy);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->dateTimePicker1);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->groupBox1);
			this->panel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel1->Location = System::Drawing::Point(328, 34);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(356, 362);
			this->panel1->TabIndex = 12;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Binario::panel1_Paint);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(22, 223);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(77, 13);
			this->label6->TabIndex = 9;
			this->label6->Text = L"FNacimiento";
			this->label6->Click += gcnew System::EventHandler(this, &Binario::label6_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(135, 217);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 19);
			this->dateTimePicker1->TabIndex = 11;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &Binario::dateTimePicker1_ValueChanged);
			// 
			// button5
			// 
			this->button5->ForeColor = System::Drawing::SystemColors::Highlight;
			this->button5->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->button5->Location = System::Drawing::Point(196, 284);
			this->button5->Margin = System::Windows::Forms::Padding(2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(56, 19);
			this->button5->TabIndex = 10;
			this->button5->Text = L"Nuevo";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Binario::button5_Click);
			// 
			// button4
			// 
			this->button4->ForeColor = System::Drawing::SystemColors::Highlight;
			this->button4->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->button4->Location = System::Drawing::Point(256, 272);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(69, 19);
			this->button4->TabIndex = 9;
			this->button4->Text = L"Eliminar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Binario::button4_Click);
			// 
			// button3
			// 
			this->button3->ForeColor = System::Drawing::SystemColors::Highlight;
			this->button3->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->button3->Location = System::Drawing::Point(74, 284);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(56, 19);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Editar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Binario::button3_Click);
			// 
			// button2
			// 
			this->button2->ForeColor = System::Drawing::SystemColors::Highlight;
			this->button2->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->button2->Location = System::Drawing::Point(135, 263);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(56, 19);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Buscar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Binario::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::Highlight;
			this->button1->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->button1->Location = System::Drawing::Point(14, 272);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(56, 20);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Agregar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Binario::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->Text);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::SystemColors::Highlight;
			this->groupBox1->Location = System::Drawing::Point(2, 2);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2);
			this->groupBox1->Size = System::Drawing::Size(354, 257);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"AGENDA DE CONTACTOS";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &Binario::groupBox1_Enter);
			// 
			// Text
			// 
			this->Text->AutoSize = true;
			this->Text->Location = System::Drawing::Point(26, 176);
			this->Text->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Text->Name = L"Text";
			this->Text->Size = System::Drawing::Size(43, 19);
			this->Text->TabIndex = 9;
			this->Text->Text = L"Nota";
			this->Text->Click += gcnew System::EventHandler(this, &Binario::Nota_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(168, 136);
			this->textBox4->Margin = System::Windows::Forms::Padding(2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(105, 27);
			this->textBox4->TabIndex = 8;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &Binario::textBox4_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(168, 98);
			this->textBox3->Margin = System::Windows::Forms::Padding(2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(105, 27);
			this->textBox3->TabIndex = 7;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(168, 60);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(105, 27);
			this->textBox2->TabIndex = 6;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(168, 29);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(95, 27);
			this->textBox1->TabIndex = 5;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Binario::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(20, 28);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 19);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nombre";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(20, 136);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(71, 19);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Direccion";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(20, 67);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(116, 19);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Numero Celular";
			this->label3->Click += gcnew System::EventHandler(this, &Binario::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(20, 101);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(127, 19);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Numero Telefono";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Script MT Bold", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label1->Location = System::Drawing::Point(128, 9);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(442, 23);
			this->label1->TabIndex = 11;
			this->label1->Text = L"ARBOLES BINARIOS AGENDA DE CONTACTOS ";
			this->label1->Click += gcnew System::EventHandler(this, &Binario::label1_Click);
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(26, 46);
			this->listBox1->Margin = System::Windows::Forms::Padding(2);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(196, 303);
			this->listBox1->TabIndex = 14;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(163, 168);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 27);
			this->textBox5->TabIndex = 10;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &Binario::textBox5_TextChanged_1);
			// 
			// btnMostrarContactosHoy
			// 
			this->btnMostrarContactosHoy->Location = System::Drawing::Point(57, 320);
			this->btnMostrarContactosHoy->Name = L"btnMostrarContactosHoy";
			this->btnMostrarContactosHoy->Size = System::Drawing::Size(185, 23);
			this->btnMostrarContactosHoy->TabIndex = 12;
			this->btnMostrarContactosHoy->Text = L"Mostrar De Hoy ";
			this->btnMostrarContactosHoy->UseVisualStyleBackColor = true;
			/*this->btnMostrarContactosHoy->Click += gcnew System::EventHandler(this, &Binario::btnMostrarContactosHoy_Click);*/
			// 
			// Binario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkKhaki;
			this->ClientSize = System::Drawing::Size(716, 389);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Binario";
			this->Load += gcnew System::EventHandler(this, &Binario::Binario_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Binario_Load(System::Object^ sender, System::EventArgs^ e) {
		//inicio del programa
		arbol = gcnew ArbolBinario();
	}
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
            
        String^ nombre = textBox1->Text;
        String^ celular = textBox2->Text;
        String^ telefono = textBox3->Text;
        String^ direccion = textBox4->Text;
		DateTime fechaN = dateTimePicker1->Value;
		String^ Nota = textBox5->Text;

        contacto^ c = gcnew contacto(nombre, celular, telefono, direccion,fechaN,Nota);
		arbol->agregar(c);

        // Agregar el contacto a la lista en el panel
		listBox1->Items->Add( nombre);
		listBox1->Items->Add( celular);
		listBox1->Items->Add( telefono);
		listBox1->Items->Add( direccion);
		listBox1->Items->Add( fechaN.ToString());
		listBox1->Items->Add( Nota);
		listBox1->Items->Add("");
    }

private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ nombre = textBox1->Text;
    contacto^ c = arbol->buscar(nombre);
    if (c != nullptr) {
        arbol->eliminar(nombre);
        listBox1->Items->Remove(nombre + ", " + c->getCelular() + "," + c->getTelefono() + "," + c->getDireccion());
    }
}




private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	// editar contacto
	String^ nombre = textBox1->Text;
	String^ celular = textBox2->Text;
	String^ telefono = textBox3->Text;
	String^ direccion = textBox4->Text;
	DateTime fechaN = dateTimePicker1->Value;
	String^ Nota = textBox5->Text;

	contacto^ c = arbol->buscar(nombre);
	if (c != nullptr) {
		c->setCelular(celular);
		c->setTelefono(telefono);
		c->setDireccion(direccion);
		c->setFechaN(fechaN);
		c->setNota(Nota);
	}

	// Actualizar la lista de contactos en el panel
	String^ contacto = nombre + ", " + celular + "," + telefono + "," + direccion + " , " + fechaN + " , " + Nota;
	for (int i = 0; i < listBox1->Items->Count; i++) {
		if (listBox1->Items[i]->ToString()->StartsWith(nombre + ",")) {
			listBox1->Items[i] = contacto;
			break;
		}
	}

}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ nombre = textBox1->Text;
	contacto^ c = arbol->buscar(nombre);
	if (c != nullptr) {
		textBox2->Text = c->getCelular();
		textBox3->Text = c->getTelefono();
		textBox4->Text = c->getDireccion();
		dateTimePicker1->Value = c->getFechaN();
		textBox5->Text = c->getNota();
	}

}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	//nuevo 
	textBox1->Text = "";
	textBox2->Text = "";
	textBox3->Text = "";
	textBox4->Text = "";
	dateTimePicker1->Value = DateTime::Now;
	textBox5->Text = "";


}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Nota_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox5_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}

//private: System::Void btnMostrarContactosHoy_Click(System::Object^ sender, System::EventArgs^ e) {
//	List<ClasesArbolesBinario::contacto^>^ contactosHoy = arbol->devolverContactosConFechaHoy();
//
//	// Limpia la lista o el control donde quieras mostrar los contactos.
//	listBox1->Items->Clear();
//
//	// Itera sobre la lista de contactos y hace algo con cada contacto.
//	for each (ClasesArbolesBinario::contacto ^ contacto in contactosHoy) {
//		// Aquí puedes acceder a los datos del contacto y hacer lo que necesites.
//		// Por ejemplo, agregar el nombre del contacto a un ListBox:
//		listBoxContactosHoy->Items->Add(contacto->getNombre());
//	}
//}
};
}
