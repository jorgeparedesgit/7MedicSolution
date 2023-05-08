#pragma once
#include "CitaMedica.h"
#include "Diagnostico.h"
#include "RecetaMedica.h"
#include "Triaje.h"


namespace SevenMedicModel {

	using namespace System;
	using namespace System::Collections::Generic;

	public ref class HistoriaMedica {

	public:

		List<Triaje^>^ ListaTriaje;
		List<CitaMedica^>^ ListaCitas;
		List<RecetaMedica^>^ ListaRecetas;
		List<Diagnostico^>^ ListaDiagnosticos;

	public:

		HistoriaMedica();
		HistoriaMedica(List<Triaje^>^ ListaTriaje, List<CitaMedica^>^ ListaCitas, List<RecetaMedica^>^ ListaRecetas, List<Diagnostico^>^ ListaDiagnosticos);


	};


}