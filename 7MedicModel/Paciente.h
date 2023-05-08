#pragma once
#include "Usuario.h"
#include "ReservaCita.h"
#include "HistoriaMedica.h"

namespace SevenMedicModel {

	using namespace System;
	using namespace System::Collections::Generic;

	public ref class Paciente: public Usuario{

	public:
		List<ReservaCita^>^ ListaReservaMedica;
		String^ TipoSangre;

		HistoriaMedica^ objHistoriaMedica;



		


	public: 

		Paciente();
		Paciente(List<ReservaCita^>^ ListaReservaMedica, String^ TipoSangre, HistoriaMedica^ objHistoriaMedica, String^ ID, String^ Password, String^ Nombres, String^ Apellidos, String^ Email, int Celular, String^ Genero, String^ FechaNacimiento, int Edad, int DNI);
		Paciente(String^ TipoSangre, String^ ID, String^ Password, String^ Nombres, String^ Apellidos, String^ Email, int Celular, String^ Genero, String^ FechaNacimiento, int Edad, int DNI);
		Paciente(String^ ID, String^ Nombres, String^ Apellidos, String^ Email, String^ TipoSangre, String^ Genero, int Edad);


	};




}