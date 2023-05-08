#pragma once

namespace SevenMedicView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SevenMedicController;
	using namespace SevenMedicModel;

	/// <summary>
	/// Resumen de NuevoTrabajador
	/// </summary>
	public ref class NuevoTrabajador : public System::Windows::Forms::Form
	{
	public:
		NuevoTrabajador(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~NuevoTrabajador()
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
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;

	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;


	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

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
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(89, 62);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(49, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombres";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(89, 88);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Apellidos";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(89, 114);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(26, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"DNI";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(89, 140);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(32, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Email";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(89, 166);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(39, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Celular";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(89, 192);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(108, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Fecha de Nacimiento";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(89, 218);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(32, 13);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Edad";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(89, 244);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(42, 13);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Genero";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(89, 296);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(63, 13);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Contrasenia";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(89, 322);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(107, 13);
			this->label10->TabIndex = 9;
			this->label10->Text = L"Confirme Contrasenia";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(250, 59);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(177, 20);
			this->textBox1->TabIndex = 10;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(250, 85);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(177, 20);
			this->textBox2->TabIndex = 11;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(250, 111);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(177, 20);
			this->textBox3->TabIndex = 12;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(250, 137);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(177, 20);
			this->textBox4->TabIndex = 13;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(250, 163);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(177, 20);
			this->textBox5->TabIndex = 14;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(250, 189);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(177, 20);
			this->textBox6->TabIndex = 15;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(250, 215);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(177, 20);
			this->textBox7->TabIndex = 16;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(250, 293);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(177, 20);
			this->textBox9->TabIndex = 18;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(250, 319);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(177, 20);
			this->textBox10->TabIndex = 19;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(118, 406);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(139, 32);
			this->button1->TabIndex = 20;
			this->button1->Text = L"Aceptar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &NuevoTrabajador::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(322, 406);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(139, 32);
			this->button2->TabIndex = 21;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &NuevoTrabajador::button2_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(89, 270);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(29, 13);
			this->label11->TabIndex = 22;
			this->label11->Text = L"Area";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Medico", L"Almacen", L"Enfermero" });
			this->comboBox1->Location = System::Drawing::Point(250, 267);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(177, 21);
			this->comboBox1->TabIndex = 24;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"M", L"F" });
			this->comboBox2->Location = System::Drawing::Point(250, 241);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(177, 21);
			this->comboBox2->TabIndex = 25;
			// 
			// NuevoTrabajador
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(606, 555);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
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
			this->Name = L"NuevoTrabajador";
			this->Text = L"NuevoTrabajador";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion








	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		Trabajador^ objTrabajadorNuevo = nullptr;
		Usuario^ objUsuarioNuevo = nullptr;
		Usuario^ objUsuarioLoginNuevo = nullptr;

		UsuarioController^ objUsuarioController1 = gcnew UsuarioController();
		UsuarioController^ objUsuarioController2 = gcnew UsuarioController();
		UsuarioController^ objUsuarioController3 = gcnew UsuarioController();


		String^ NombresLeido = textBox1->Text;
		String^ ApellidosLeido= textBox2->Text;
		int DNILeido = Convert::ToInt32(textBox3->Text);
		String^ EmailLeido = textBox4->Text;
		int CelularLeido = Convert::ToInt32(textBox5->Text);
		String^ FechaNacimientoLeido = textBox6->Text;
		int EdadLeido = Convert::ToInt32(textBox7->Text);
		String^ GeneroLeido = comboBox2->Text;
		String^ PasswordLeido = textBox9->Text;
		String^ PasswordRepiteLeido = textBox10->Text;
		String^ AreaAsignada = comboBox1->Text;

		String^ IDcreado;

		if (AreaAsignada == "Medico") {

			IDcreado = textBox3->Text + "M";

		}
		else if (AreaAsignada == "Almacen") {

			IDcreado = textBox3->Text + "A";

		}
		else if (AreaAsignada == "Enfermero") {

			IDcreado = textBox3->Text + "E";
		}


		 

		if (PasswordLeido == PasswordRepiteLeido) {

			

			objUsuarioNuevo = gcnew Usuario(IDcreado, NombresLeido, ApellidosLeido, EmailLeido);
			objUsuarioController1->GrabarNuevoUsuario(objUsuarioNuevo);

			objUsuarioLoginNuevo = gcnew Usuario(IDcreado, PasswordLeido, NombresLeido, ApellidosLeido, EmailLeido);
			objUsuarioController2->GrabarNuevoUsuarioLogin(objUsuarioLoginNuevo);

			objTrabajadorNuevo = gcnew Trabajador(IDcreado, PasswordLeido, NombresLeido, ApellidosLeido, EmailLeido, CelularLeido, GeneroLeido, FechaNacimientoLeido, EdadLeido, DNILeido, AreaAsignada);

			objUsuarioController3->GrabarNuevoTrabajador(objTrabajadorNuevo);




		}
		else {

			MessageBox::Show("Las contrasenias no coinciden");



		}





		this->Close();







	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Close();
}
};
}
