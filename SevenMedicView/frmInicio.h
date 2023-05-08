#pragma once
#include "LoginPaciente.h"
#include "LoginSupervisor.h"
#include "LoginTrabajador.h"


namespace SevenMedicView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmInicio
	/// </summary>
	public ref class frmInicio : public System::Windows::Forms::Form
	{
	public:
		frmInicio(void)
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
		~frmInicio()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(124, 227);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(141, 69);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Supervisor";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmInicio::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(417, 227);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(141, 69);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Paciente";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmInicio::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(719, 227);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(141, 69);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Trabajador";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmInicio::button3_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Location = System::Drawing::Point(32, 36);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(972, 497);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Seleccion de Inicio de Sesion";
			// 
			// frmInicio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1051, 581);
			this->Controls->Add(this->groupBox1);
			this->IsMdiContainer = true;
			this->Name = L"frmInicio";
			this->Text = L"Inicio";
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	LoginSupervisor^ ventanaLoginSupervisor = gcnew LoginSupervisor();
	ventanaLoginSupervisor->ShowDialog();


	
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	LoginPaciente^ ventanaLoginPaciente = gcnew LoginPaciente();
	ventanaLoginPaciente->ShowDialog();


}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	LoginTrabajador^ ventanaLoginTrabajador = gcnew LoginTrabajador();
	ventanaLoginTrabajador->ShowDialog();

}

};
}