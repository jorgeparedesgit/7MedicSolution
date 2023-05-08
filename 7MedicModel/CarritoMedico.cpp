#include "CarritoMedico.h"

using namespace SevenMedicModel;

CarritoMedico::CarritoMedico() {


}


CarritoMedico::CarritoMedico(int IDcarrito, Almacenero^ objAlmacenero, Enfermero^ objEnfermero, List<EquipoMedico^>^ ListaEquipoMedicoCargado) {

	this->IDcarrito = IDcarrito;
	this->objAlmacenero = objAlmacenero;
	this->objEnfermero = objEnfermero;
	this->ListaEquipoMedicoCargado = ListaEquipoMedicoCargado;

}