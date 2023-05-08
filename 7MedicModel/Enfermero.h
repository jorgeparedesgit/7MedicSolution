#pragma once
#include "Triaje.h"
#include "Trabajador.h"

namespace SevenMedicModel {

	using namespace System;
	using namespace System::Collections::Generic;

	public ref class Enfermero : public Trabajador{

	public:
		
		String^ Especialidad;
		List<Triaje^>^ ListaTriajeRealizado;

	public:

		Enfermero();
		Enfermero(String^ Especialidad, List<Triaje^>^ ListaTriajeRealizado, Area^ objArea, String^ ID, String^ Password, String^ Nombres, String^ Apellidos, String^ Email, int Celular, String^ Genero, String^ FechaNacimiento, int Edad, int DNI);

	};




}