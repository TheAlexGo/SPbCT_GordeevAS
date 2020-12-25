#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(ref class array<String^>^ arg) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    work::MyForm form;
    Application::Run(% form);
}