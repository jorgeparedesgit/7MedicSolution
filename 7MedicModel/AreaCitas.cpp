#include "AreaCitas.h"

using namespace SevenMedicModel;

AreaCitas::AreaCitas() {


}

AreaCitas::AreaCitas(List<ReservaCita^>^ ListaReservaCitas, bool EnUso, MedicoGeneral^ objMedicoGeneral, String^ Nombre, String^ Tipo, String^ Piso): Area( Nombre, Tipo, Piso) {
	
	this->ListaReservaCitas = ListaReservaCitas;
	this->EnUso = EnUso;
	this->objMedicoGeneral = objMedicoGeneral;

}

