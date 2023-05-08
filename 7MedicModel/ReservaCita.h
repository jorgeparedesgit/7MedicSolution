#pragma once

namespace SevenMedicModel {

	using namespace System;
	using namespace System::Collections::Generic;

	public ref class ReservaCita {

	public:
		
		String^ ID;
		String^ Fecha;
		String^ AreaElegida;




	public:

		ReservaCita();
		ReservaCita(String^ ID, String^ Fecha, String^ AreaElegida);


	};




}