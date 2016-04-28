#include "MyForm.h"
#include <string>
#include <msclr\marshal_cppstd.h>

using namespace System;
using namespace System::Windows::Forms;

[STAThread]

void main(array<String^>^ args) {
	msclr::interop::marshal_context context;
	DnDGUI::MyForm form;

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	//This code is an example for how to get strings to and from text boxes.
	//Note: 'Setting' a text box equal to something will clear the text inside it.
	//std::string testString = context.marshal_as<std::string>(form.nameTextBox->Text);
	//form.ageTextBox->Text = context.marshal_as<System::String ^>(testString);
	Application::Run(%form);
	

}