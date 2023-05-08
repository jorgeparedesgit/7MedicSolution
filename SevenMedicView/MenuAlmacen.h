#pragma once
#include "NuevoEquipoMedico.h"

namespace SevenMedicView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SevenMedicController;
	using namespace System::Collections::Generic;
	using namespace SevenMedicModel;

	/// <summary>
	/// Resumen de MenuAlmacen
	/// </summary>
	public ref class MenuAlmacen : public System::Windows::Forms::Form
	{
	public:
		MenuAlmacen(void)
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
		~MenuAlmacen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;






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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(502, 89);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MenuAlmacen::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(132, 379);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"A�adir";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MenuAlmacen::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5
			});
			this->dataGridView1->Location = System::Drawing::Point(73, 138);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(542, 197);
			this->dataGridView1->TabIndex = 3;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(291, 379);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(98, 23);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Llenar Carrito";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(223, 91);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(245, 20);
			this->textBox1->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(70, 91);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(101, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Buscar por Nombre:";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(471, 379);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(144, 23);
			this->button4->TabIndex = 7;
			this->button4->Text = L"Solicitar Llenado de Stock";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"ID";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Nombre";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Cantidad";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Fecha de Vencimiento";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Esta Vencido";
			this->Column5->Name = L"Column5";
			// 
			// MenuAlmacen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(736, 454);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MenuAlmacen";
			this->Text = L"MenuAlmacen";
			this->Load += gcnew System::EventHandler(this, &MenuAlmacen::MenuAlmacen_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ nombreEquipoMedico = this->textBox1->Text;
		AlmacenController^ objAlmacenController = gcnew AlmacenController();
		
		List<EquipoMedico^>^ ListaEquipoMedicoEncontrado = objAlmacenController->BuscarEquipoMedicoXNombre(nombreEquipoMedico);

		mostrarGrilla(ListaEquipoMedicoEncontrado);
	}
	
	private: void mostrarGrilla(List<EquipoMedico^>^ ListaEquipoMedicoEncontrado) {

		this->dataGridView1->Rows->Clear();

		for (int i = 0; i < ListaEquipoMedicoEncontrado->Count; i++) { 

			EquipoMedico^ objEquipoMedico = ListaEquipoMedicoEncontrado[i];
			array<String^>^ fila = gcnew array<String^>(5);
			fila[0] = Convert::ToString(objEquipoMedico->ID);
			fila[1] = objEquipoMedico->Nombre;
			fila[2] = Convert::ToString(objEquipoMedico->Cantidad);
			fila[3] = objEquipoMedico->FechaVencimiento;
			fila[4] = Convert::ToString(objEquipoMedico->EstaVencido);

			this->dataGridView1->Rows->Add(fila);
		}
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	NuevoEquipoMedico^ ventanaNuevoEquipoMedico = gcnew NuevoEquipoMedico();

	ventanaNuevoEquipoMedico->ShowDialog();



}
private: System::Void MenuAlmacen_Load(System::Object^ sender, System::EventArgs^ e) {


	AlmacenController^ objAlmacenController = gcnew AlmacenController();

	List<EquipoMedico^>^ ListaEquipoMedicoEncontrado = objAlmacenController->BuscarEquipoMedicoAll();

	mostrarGrilla(ListaEquipoMedicoEncontrado);


}
};
}
