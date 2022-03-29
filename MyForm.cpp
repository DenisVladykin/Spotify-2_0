#include "MyForm.h"
using namespace Project4;

[STAThreadAttribute]
int main(array<System::String^>^ args)
{
	Application::Run(gcnew MyForm()); // ≈сли форму назвали MyForm, как написано выше
	return 0;
}


