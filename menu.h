#pragma once
#include "Pedidos.h"
namespace sergioformulario {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de menu
	/// </summary>
	public ref class menu : public System::Windows::Forms::Form
	{
	public:
		menu(void)
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
		~menu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ GESTIONDEPEDIDOS;
	private: System::Windows::Forms::ToolStripMenuItem^ GESTIONDEALAMACEN;
	private: System::Windows::Forms::ToolStripMenuItem^ GESTIONDEVENTAS;
	protected:





	protected:





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(menu::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->GESTIONDEPEDIDOS = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->GESTIONDEALAMACEN = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->GESTIONDEVENTAS = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->GESTIONDEPEDIDOS,
					this->GESTIONDEALAMACEN, this->GESTIONDEVENTAS
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(980, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// GESTIONDEPEDIDOS
			// 
			this->GESTIONDEPEDIDOS->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"GESTIONDEPEDIDOS.Image")));
			this->GESTIONDEPEDIDOS->Name = L"GESTIONDEPEDIDOS";
			this->GESTIONDEPEDIDOS->Size = System::Drawing::Size(191, 24);
			this->GESTIONDEPEDIDOS->Text = L"GESTION DE PEDIDOS";
			this->GESTIONDEPEDIDOS->Click += gcnew System::EventHandler(this, &menu::GESTIONDEPEDIDOSToolStripMenuItem_Click);
			// 
			// GESTIONDEALAMACEN
			// 
			this->GESTIONDEALAMACEN->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"GESTIONDEALAMACEN.Image")));
			this->GESTIONDEALAMACEN->Name = L"GESTIONDEALAMACEN";
			this->GESTIONDEALAMACEN->Size = System::Drawing::Size(198, 24);
			this->GESTIONDEALAMACEN->Text = L"GESTION DE ALMACEN";
			this->GESTIONDEALAMACEN->Click += gcnew System::EventHandler(this, &menu::GESTIONDEALAMACEN_Click);
			// 
			// GESTIONDEVENTAS
			// 
			this->GESTIONDEVENTAS->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"GESTIONDEVENTAS.Image")));
			this->GESTIONDEVENTAS->Name = L"GESTIONDEVENTAS";
			this->GESTIONDEVENTAS->Size = System::Drawing::Size(183, 24);
			this->GESTIONDEVENTAS->Text = L"GESTION DE VENTAS";
			// 
			// menu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(980, 545);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"menu";
			this->Text = L"GESTION DE PEDIDOS";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &menu::menu_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void toolStripButton1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void toolStripLabel1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void GESTIONDEPEDIDOSToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Pedidos^ m = gcnew Pedidos;
		m->ShowDialog();
	}
private: System::Void menu_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void GESTIONDEALAMACEN_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
