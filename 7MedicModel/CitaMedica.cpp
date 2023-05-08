#include "CitaMedica.h"

using namespace SevenMedicModel;

CitaMedica::CitaMedica() {


}

CitaMedica::CitaMedica(String^ ID, String^ NombreMedico, String^ Fecha, String^ TextoCita, String^ Especialidad) {

	this->ID = ID;
	this->NombreMedico = NombreMedico;
	this->Fecha = Fecha;
	this->TextoCita = TextoCita;
	this->Especialidad = Especialidad;


}