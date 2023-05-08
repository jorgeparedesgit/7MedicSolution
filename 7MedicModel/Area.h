#pragma once


namespace SevenMedicModel {

	using namespace System;

	public ref class Area {

	protected:

		String^ Nombre;
		String^ Tipo;
		String^ Piso;

	public:
		
		Area();
		Area(String^ Nombre, String^ Tipo, String^ Piso);

	};


}