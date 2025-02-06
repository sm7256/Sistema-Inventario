#pragma once
#include "DB.h"

namespace sergioformulario {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Pedidos
	/// </summary>
	public ref class Pedidos : public System::Windows::Forms::Form
	{
	public:
		Pedidos(void)
		{
			InitializeComponent();
			this->data = gcnew DB();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Pedidos()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblRegistrarPedidos;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txtFecha;
	private: System::Windows::Forms::ComboBox^ cmbPlatodefondo;
	private: System::Windows::Forms::ComboBox^ cmbBebida;



	private: System::Windows::Forms::TextBox^ txtCliente;
	private: System::Windows::Forms::ComboBox^ cmbPostre;



	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txtPrecio;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ txtpre;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ txtprec;

	private: System::Windows::Forms::Button^ btnRegistrar;
	private: System::Windows::Forms::Button^ btnLimpiar;


	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: DB^ data;


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
			this->lblRegistrarPedidos = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtFecha = (gcnew System::Windows::Forms::TextBox());
			this->cmbPlatodefondo = (gcnew System::Windows::Forms::ComboBox());
			this->cmbBebida = (gcnew System::Windows::Forms::ComboBox());
			this->txtCliente = (gcnew System::Windows::Forms::TextBox());
			this->cmbPostre = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtPrecio = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtpre = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txtprec = (gcnew System::Windows::Forms::TextBox());
			this->btnRegistrar = (gcnew System::Windows::Forms::Button());
			this->btnLimpiar = (gcnew System::Windows::Forms::Button());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// lblRegistrarPedidos
			// 
			this->lblRegistrarPedidos->AutoSize = true;
			this->lblRegistrarPedidos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblRegistrarPedidos->Location = System::Drawing::Point(12, 25);
			this->lblRegistrarPedidos->Name = L"lblRegistrarPedidos";
			this->lblRegistrarPedidos->Size = System::Drawing::Size(180, 25);
			this->lblRegistrarPedidos->TabIndex = 0;
			this->lblRegistrarPedidos->Text = L"Registrar pedidos";
			this->lblRegistrarPedidos->Click += gcnew System::EventHandler(this, &Pedidos::label1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(15, 84);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(48, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Fecha:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 133);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Cliente:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(1, 179);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(102, 16);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Plato de Fondo:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(1, 228);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(54, 16);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Bebida:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(1, 267);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(49, 16);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Postre:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(2, 297);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(48, 16);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Total:$";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(2, 407);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(103, 16);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Forma de pago:";
			// 
			// txtFecha
			// 
			this->txtFecha->Location = System::Drawing::Point(94, 78);
			this->txtFecha->Name = L"txtFecha";
			this->txtFecha->Size = System::Drawing::Size(185, 22);
			this->txtFecha->TabIndex = 9;
			// 
			// cmbPlatodefondo
			// 
			this->cmbPlatodefondo->FormattingEnabled = true;
			this->cmbPlatodefondo->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Pollo entero", L"Pollo a la braza", L"Papas fritas" });
			this->cmbPlatodefondo->Location = System::Drawing::Point(109, 171);
			this->cmbPlatodefondo->Name = L"cmbPlatodefondo";
			this->cmbPlatodefondo->Size = System::Drawing::Size(179, 24);
			this->cmbPlatodefondo->TabIndex = 11;
			this->cmbPlatodefondo->SelectedIndexChanged += gcnew System::EventHandler(this, &Pedidos::cmbPlatodefondo_SelectedIndexChanged);
			// 
			// cmbBebida
			// 
			this->cmbBebida->FormattingEnabled = true;
			this->cmbBebida->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Gaseosa", L"Coptel", L"Limonada" });
			this->cmbBebida->Location = System::Drawing::Point(109, 220);
			this->cmbBebida->Name = L"cmbBebida";
			this->cmbBebida->Size = System::Drawing::Size(179, 24);
			this->cmbBebida->TabIndex = 12;
			// 
			// txtCliente
			// 
			this->txtCliente->Location = System::Drawing::Point(94, 127);
			this->txtCliente->Name = L"txtCliente";
			this->txtCliente->Size = System::Drawing::Size(185, 22);
			this->txtCliente->TabIndex = 13;
			// 
			// cmbPostre
			// 
			this->cmbPostre->FormattingEnabled = true;
			this->cmbPostre->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Torta Helada", L"Torta De Chocolate", L"Masamora" });
			this->cmbPostre->Location = System::Drawing::Point(109, 259);
			this->cmbPostre->Name = L"cmbPostre";
			this->cmbPostre->Size = System::Drawing::Size(179, 24);
			this->cmbPostre->TabIndex = 14;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(364, 174);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(56, 16);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Precio:$";
			// 
			// txtPrecio
			// 
			this->txtPrecio->Location = System::Drawing::Point(452, 168);
			this->txtPrecio->Name = L"txtPrecio";
			this->txtPrecio->Size = System::Drawing::Size(157, 22);
			this->txtPrecio->TabIndex = 17;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(360, 221);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(56, 16);
			this->label9->TabIndex = 18;
			this->label9->Text = L"Precio:$";
			// 
			// txtpre
			// 
			this->txtpre->Location = System::Drawing::Point(452, 221);
			this->txtpre->Name = L"txtpre";
			this->txtpre->Size = System::Drawing::Size(157, 22);
			this->txtpre->TabIndex = 19;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(360, 267);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(56, 16);
			this->label10->TabIndex = 20;
			this->label10->Text = L"Precio:$";
			// 
			// txtprec
			// 
			this->txtprec->Location = System::Drawing::Point(452, 267);
			this->txtprec->Name = L"txtprec";
			this->txtprec->Size = System::Drawing::Size(157, 22);
			this->txtprec->TabIndex = 21;
			// 
			// btnRegistrar
			// 
			this->btnRegistrar->Location = System::Drawing::Point(100, 490);
			this->btnRegistrar->Name = L"btnRegistrar";
			this->btnRegistrar->Size = System::Drawing::Size(106, 38);
			this->btnRegistrar->TabIndex = 22;
			this->btnRegistrar->Text = L"Registrar";
			this->btnRegistrar->UseVisualStyleBackColor = true;
			this->btnRegistrar->Click += gcnew System::EventHandler(this, &Pedidos::btnRegistrar_Click);
			// 
			// btnLimpiar
			// 
			this->btnLimpiar->Location = System::Drawing::Point(317, 485);
			this->btnLimpiar->Name = L"btnLimpiar";
			this->btnLimpiar->Size = System::Drawing::Size(103, 43);
			this->btnLimpiar->TabIndex = 23;
			this->btnLimpiar->Text = L"Limpiar";
			this->btnLimpiar->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(143, 407);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(76, 20);
			this->radioButton1->TabIndex = 25;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Efectivo";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(255, 407);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(71, 20);
			this->radioButton2->TabIndex = 26;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Tarjeta";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(109, 310);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(179, 22);
			this->textBox1->TabIndex = 27;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(294, 171);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(41, 22);
			this->textBox2->TabIndex = 28;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(294, 222);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(41, 22);
			this->textBox3->TabIndex = 29;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(294, 264);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(41, 22);
			this->textBox4->TabIndex = 30;
			// 
			// Pedidos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(639, 674);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->btnLimpiar);
			this->Controls->Add(this->btnRegistrar);
			this->Controls->Add(this->txtprec);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->txtpre);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->txtPrecio);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->cmbPostre);
			this->Controls->Add(this->txtCliente);
			this->Controls->Add(this->cmbBebida);
			this->Controls->Add(this->cmbPlatodefondo);
			this->Controls->Add(this->txtFecha);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lblRegistrarPedidos);
			this->Name = L"Pedidos";
			this->Load += gcnew System::EventHandler(this, &Pedidos::Pedidos_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Pedidos_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btnRegistrar_Click(System::Object^ sender, System::EventArgs^ e) {
	this->data->AbrirConexion();
	String^ client2;
	client2 = this->txtCliente->Text;
	String^ bebida;
	bebida = this->cmbBebida->Text;
	String^ plato;
	plato = this->cmbPlatodefondo->Text;
	String^ postre;
	postre = this->cmbPostre->Text;
	float total;
	/*total = std::stof(this->textBox1->Text);*/
	total = 100;
	/*float num_float = std::stof(str);*/
	String^ forma;
	/*forma = this->radioButton1->Text;*/
	forma = "efectivo";
	String^ fecha;
	fecha = this->txtFecha->Text;
	
	this->data->Insertar(1,client2,plato, bebida,postre,total,forma,fecha);
	String^ s = "pedido registrado";
	MessageBox::Show(s);
	this->data->CerrarConexion();

}
private: System::Void cmbPlatodefondo_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
