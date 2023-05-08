#pragma once
#include "EquipoMedico.h"
#include "Trabajador.h"

namespace SevenMedicModel {

	using namespace System;
	using namespace System::Collections::Generic;

	public ref class Almacenero : public Trabajador {

	public:


		List<EquipoMedico^>^ ListaEquipoMedicoRetirado;

	public:

		Almacenero();
		Almacenero(List<EquipoMedico^>^ ListaEquipoMedicoRetirado, Area^ objArea, String^ ID, String^ Password, String^ Nombres, String^ Apellidos, String^ Email, int Celular, String^ Genero, String^ FechaNacimiento, int Edad, int DNI);


	};


}