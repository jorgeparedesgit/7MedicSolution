#include "Enfermero.h"

using namespace SevenMedicModel;

Enfermero::Enfermero() {


}

Enfermero::Enfermero(String^ Especialidad, List<Triaje^>^ ListaTriajeRealizado, Area^ objArea, String^ ID, String^ Password, String^ Nombres, String^ Apellidos, String^ Email, int Celular, String^ Genero, String^ FechaNacimiento, int Edad, int DNI) :Trabajador(objArea, ID, Password, Nombres, Apellidos, Email, Celular, Genero, FechaNacimiento, Edad, DNI){

	this->Especialidad = Especialidad;
	this->ListaTriajeRealizado = ListaTriajeRealizado;

}