#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]
int main(array<String^>^ arg)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Labaratory21::MyForm form;// ��'� ������ �������, ���������, myproekt ��� ��.
    Application::Run(% form);
}
