#pragma once

namespace SevenMedicModel {

	using namespace System;

	public ref class Diagnostico {

	protected:

		String^ ID;
		String^ TextoDiagnostico;
		String^ Fecha;
		String^ NombreMedicoGen;

	public:

		Diagnostico();
		Diagnostico(String^ ID, String^ TextoDiagnostico, String^ Fecha, String^ NombreMedicoGen);


	};





}