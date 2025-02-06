#pragma once
#include "menu.h"
namespace sergioformulario {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Resumen de sergioform
	/// </summary>
	public ref class sergioform : public System::Windows::Forms::Form
	{
	public:
		sergioform(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//

		}
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~sergioform()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnEntrar;
	private: System::Windows::Forms::Button^ btnLimpiar;
	private: System::Windows::Forms::Label^ lblUsuario;
	private: System::Windows::Forms::Label^ lblcontrasella;
	private: System::Windows::Forms::TextBox^ txtusuario;
	protected:




	private: System::Windows::Forms::TextBox^ txtContrasella;



	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(sergioform::typeid));
			this->btnEntrar = (gcnew System::Windows::Forms::Button());
			this->btnLimpiar = (gcnew System::Windows::Forms::Button());
			this->lblUsuario = (gcnew System::Windows::Forms::Label());
			this->lblcontrasella = (gcnew System::Windows::Forms::Label());
			this->txtusuario = (gcnew System::Windows::Forms::TextBox());
			this->txtContrasella = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// btnEntrar
			// 
			this->btnEntrar->Location = System::Drawing::Point(509, 261);
			this->btnEntrar->Name = L"btnEntrar";
			this->btnEntrar->Size = System::Drawing::Size(77, 41);
			this->btnEntrar->TabIndex = 0;
			this->btnEntrar->Text = L"Entrar";
			this->btnEntrar->UseVisualStyleBackColor = true;
			this->btnEntrar->Click += gcnew System::EventHandler(this, &sergioform::btnEntrar_Click);
			// 
			// btnLimpiar
			// 
			this->btnLimpiar->Location = System::Drawing::Point(641, 261);
			this->btnLimpiar->Name = L"btnLimpiar";
			this->btnLimpiar->Size = System::Drawing::Size(80, 41);
			this->btnLimpiar->TabIndex = 1;
			this->btnLimpiar->Text = L"Limpiar";
			this->btnLimpiar->UseVisualStyleBackColor = true;
			this->btnLimpiar->Click += gcnew System::EventHandler(this, &sergioform::btnLimpiar_Click);
			// 
			// lblUsuario
			// 
			this->lblUsuario->AutoSize = true;
			this->lblUsuario->Location = System::Drawing::Point(509, 124);
			this->lblUsuario->Name = L"lblUsuario";
			this->lblUsuario->Size = System::Drawing::Size(54, 16);
			this->lblUsuario->TabIndex = 2;
			this->lblUsuario->Text = L"Usuario";
			this->lblUsuario->Click += gcnew System::EventHandler(this, &sergioform::label1_Click);
			// 
			// lblcontrasella
			// 
			this->lblcontrasella->AutoSize = true;
			this->lblcontrasella->Location = System::Drawing::Point(506, 192);
			this->lblcontrasella->Name = L"lblcontrasella";
			this->lblcontrasella->Size = System::Drawing::Size(75, 16);
			this->lblcontrasella->TabIndex = 3;
			this->lblcontrasella->Text = L"Contrasella";
			// 
			// txtusuario
			// 
			this->txtusuario->Location = System::Drawing::Point(612, 124);
			this->txtusuario->Name = L"txtusuario";
			this->txtusuario->Size = System::Drawing::Size(109, 22);
			this->txtusuario->TabIndex = 4;
			// 
			// txtContrasella
			// 
			this->txtContrasella->Location = System::Drawing::Point(612, 192);
			this->txtContrasella->Name = L"txtContrasella";
			this->txtContrasella->Size = System::Drawing::Size(109, 22);
			this->txtContrasella->TabIndex = 5;
			// 
			// sergioform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Coral;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(792, 401);
			this->Controls->Add(this->txtContrasella);
			this->Controls->Add(this->txtusuario);
			this->Controls->Add(this->lblcontrasella);
			this->Controls->Add(this->lblUsuario);
			this->Controls->Add(this->btnLimpiar);
			this->Controls->Add(this->btnEntrar);
			this->Name = L"sergioform";
			this->Text = L"sergioform";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &sergioform::sergioform_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void sergioform_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btnEntrar_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ usuario = txtusuario->Text;
	String^ contrasena = txtContrasella->Text;

	// Validación básica de entrada
	if (usuario->Trim()->Length == 0 || contrasena->Trim()->Length == 0)
	{
		MessageBox::Show("Por favor, ingrese el usuario y la contraseña.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// Verificación de credenciales
	String^ usuarioCorrecto = "admin"; // Cambia esto al usuario correcto
	String^ contrasenaCorrecta = "usil"; // Cambia esto a la contraseña correcta

	if (usuario == usuarioCorrecto && contrasena == contrasenaCorrecta)
	{
		MessageBox::Show("Inicio de sesión exitoso.", "Bienvenido", MessageBoxButtons::OK, MessageBoxIcon::Information);
		menu^ m = gcnew menu;
		m->ShowDialog();
	}
	else
	{
		MessageBox::Show("Usuario o contraseña incorrectos. Inténtalo de nuevo.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	// Borra los campos de usuario y contraseña
	txtusuario->Clear();
	txtContrasella->Clear();
}

private: System::Void btnLimpiar_Click(System::Object^ sender, System::EventArgs^ e)
{
	txtusuario->Clear();
	txtContrasella->Clear();
}
};
};
