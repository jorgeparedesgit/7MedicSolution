#pragma once
#include "EquipoMedico.h"
#include "Almacenero.h"
#include "Enfermero.h"

namespace SevenMedicModel {

	using namespace System;
	using namespace System::Collections::Generic;

	public ref class CarritoMedico {

	public:
		int IDcarrito;
		Almacenero^ objAlmacenero;
		Enfermero^ objEnfermero;
		List<EquipoMedico^>^ ListaEquipoMedicoCargado;

	public:

		CarritoMedico();
		CarritoMedico(int IDcarrito, Almacenero^ objAlmacenero, Enfermero^ objEnfermero, List<EquipoMedico^>^ ListaEquipoMedicoCargado);

	};



}