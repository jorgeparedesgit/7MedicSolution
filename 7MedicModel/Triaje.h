#pragma once

namespace SevenMedicModel {

	using namespace System;

	public ref class Triaje {

	public:

		String^ ID;
		int Peso;
		int Altura;
		float PresionSanguinea;
		float RitmoCardiaco;
		String^ TextoSintomas;
		String^ Fecha;
		String^ TipoSangre;
		String^ IdEnfermero;

	public:

		Triaje();
		Triaje(String^ ID, int Peso, int Altura, float PresionSanguinea, float RitmoCardiaco, String^ TextoSintomas, String^ Fecha, String^ TipoSangre, String^ IdEnfermero);




	};





}