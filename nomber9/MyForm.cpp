#include "MyForm.h"
#include"About.h"
#include"Result of solution.h"
#include <Windows.h>
#include"DataBank.h"
#include"Error.h"

using namespace nomber9; // Название проекта

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
}


