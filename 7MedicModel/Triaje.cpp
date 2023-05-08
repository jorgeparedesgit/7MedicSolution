#include "Triaje.h"

using namespace SevenMedicModel;

Triaje::Triaje(){

}

Triaje::Triaje(String^ ID, int Peso, int Altura, float PresionSanguinea, float RitmoCardiaco, String^ TextoSintomas, String^ Fecha, String^ TipoSangre, String^ IdEnfermero) {

	this->ID = ID;
	this->Peso = Peso;
	this->PresionSanguinea = PresionSanguinea;
	this->RitmoCardiaco = RitmoCardiaco;
	this->TextoSintomas = TextoSintomas;
	this->Fecha = Fecha;
	this->TipoSangre = TipoSangre;
	this->IdEnfermero = IdEnfermero;

}