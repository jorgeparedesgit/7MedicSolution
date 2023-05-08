#pragma once
#include "Usuario.h"
#include "Area.h"

namespace SevenMedicModel {

	using namespace System;
	
	public ref class Trabajador : public Usuario{

	public:
		
		Area^ objArea;
		String^ Especialidad;

	public:

		Trabajador();
		Trabajador(Area^ objArea, String^ ID, String^ Password, String^ Nombres, String^ Apellidos, String^ Email, int Celular, String^ Genero, String^ FechaNacimiento, int Edad, int DNI);
		Trabajador(String^ ID, String^ Password, String^ Nombres, String^ Apellidos, String^ Email, int Celular, String^ Genero, String^ FechaNacimiento, int Edad, int DNI);
		Trabajador(String^ ID, String^ Password, String^ Nombres, String^ Apellidos, String^ Email, int Celular, String^ Genero, String^ FechaNacimiento, int Edad, int DNI, String^ Especialidad);
	};



}