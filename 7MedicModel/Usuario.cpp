#include "Usuario.h"

using namespace SevenMedicModel;

Usuario::Usuario(){


}


Usuario::Usuario(String^ ID, String^ Password, String^ Nombres, String^ Apellidos, String^ Email, int Celular, String^ Genero, String^ FechaNacimiento, int Edad, int DNI) {

	this->ID = ID;
	this->Password = Password;
	this->Nombres = Nombres;
	this->Apellidos = Apellidos;
	this->Email = Email;
	this->Celular = Celular;
	this->Genero = Genero;
	this->FechaNacimiento = FechaNacimiento;
	this->Edad = Edad;
	this->DNI = DNI;

}

Usuario::Usuario(String^ ID, String^ Nombres, String^ Apellidos, String^ Email) {
	
	this->ID = ID;
	this->Nombres = Nombres;
	this->Apellidos = Apellidos;
	this->Email = Email;
}

Usuario::Usuario(String^ ID, String^ Nombres, String^ Apellidos, String^ Email, String^ Genero, int Edad) {

	this->ID = ID;
	this->Nombres = Nombres;
	this->Apellidos = Apellidos;
	this->Email = Email;
	this->Genero = Genero;
	this->Edad = Edad;

}

Usuario::Usuario(String^ ID, String^ Password, String^ Nombres, String^ Apellidos, String^ Email) {

	this->ID = ID;
	this->Password = Password;
	this->Nombres = Nombres;
	this->Apellidos = Apellidos;
	this->Email = Email;

}