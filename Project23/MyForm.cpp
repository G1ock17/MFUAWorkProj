#include "MyForm.h"

using namespace System;

using namespace System::Windows::Forms;

void main(array<String^>^ args)

{

	Application::EnableVisualStyles();

	Application::SetCompatibleTextRenderingDefault(false);

	Project23::MyForm form; // ProjectCLR -- ��� �������; MyForm -- ��� �����

	Application::Run(% form);

}
