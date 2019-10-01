#include "MyForm.h"
#include"all_libraries.h"

[STAThreadAttribute]
int main(array<System::String ^> ^args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	recall::MyForm name;
	Application::Run(%name);

	return 0;
}
