#include "frmInicio.h"
//#include "MenuAlmacen.h"


using namespace System;
using namespace System::Windows::Forms;
using namespace SevenMedicView;


void main(array <String^>^ args){

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	frmInicio ventana;
	//MenuAlmacen ventana;
	Application::Run(% ventana);

}