#include "Trabajador.h"

using namespace SevenMedicModel;

Trabajador::Trabajador() {


}

Trabajador::Trabajador(Area^ objArea, String^ ID, String^ Password, String^ Nombres, String^ Apellidos, String^ Email, int Celular, String^ Genero, String^ FechaNacimiento, int Edad, int DNI) : Usuario(ID, Password, Nombres, Apellidos, Email, Celular, Genero, FechaNacimiento, Edad, DNI) {

	this->objArea = objArea;

}
Trabajador::Trabajador(String^ ID, String^ Password, String^ Nombres, String^ Apellidos, String^ Email, int Celular, String^ Genero, String^ FechaNacimiento, int Edad, int DNI):Usuario(ID, Password, Nombres, Apellidos, Email, Celular, Genero, FechaNacimiento, Edad, DNI) {



}

Trabajador::Trabajador(String^ ID, String^ Password, String^ Nombres, String^ Apellidos, String^ Email, int Celular, String^ Genero, String^ FechaNacimiento, int Edad, int DNI, String^ Especialidad) : Usuario(ID, Password, Nombres, Apellidos, Email, Celular, Genero, FechaNacimiento, Edad, DNI) {

	this->Especialidad = Especialidad;


}