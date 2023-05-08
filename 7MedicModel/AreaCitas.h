#pragma once
#include "ReservaCita.h"
#include "MedicoGeneral.h"
#include "Area.h"

namespace SevenMedicModel {

	using namespace System;
	using namespace System::Collections::Generic;

	public ref class AreaCitas : public Area{

	public:

		List<ReservaCita^>^ ListaReservaCitas;
		bool EnUso;
		MedicoGeneral^ objMedicoGeneral;

	public:

		AreaCitas();
		AreaCitas(List<ReservaCita^>^ ListaReservaCitas, bool EnUso, MedicoGeneral^ objMedicoGeneral, String^ Nombre, String^ Tipo, String^ Piso);




	};


}