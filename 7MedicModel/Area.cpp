#include "Area.h"

using namespace SevenMedicModel;

Area::Area() {


}

Area::Area(String^ Nombre, String^ Tipo, String^ Piso) {

	this->Nombre = Nombre;
	this->Tipo= Tipo;
	this->Piso = Piso;

}