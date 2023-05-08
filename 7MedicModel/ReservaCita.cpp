#include "ReservaCita.h"

using namespace SevenMedicModel;

ReservaCita::ReservaCita() {


}

ReservaCita::ReservaCita(String^ ID, String^ Fecha, String^ AreaElegida) {

	this->ID = ID;
	this->Fecha = Fecha;
	this->AreaElegida = AreaElegida;

}
