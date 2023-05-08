#pragma once

namespace SevenMedicController {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace SevenMedicModel;


	public ref class UsuarioController {

	public:

		UsuarioController();

		Supervisor^ BuscarSupervisorXID(String^ IDSupervisor);

		List<Usuario^>^ BuscarUsuarioAll();
		List<Paciente^>^ BuscarPacienteAll();
		List<Trabajador^>^ BuscarTrabajadorAll();

		Usuario^ BuscarUsuarioXID(String^ ID);
		Paciente^ BuscarPacienteXID(String^ ID);
		Trabajador^ BuscarTrabajadorXID(String^ ID);

		List<Usuario^>^ BuscarUsuarioLoginAll();
		Usuario^ BuscarUsuarioXIDLogin(String^ ID);
		void GrabarNuevoUsuarioLogin(Usuario^ objUsuario);
		void EscribirUsuarioLogin(List<Usuario^>^ ListaUsuario);
		void EliminarUsuarioLogin(String^ ID);



		void GrabarNuevoUsuario(Usuario^ objUsuario);
		void EscribirUsuario(List<Usuario^>^ ListaUsuario);
		void EliminarUsuario(String^ ID);
		
		void GrabarNuevoPaciente(Paciente^ objPaciente);
		void EscribirPaciente(List<Paciente^>^ ListaPaciente);
		void EliminarPaciente(String^ ID);
		
		void GrabarNuevoTrabajador(Trabajador^ objTrabajador);
		void EscribirTrabajador(List<Trabajador^>^ ListaTrabajador);
		void EliminarTrabajador(String^ ID);


	};


}