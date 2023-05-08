#pragma once
#include "MenuAlmacen.h"
#include "MenuEnfermera.h"
#include "MenuMedico.h"


namespace SevenMedicView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SevenMedicController;
	using namespace SevenMedicModel;
	using namespace System::Collections::Generic;




	/// <summary>
	/// Resumen de LoginTrabajador
	/// </summary>
	public ref class LoginTrabajador : public System::Windows::Forms::Form
	{
	public:
		LoginTrabajador(void)
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
		~LoginTrabajador()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::GroupBox^ groupBox1;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(38, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ID Trabajador";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(38, 100);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(63, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Contrasenia";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(129, 164);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Acceder";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &LoginTrabajador::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(129, 42);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(168, 20);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(129, 97);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(168, 20);
			this->textBox2->TabIndex = 4;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(90, 48);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(319, 240);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Login";
			// 
			// LoginTrabajador
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(498, 344);
			this->Controls->Add(this->groupBox1);
			this->Name = L"LoginTrabajador";
			this->Text = L"LoginTrabajador";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		MenuAlmacen^ ventanaMenuAlmacen = gcnew MenuAlmacen();
		MenuEnfermera^ ventanaMenuEnfermera = gcnew MenuEnfermera();
		MenuMedico^ ventanaMenuMedico = gcnew MenuMedico();


		String^ IDLeido = textBox1->Text;
		String^ PasswordLeido = textBox2->Text;

		UsuarioController^ objUsuarioController = gcnew UsuarioController();

		Trabajador^ objTrabajadorEncontrado = nullptr;

		objTrabajadorEncontrado = objUsuarioController->BuscarTrabajadorXID(IDLeido);

		if (objTrabajadorEncontrado->Especialidad == "Medico") {

			ventanaMenuMedico->ShowDialog();

		}
		else if (objTrabajadorEncontrado->Especialidad == "Enfermero") {

			ventanaMenuEnfermera->ShowDialog();

		}
		else if (objTrabajadorEncontrado->Especialidad == "Almacen") {

			ventanaMenuAlmacen->ShowDialog();

		}
















	}
};
}
