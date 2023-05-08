#include "RecetaMedica.h"

using namespace SevenMedicModel;

RecetaMedica::RecetaMedica() {



}

RecetaMedica::RecetaMedica(String^ ID, String^ TextoReceta, String^ NombreMedico, String^ Fecha, String^ EmailPaciente) {

	this->ID = ID;
	this->TextoReceta = TextoReceta;
	this->NombreMedico = NombreMedico;
	this->Fecha = Fecha;
	this->EmailPaciente = EmailPaciente;

}