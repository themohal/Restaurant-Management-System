// mypro.cpp : main project file.

#include "stdafx.h"
#include "start.h"

using namespace mypro;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Create the main window and run it
	Application::Run(gcnew start());
	return 0;
}
