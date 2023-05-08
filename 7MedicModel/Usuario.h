#pragma once

namespace SevenMedicModel{

	using namespace System;
	using namespace System::Collections::Generic;

	public ref class Usuario {

		/*Atributos*/
		public:	
			String^ ID;
			String^ Password;
			String^ Nombres;
			String^ Apellidos;
			String^ Email;
			int Celular;
			String^ Genero;
			String^ FechaNacimiento;
			int Edad;
			int DNI;

		/*M�todos*/

		public:
			/*BOB- Constructor */
			/*1. Principal funci�n: Permite reservar memoria para el objeto*/
			/*2. Permite darle un valor inicial a los atributos*/

			Usuario();
			Usuario(String^ ID, String^ Password, String^ Nombres, String^ Apellidos, String^ Email, int Celular, String^ Genero, String^ FechaNacimiento, int Edad, int DNI);
			Usuario(String^ ID, String^ Nombres, String^ Apellidos, String^ Email);
			Usuario(String^ ID, String^ Nombres, String^ Apellidos, String^ Email, String^ Genero, int Edad);
			Usuario(String^ ID, String^ Password, String^ Nombres, String^ Apellidos, String^ Email);


	};
}