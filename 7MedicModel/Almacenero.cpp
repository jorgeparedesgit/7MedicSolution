#include "Almacenero.h"

using namespace SevenMedicModel;

Almacenero::Almacenero(){

}


Almacenero::Almacenero(List<EquipoMedico^>^ ListaEquipoMedicoRetirado, Area^ objArea, String^ ID, String^ Password, String^ Nombres, String^ Apellidos, String^ Email, int Celular, String^ Genero, String^ FechaNacimiento, int Edad, int DNI) : Trabajador(objArea, ID, Password, Nombres, Apellidos, Email, Celular, Genero, FechaNacimiento, Edad, DNI) {

	this->ListaEquipoMedicoRetirado = ListaEquipoMedicoRetirado;

}