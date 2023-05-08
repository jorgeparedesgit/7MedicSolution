#include "Diagnostico.h"

using namespace SevenMedicModel;

Diagnostico::Diagnostico() {


}

Diagnostico::Diagnostico(String^ ID, String^ TextoDiagnostico, String^ Fecha, String^ NombreMedicoGen) {

	this->ID = ID;
	this->TextoDiagnostico = TextoDiagnostico;
	this->Fecha = Fecha;
	this->NombreMedicoGen = NombreMedicoGen;


}
