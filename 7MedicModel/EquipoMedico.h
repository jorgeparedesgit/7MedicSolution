#pragma once

namespace SevenMedicModel {

	using namespace System;
	using namespace System::Collections::Generic;

	public ref class EquipoMedico {

		/*Atributos*/
	public:
		int ID;
		String^ Nombre;
		int Cantidad;
		String^ FechaVencimiento;
		bool EstaVencido;

		/*M�todos*/

	public:
		/*BOB- Constructor */
		/*1. Principal funci�n: Permite reservar memoria para el objeto*/
		/*2. Permite darle un valor inicial a los atributos*/

		EquipoMedico();
		EquipoMedico(int ID, String^ Nombre, int Cantidad, String^ FechaVencimiento, bool EstaVencido);



	};
}