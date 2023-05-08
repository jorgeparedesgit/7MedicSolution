#include "Supervisor.h"

using namespace SevenMedicModel;

Supervisor::Supervisor() {


}

Supervisor::Supervisor(String^ IDSupervisor, String^ Password, List<Usuario^>^ ListaUsuarios) {

	this->IDSupervisor = IDSupervisor;
	this->Password = Password;
	this->ListaUsuarios = ListaUsuarios;
}

Supervisor::Supervisor(String^ IDSupervisor, String^ Password) {

	this->IDSupervisor = IDSupervisor;
	this->Password = Password;
}