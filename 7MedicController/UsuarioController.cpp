#include "UsuarioController.h"

using namespace SevenMedicController;
using namespace SevenMedicModel;
using namespace System::Collections::Generic;
using namespace System::IO; /*Para manipular archivos de texto*/


UsuarioController::UsuarioController() {




}

Supervisor^ UsuarioController::BuscarSupervisorXID(String^ IDSupervisor) {

	Supervisor^ objSupervisorEncontrado = nullptr;

	array<String^>^ lineas = File::ReadAllLines("Supervisor.txt");

	String^ separador = ";"; /*El caracter que permite separar los campos de una fila*/

	for each (String ^ lineaSupervisor in lineas) {

		array<String^>^ datos = lineaSupervisor->Split(separador->ToCharArray());
		String^ ID = datos[0];
		String^ Password = datos[1];


		if (ID == IDSupervisor) {

			objSupervisorEncontrado = gcnew Supervisor(ID, Password);
			break;
			
		}
	}

	return objSupervisorEncontrado;

}

List<Usuario^>^ UsuarioController::BuscarUsuarioAll() {

	List<Usuario^>^ ListaUsuarioEncontrado = gcnew List<Usuario^>();

	array<String^>^ lineas = File::ReadAllLines("Usuarios.txt");

	String^ separador = ";"; /*El caracter que permite separar los campos de una fila*/

	for each (String ^ lineaUsuario in lineas) {

		array<String^>^ datos = lineaUsuario->Split(separador->ToCharArray());
		String^ IDLeido = datos[0];
		String^ NombresLeido = datos[1];
		String^ ApellidosLeido = datos[2];
		String^ EmailLeido = datos[3];


		Usuario^ objUsuario = gcnew Usuario(IDLeido, NombresLeido, ApellidosLeido, EmailLeido);
		
		ListaUsuarioEncontrado->Add(objUsuario);

	}

	return ListaUsuarioEncontrado;


}

List<Paciente^>^ UsuarioController::BuscarPacienteAll() {

	List<Paciente^>^ ListaPacienteEncontrado = gcnew List<Paciente^>();

	array<String^>^ lineas = File::ReadAllLines("Pacientes.txt");

	String^ separador = ";"; /*El caracter que permite separar los campos de una fila*/

	for each (String ^ lineaPaciente in lineas) {

		array<String^>^ datos = lineaPaciente->Split(separador->ToCharArray());
		String^ IDLeido = datos[0];
		String^ NombresLeido = datos[1];
		String^ ApellidosLeido = datos[2];
		String^ EmailLeido = datos[3];
		String^ TipoSangreLeido = datos[4];
		String^ GeneroLeido = datos[5];
		int EdadLeido = Convert::ToInt32(datos[6]);


		Paciente^ objPaciente = gcnew Paciente(IDLeido, NombresLeido, ApellidosLeido, EmailLeido, TipoSangreLeido, GeneroLeido, EdadLeido);

		ListaPacienteEncontrado->Add(objPaciente);

	}

	return ListaPacienteEncontrado;

}

List<Trabajador^>^ UsuarioController::BuscarTrabajadorAll() {

	List<Trabajador^>^ ListaTrabajadorEncontrado = gcnew List<Trabajador^>();

	array<String^>^ lineas = File::ReadAllLines("Trabajadores.txt");

	String^ separador = ";"; /*El caracter que permite separar los campos de una fila*/

	for each (String ^ lineaTrabajador in lineas) {

		array<String^>^ datos = lineaTrabajador->Split(separador->ToCharArray());
		String^ IDLeido = datos[0];
		String^ Password = datos[1];
		String^ NombresLeido = datos[2];
		String^ ApellidosLeido = datos[3];
		String^ EmailLeido = datos[4];
		int CelularLeido = Convert::ToInt32(datos[5]);
		String^ GeneroLeido = datos[6];
		String^ FechaNacimientoLeido = datos[7];
		int EdadLeido = Convert::ToInt32(datos[8]);
		int DniLeido = Convert::ToInt32(datos[9]);
		String^ AreaAsignadaLeida = datos[10];



		Trabajador^ objTrabajador = gcnew Trabajador(IDLeido,Password, NombresLeido, ApellidosLeido, EmailLeido, CelularLeido, GeneroLeido, FechaNacimientoLeido, EdadLeido,DniLeido, AreaAsignadaLeida);

		ListaTrabajadorEncontrado->Add(objTrabajador);

	}

	return ListaTrabajadorEncontrado;



}

Usuario^ UsuarioController::BuscarUsuarioXID(String^ ID) {

	Usuario^ objUsuarioEncontrado = nullptr;

	array<String^>^ lineas = File::ReadAllLines("Usuarios.txt");
	String^ separador = ";"; /*El caracter que permite separar los campos de una fila*/

	for each (String ^ lineaUsuario in lineas) {

		array<String^>^ datos = lineaUsuario->Split(separador->ToCharArray());
		String^ IDLeido = datos[0];
		String^ NombresLeido = datos[1];
		String^ ApellidosLeido = datos[2];
		String^ EmailLeido = datos[3];

		if (IDLeido == ID) {

			Usuario^ objUsuarioEncontrado = gcnew Usuario(IDLeido, NombresLeido, ApellidosLeido, EmailLeido);
			break;
		}
	}

	return objUsuarioEncontrado;

}

Paciente^ UsuarioController::BuscarPacienteXID(String^ ID) {

	Paciente^ objPacienteEncontrado = nullptr;

	array<String^>^ lineas = File::ReadAllLines("Pacientes.txt");
	String^ separador = ";"; /*El caracter que permite separar los campos de una fila*/

	for each (String ^ lineaPaciente in lineas) {

		array<String^>^ datos = lineaPaciente->Split(separador->ToCharArray());
		String^ IDLeido = datos[0];
		String^ NombresLeido = datos[1];
		String^ ApellidosLeido = datos[2];
		String^ EmailLeido = datos[3];
		String^ TipoSangreLeido = datos[4];
		String^ GeneroLeido = datos[5];
		int EdadLeido = Convert::ToInt32(datos[6]);

		if (IDLeido == ID) {

			Paciente^ objPaciente = gcnew Paciente(IDLeido, NombresLeido, ApellidosLeido, EmailLeido, TipoSangreLeido, GeneroLeido, EdadLeido);
			break;
		}
	}

	return objPacienteEncontrado;

}

Trabajador^ UsuarioController::BuscarTrabajadorXID(String^ ID) {

	Trabajador^ objTrabajadorEncontrado = nullptr;

	array<String^>^ lineas = File::ReadAllLines("Trabajadores.txt");
	String^ separador = ";"; /*El caracter que permite separar los campos de una fila*/

	for each (String ^ lineaTrabajador in lineas) {

		array<String^>^ datos = lineaTrabajador->Split(separador->ToCharArray());
		String^ IDLeido = datos[0];
		String^ Password = datos[1];
		String^ NombresLeido = datos[2];
		String^ ApellidosLeido = datos[3];
		String^ EmailLeido = datos[4];
		int CelularLeido = Convert::ToInt32(datos[5]);
		String^ GeneroLeido = datos[6];
		String^ FechaNacimientoLeido = datos[7];
		int EdadLeido = Convert::ToInt32(datos[8]);
		int DniLeido = Convert::ToInt32(datos[9]);
		String^ EspecialidadLeida = datos[10];

		if (IDLeido == ID) {

			objTrabajadorEncontrado = gcnew Trabajador(IDLeido, Password, NombresLeido, ApellidosLeido, EmailLeido, CelularLeido, GeneroLeido, FechaNacimientoLeido, EdadLeido, DniLeido,EspecialidadLeida);

			break;
		}
	}

	return objTrabajadorEncontrado;

}


void UsuarioController::GrabarNuevoUsuario(Usuario^ objUsuario) {

	List<Usuario^>^ listaUsuario = BuscarUsuarioAll();

	listaUsuario->Add(objUsuario);
	EscribirUsuario(listaUsuario);


}

void UsuarioController::EscribirUsuario(List<Usuario^>^ ListaUsuario) {

	array<String^>^ lineasArchivo = gcnew array<String^>(ListaUsuario->Count);
	int k = 0;
	for (int i = 0; i < ListaUsuario->Count; i++) {
		Usuario^ objUsuario = ListaUsuario[i];
		lineasArchivo[i] = objUsuario->ID+ ";" + objUsuario->Nombres + ";" + objUsuario->Apellidos + ";" + objUsuario->Email;
	}
	/*Aqu� ya mi array de lineasArchivo esta OK, con la informaci�n a grabar*/
	File::WriteAllLines("Usuarios.txt", lineasArchivo);


}

void UsuarioController::EliminarUsuario(String^ ID) {

	List<Usuario^>^ listaUsuario = BuscarUsuarioAll();
	int posLista = 0;

	for (int i = 0; i < listaUsuario->Count; i++) {
		
		if (listaUsuario[i]->ID == ID) {

			posLista = i;
			break;

		}
	}

	listaUsuario->RemoveAt(posLista);
	EscribirUsuario(listaUsuario);
}


void UsuarioController::GrabarNuevoPaciente(Paciente^ objPaciente) {
	
	List<Paciente^>^ ListaPaciente = BuscarPacienteAll();

	ListaPaciente->Add(objPaciente);
	EscribirPaciente(ListaPaciente);


}

void UsuarioController::EscribirPaciente(List<Paciente^>^ ListaPaciente) {

	array<String^>^ lineasArchivo = gcnew array<String^>(ListaPaciente->Count);
	int k = 0;
	for (int i = 0; i < ListaPaciente->Count; i++) {
		Paciente^ objPaciente = ListaPaciente[i];
		lineasArchivo[i] = objPaciente->ID + ";" + objPaciente->Nombres + ";" + objPaciente->Apellidos + ";" + objPaciente->Email + ";" + objPaciente->TipoSangre + ";" + objPaciente->Genero + ";" + objPaciente->Edad;
	}
	/*Aqu� ya mi array de lineasArchivo esta OK, con la informaci�n a grabar*/
	File::WriteAllLines("Pacientes.txt", lineasArchivo);

}


void UsuarioController::EliminarPaciente(String^ ID) {

	List<Paciente^>^ listaPaciente = BuscarPacienteAll();
	int posLista = 0;

	for (int i = 0; i < listaPaciente->Count; i++) {

		if (listaPaciente[i]->ID == ID) {

			posLista = i;
			break;

		}
	}

	listaPaciente->RemoveAt(posLista);
	EscribirPaciente(listaPaciente);

}


void UsuarioController::GrabarNuevoTrabajador(Trabajador^ objTrabajador) {

	List<Trabajador^>^ ListaTrabajador = BuscarTrabajadorAll();

	ListaTrabajador->Add(objTrabajador);
	EscribirTrabajador(ListaTrabajador);

}

void UsuarioController::EscribirTrabajador(List<Trabajador^>^ ListaTrabajador) {

	array<String^>^ lineasArchivo = gcnew array<String^>(ListaTrabajador->Count);
	int k = 0;
	for (int i = 0; i < ListaTrabajador->Count; i++) {
		Trabajador^ objTrabajador = ListaTrabajador[i];
		lineasArchivo[i] = objTrabajador->ID + ";" + objTrabajador->Password + ";" + objTrabajador->Nombres + ";" + objTrabajador->Apellidos + ";" + objTrabajador->Email + ";" + objTrabajador->Celular + ";" + objTrabajador->Genero + ";" + objTrabajador->FechaNacimiento + ";" + objTrabajador->Edad + ";" + objTrabajador->DNI + ";" + objTrabajador->Especialidad;
	}
	/*Aqu� ya mi array de lineasArchivo esta OK, con la informaci�n a grabar*/
	File::WriteAllLines("Trabajadores.txt", lineasArchivo);

}

void UsuarioController::EliminarTrabajador(String^ ID) {

	List<Trabajador^>^ listaTrabajador = BuscarTrabajadorAll();
	int posLista = 0;

	for (int i = 0; i < listaTrabajador->Count; i++) {

		if (listaTrabajador[i]->ID == ID) {

			posLista = i;
			break;

		}
	}

	listaTrabajador->RemoveAt(posLista);
	EscribirTrabajador(listaTrabajador);


}

Usuario^ UsuarioController:: BuscarUsuarioXIDLogin(String^ ID) {

	Usuario^ objUsuarioEncontrado = nullptr;

	array<String^>^ lineas = File::ReadAllLines("Usuarios_login.txt");
	String^ separador = ";"; /*El caracter que permite separar los campos de una fila*/

	for each (String ^ lineaUsuario in lineas) {

		array<String^>^ datos = lineaUsuario->Split(separador->ToCharArray());
		String^ IDLeido = datos[0];
		String^ PasswordLeido = datos[1];
		String^ NombresLeido = datos[2];
		String^ ApellidosLeido = datos[3];
		String^ EmailLeido = datos[4];

		if (IDLeido == ID) {

			objUsuarioEncontrado = gcnew Usuario(IDLeido,PasswordLeido, NombresLeido, ApellidosLeido, EmailLeido);
			break;
		}
	}

	return objUsuarioEncontrado;

}

List<Usuario^>^ UsuarioController::BuscarUsuarioLoginAll() {

	List<Usuario^>^ ListaUsuarioEncontrado = gcnew List<Usuario^>();

	array<String^>^ lineas = File::ReadAllLines("Usuarios_login.txt");

	String^ separador = ";"; /*El caracter que permite separar los campos de una fila*/

	for each (String ^ lineaUsuario in lineas) {

		array<String^>^ datos = lineaUsuario->Split(separador->ToCharArray());
		String^ IDLeido = datos[0];
		String^ PasswordLeido = datos[1];
		String^ NombresLeido = datos[2];
		String^ ApellidosLeido = datos[3];
		String^ EmailLeido = datos[4];


		Usuario^ objUsuarioEncontrado = gcnew Usuario(IDLeido, PasswordLeido, NombresLeido, ApellidosLeido, EmailLeido);

		ListaUsuarioEncontrado->Add(objUsuarioEncontrado);

	}

	return ListaUsuarioEncontrado;

}

void UsuarioController::GrabarNuevoUsuarioLogin(Usuario^ objUsuario) {

	List<Usuario^>^ listaUsuario = BuscarUsuarioLoginAll();

	listaUsuario->Add(objUsuario);
	EscribirUsuario(listaUsuario);

}

void UsuarioController::EscribirUsuarioLogin(List<Usuario^>^ ListaUsuario) {

	array<String^>^ lineasArchivo = gcnew array<String^>(ListaUsuario->Count);
	int k = 0;
	for (int i = 0; i < ListaUsuario->Count; i++) {
		Usuario^ objUsuario = ListaUsuario[i];
		lineasArchivo[i] = objUsuario->ID + ";" + objUsuario->Password + ";" + objUsuario->Nombres + ";" + objUsuario->Apellidos + ";" + objUsuario->Email;
	}
	/*Aqu� ya mi array de lineasArchivo esta OK, con la informaci�n a grabar*/
	File::WriteAllLines("Usuarios_login.txt", lineasArchivo);


}

void UsuarioController::EliminarUsuarioLogin(String^ ID) {

	List<Usuario^>^ listaUsuario = BuscarUsuarioLoginAll();
	int posLista = 0;

	for (int i = 0; i < listaUsuario->Count; i++) {

		if (listaUsuario[i]->ID == ID) {

			posLista = i;
			break;

		}
	}

	listaUsuario->RemoveAt(posLista);
	EscribirUsuarioLogin(listaUsuario);

}


