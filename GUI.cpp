#include "MyForm.h"
#include <string>
#include <msclr\marshal_cppstd.h>

using namespace System;
using namespace System::Windows::Forms;

[STAThread]

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);



	DnDGUI::MyForm form;
	msclr::interop::marshal_context context;
	std::string testString = context.marshal_as<std::string>(form.nameTextBox->Text);
	form.ageTextBox->Text = context.marshal_as<System::String ^>(testString);
	form.classDropDown->Text = "Wizard";
	Application::Run(%form);


}