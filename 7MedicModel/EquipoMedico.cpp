#include "EquipoMedico.h"

using namespace SevenMedicModel;

EquipoMedico::EquipoMedico() {


}


EquipoMedico::EquipoMedico(int ID, String^ Nombre, int Cantidad, String^ FechaVencimiento, bool EstaVencido) {

	this->ID = ID;
	this->Nombre = Nombre;
	this->Cantidad = Cantidad;
	this->FechaVencimiento = FechaVencimiento;
	this->EstaVencido = EstaVencido;

}