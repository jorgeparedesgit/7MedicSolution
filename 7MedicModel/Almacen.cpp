#include "Almacen.h"

using namespace SevenMedicModel;

Almacen::Almacen() {


}

Almacen::Almacen(List<EquipoMedico^>^ ListaEquipoMedico, String^ Nombre, String^ Tipo, String^ Piso) : Area(Nombre, Tipo, Piso) {



}