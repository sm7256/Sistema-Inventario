#include "sergioform.h"
#include "sergioform.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    // Reemplaza 'YourProjectNamespace' con el nombre del espacio de nombres de tu proyecto
    sergioformulario::sergioform sergioform;
    Application::Run(% sergioform);
}
