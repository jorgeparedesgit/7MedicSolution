#include "HistoriaMedica.h"

using namespace SevenMedicModel;

HistoriaMedica::HistoriaMedica() {


}

HistoriaMedica::HistoriaMedica(List<Triaje^>^ ListaTriaje, List<CitaMedica^>^ ListaCitas, List<RecetaMedica^>^ ListaRecetas, List<Diagnostico^>^ ListaDiagnosticos) {

	this->ListaTriaje = ListaTriaje;
	this->ListaCitas = ListaCitas;
	this->ListaRecetas = ListaRecetas;
	this->ListaDiagnosticos = ListaDiagnosticos;

}