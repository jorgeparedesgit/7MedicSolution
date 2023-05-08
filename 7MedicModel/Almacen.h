#pragma once
#include "Area.h"
#include "EquipoMedico.h"

namespace SevenMedicModel {

	using namespace System;

	public ref class Almacen: public Area {

	public:

		List<EquipoMedico^>^ ListaEquipoMedico;

	public:

		Almacen();
		Almacen(List<EquipoMedico^>^ ListaEquipoMedico, String^ Nombre, String^ Tipo, String^ Piso);


	};


}