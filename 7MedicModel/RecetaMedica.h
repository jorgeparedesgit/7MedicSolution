#pragma once

namespace SevenMedicModel {

	using namespace System;

	public ref class RecetaMedica {

	protected:

		String^ ID;
		String^ TextoReceta;
		String^ NombreMedico;
		String^ Fecha;
		String^ EmailPaciente;

	public:

		RecetaMedica();
		RecetaMedica(String^ ID, String^ TextoReceta, String^ NombreMedico, String^ Fecha, String^ EmailPaciente);


	};

}