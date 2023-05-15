#include "MyForm.h"
#include "Form1.h"
#include "Form2.h"
#include "Form3.h"

using namespace System;

using namespace System::Windows::Forms;

void main(array<String^>^ args)

{

	Application::EnableVisualStyles();

	Application::SetCompatibleTextRenderingDefault(false);

	Project23::MyForm form;
	Application::Run(% form);

	Project23::Form1 form1;
	Project23::Form2 form2;
	Project23::Form3 form3;



}
