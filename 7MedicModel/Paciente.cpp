#include "Paciente.h"

using namespace SevenMedicModel;

Paciente::Paciente() {


}

Paciente::Paciente(List<ReservaCita^>^ ListaReservaMedica, String^ TipoSangre, HistoriaMedica^ objHistoriaMedica, String^ ID, String^ Password, String^ Nombres, String^ Apellidos, String^ Email, int Celular, String^ Genero, String^ FechaNacimiento, int Edad, int DNI): Usuario(ID, Password, Nombres, Apellidos, Email, Celular, Genero, FechaNacimiento, Edad, DNI) {

	this->ListaReservaMedica = ListaReservaMedica;
	this->TipoSangre = TipoSangre;
	this->objHistoriaMedica = objHistoriaMedica;


}

Paciente::Paciente(String^ TipoSangre, String^ ID, String^ Password, String^ Nombres, String^ Apellidos, String^ Email, int Celular, String^ Genero, String^ FechaNacimiento, int Edad, int DNI) : Usuario(ID, Password, Nombres, Apellidos, Email, Celular, Genero, FechaNacimiento, Edad, DNI) {

	this->TipoSangre = TipoSangre;

}

Paciente::Paciente(String^ ID, String^ Nombres, String^ Apellidos, String^ Email, String^ TipoSangre, String^ Genero, int Edad) : Usuario(ID, Nombres, Apellidos, Email, Genero, Edad) {

	this->TipoSangre = TipoSangre;

}