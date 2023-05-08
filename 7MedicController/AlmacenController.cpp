#include "AlmacenController.h"

using namespace SevenMedicController;
using namespace SevenMedicModel;
using namespace System::IO; /*Para manipular archivos de texto*/

AlmacenController::AlmacenController() {




}

List<EquipoMedico^>^ AlmacenController::BuscarEquipoMedicoXNombre(String^ nombreEquipoMedico) {

	List<EquipoMedico^>^ ListaEquipoMedicoEncontrado= gcnew List<EquipoMedico^>();

	array<String^>^ lineas = File::ReadAllLines("EquipoMedico.txt");

	String^ separador = ";"; /*El caracter que permite separar los campos de una fila*/

	for each (String ^ lineaEquipoMedico in lineas) {

		array<String^>^ datos = lineaEquipoMedico->Split(separador->ToCharArray());
		int ID = Convert::ToInt32(datos[0]);
		String^ Nombre = datos[1];
		int cantidad = Convert::ToInt32(datos[2]);
		String^ FechaVencimiento = datos[3];
		int k;

		if (datos[4] == "False") {
			k = 0;
		}
		else {
			k = 1;
		}


		bool EstaVencidoDato = Convert::ToBoolean(k);


		if (nombreEquipoMedico == Nombre) {

			EquipoMedico^ objEquipoMedico = gcnew EquipoMedico(ID, Nombre, cantidad, FechaVencimiento, EstaVencidoDato);
			ListaEquipoMedicoEncontrado->Add(objEquipoMedico);

		}
	}
	
	return ListaEquipoMedicoEncontrado;

}

EquipoMedico^ AlmacenController::BuscarEquipoMedicoXID(int ID) {

	EquipoMedico^ objEquipoMedicoEncontrado = nullptr;

	array<String^>^ lineas = File::ReadAllLines("EquipoMedico.txt");
	String^ separador = ";"; /*El caracter que permite separar los campos de una fila*/

	for each (String ^ lineaEquipoMedico in lineas) {
		array<String^>^ datos = lineaEquipoMedico->Split(separador->ToCharArray());
		int IDLeido = Convert::ToInt32(datos[0]);
		String^ nombreEquipoMedicoLeido = datos[1];
		int cantidadLeida = Convert::ToInt32(datos[2]);
		String^ FechaVencimientoLeida = datos[3];
		bool EstaVencido = Convert::ToBoolean(datos[4]);

		if (IDLeido == ID) {

			objEquipoMedicoEncontrado = gcnew EquipoMedico(IDLeido, nombreEquipoMedicoLeido, cantidadLeida, FechaVencimientoLeida, EstaVencido);
			break;
		}
	}

	return objEquipoMedicoEncontrado;


}

List<EquipoMedico^>^ AlmacenController:: BuscarEquipoMedicoAll() {

	List<EquipoMedico^>^ ListaEquipoMedicoEncontrado = gcnew List<EquipoMedico^>();

	array<String^>^ lineas = File::ReadAllLines("EquipoMedico.txt");

	String^ separador = ";"; /*El caracter que permite separar los campos de una fila*/

	for each (String ^ lineaEquipoMedico in lineas) {

		array<String^>^ datos = lineaEquipoMedico->Split(separador->ToCharArray());
		int ID = Convert::ToInt32(datos[0]);
		String^ Nombre = datos[1];
		int cantidad = Convert::ToInt32(datos[2]);
		String^ FechaVencimiento = datos[3];
		bool EstaVencidoLeido = Convert::ToBoolean(datos[4]);


		EquipoMedico^ objEquipoMedico = gcnew EquipoMedico(ID, Nombre, cantidad, FechaVencimiento, EstaVencidoLeido);
		ListaEquipoMedicoEncontrado->Add(objEquipoMedico);

	}

	return ListaEquipoMedicoEncontrado;

}

void AlmacenController::GrabarNuevoEquipoMedico(EquipoMedico^ objEquipoMedico) {

	List<EquipoMedico^>^ listaEquipoMedico = BuscarEquipoMedicoAll();

	listaEquipoMedico->Add(objEquipoMedico);
	EscribirEquipoMedico(listaEquipoMedico);


}

void AlmacenController::EscribirEquipoMedico(List<EquipoMedico^>^ ListaEquipoMedico) {

	array<String^>^ lineasArchivo = gcnew array<String^>(ListaEquipoMedico->Count);
	int k = 0;
	for (int i = 0; i < ListaEquipoMedico->Count; i++) {
		EquipoMedico^ objEquipoMedico = ListaEquipoMedico[i];
		lineasArchivo[i] = Convert::ToString(objEquipoMedico->ID) + ";" + objEquipoMedico->Nombre + ";" + Convert::ToString(objEquipoMedico->Cantidad) + ";" + objEquipoMedico->FechaVencimiento + ";" + Convert::ToString(objEquipoMedico->EstaVencido);
	}
	/*Aqu� ya mi array de lineasArchivo esta OK, con la informaci�n a grabar*/
	File::WriteAllLines("EquipoMedico.txt", lineasArchivo);

}

void AlmacenController::EliminarEquipoMedico(String^ FechaVencimiento) {

	List<EquipoMedico^>^ listaEquipoMedico = BuscarEquipoMedicoAll();
	int posLista = 0;

	for (int i = 0; i < listaEquipoMedico->Count; i++) {

		if (listaEquipoMedico[i]->FechaVencimiento == FechaVencimiento) {

			posLista = i;
			break;

		}
	}

	listaEquipoMedico->RemoveAt(posLista);
	EscribirEquipoMedico(listaEquipoMedico);

}


