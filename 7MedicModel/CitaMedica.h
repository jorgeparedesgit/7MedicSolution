#pragma once


namespace SevenMedicModel {

	using namespace System;

	public ref class CitaMedica {

	protected:

		String^ ID;
		String^ NombreMedico;
		String^ Fecha;
		String^ TextoCita;
		String^ Especialidad;

	public:

		CitaMedica();
		CitaMedica(String^ ID, String^ NombreMedico, String^ Fecha, String^ TextoCita, String^ Especialidad);


	};


}