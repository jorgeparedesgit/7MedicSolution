#pragma once

namespace SevenMedicController {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace SevenMedicModel;

	public ref class AlmacenController {

	public:

		AlmacenController();
		List<EquipoMedico^>^ BuscarEquipoMedicoXNombre(String^ nombreEquipoMedico);
		EquipoMedico^ BuscarEquipoMedicoXID(int ID);
		void GrabarNuevoEquipoMedico(EquipoMedico^ objEquipoMedico);
		List<EquipoMedico^>^ BuscarEquipoMedicoAll();
		void EscribirEquipoMedico(List<EquipoMedico^>^ ListaEquipoMedico);
		void EliminarEquipoMedico(String^ FechaVencimiento);



	};





}