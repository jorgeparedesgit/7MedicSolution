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
	using namespace System::Collections::Generic;


	/// <summary>
	/// Resumen de MantenimientoUsuarios
	/// </summary>
	public ref class MantenimientoUsuarios : public System::Windows::Forms::Form
	{
	public:
		MantenimientoUsuarios(void)
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
		~MantenimientoUsuarios()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::Button^ button3;



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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column3, this->Column4
			});
			this->dataGridView1->Location = System::Drawing::Point(91, 131);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(454, 217);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"ID";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Nombres";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Apellidos";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Email";
			this->Column4->Name = L"Column4";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(275, 390);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(102, 38);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Eliminar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MantenimientoUsuarios::button3_Click);
			// 
			// MantenimientoUsuarios
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(678, 490);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MantenimientoUsuarios";
			this->Text = L"MantenimientoUsuarios";
			this->Load += gcnew System::EventHandler(this, &MantenimientoUsuarios::MantenimientoUsuarios_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: void mostrarGrilla(List<Usuario^>^ ListaUsuarioEncontrado) {

		this->dataGridView1->Rows->Clear();

		for (int i = 0; i < ListaUsuarioEncontrado->Count; i++) {

			Usuario^ objUsuario = ListaUsuarioEncontrado[i];
			array<String^>^ fila = gcnew array<String^>(4);
			fila[0] = objUsuario->ID;
			fila[1] = objUsuario->Nombres;
			fila[2] = objUsuario->Apellidos;
			fila[3] = objUsuario->Email;

			this->dataGridView1->Rows->Add(fila);
		}
	}

	private: System::Void MantenimientoUsuarios_Load(System::Object^ sender, System::EventArgs^ e) {

			UsuarioController^ objUsuarioController = gcnew UsuarioController();

			List<Usuario^>^ ListaUsuarioEncontrado = objUsuarioController->BuscarUsuarioAll();

			mostrarGrilla(ListaUsuarioEncontrado);

	}

	

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

			int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;

			String^ ID = this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString();

			UsuarioController^ objUsuarioController = gcnew UsuarioController();
			objUsuarioController->EliminarUsuario(ID);
			objUsuarioController->EliminarUsuarioLogin(ID);
			objUsuarioController->EliminarTrabajador(ID);
			objUsuarioController->EliminarPaciente(ID);


			MessageBox::Show("El usuario ha sido borrado del sistema");
			List<Usuario^>^ listaUsuario = objUsuarioController->BuscarUsuarioAll();
			mostrarGrilla(listaUsuario);
}
};
}
