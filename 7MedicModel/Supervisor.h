#pragma once
#include "Usuario.h"

namespace SevenMedicModel {

	using namespace System::Collections::Generic;
	using namespace System;

	public ref class Supervisor {

	public:

		String^ IDSupervisor;
		String^ Password;

		List<Usuario^>^ ListaUsuarios;

	public:

		Supervisor();
		Supervisor(String^ IDSupervisor, String^ Password);
		Supervisor(String^ IDSupervisor, String^ Password, List<Usuario^>^ ListaUsuarios);


	};



}