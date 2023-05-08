#include "MedicoGeneral.h"

using namespace SevenMedicModel;

MedicoGeneral::MedicoGeneral() {


}

MedicoGeneral::MedicoGeneral(List<CitaMedica^>^ ListaCitasBrindadas, List<Diagnostico^>^ ListaDiagnosticoEmitidos, List<RecetaMedica^>^ ListaRecetasEmitidas, String^ Especialidad, Area^ objArea, String^ ID, String^ Password, String^ Nombres, String^ Apellidos, String^ Email, int Celular, String^ Genero, String^ FechaNacimiento, int Edad, int DNI): Trabajador(objArea, ID, Password, Nombres, Apellidos, Email, Celular, Genero, FechaNacimiento, Edad, DNI) {

	this->ListaCitasBrindadas = ListaCitasBrindadas;
	this->ListaDiagnosticoEmitidos = ListaDiagnosticoEmitidos;
	this->ListaRecetasEmitidas = ListaRecetasEmitidas;
	this->Especialidad = Especialidad;



}
