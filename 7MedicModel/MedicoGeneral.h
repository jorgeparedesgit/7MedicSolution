#pragma once
#include "CitaMedica.h"
#include "Diagnostico.h"
#include "RecetaMedica.h"
#include "Trabajador.h"

namespace SevenMedicModel {

	using namespace System;
	using namespace System::Collections::Generic;

	public ref class MedicoGeneral : public Trabajador {

	public:
		List<CitaMedica^>^ ListaCitasBrindadas;
		List<Diagnostico^>^ ListaDiagnosticoEmitidos;
		List<RecetaMedica^>^ ListaRecetasEmitidas;
		String^ Especialidad;

	public:

		MedicoGeneral();
		MedicoGeneral(List<CitaMedica^>^ ListaCitasBrindadas, List<Diagnostico^>^ ListaDiagnosticoEmitidos, List<RecetaMedica^>^ ListaRecetasEmitidas, String^ Especialidad, Area^ objArea, String^ ID, String^ Password, String^ Nombres, String^ Apellidos, String^ Email, int Celular, String^ Genero, String^ FechaNacimiento, int Edad, int DNI);


	};


}
