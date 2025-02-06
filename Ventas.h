#pragma once

namespace sergioformulario {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Ventas
	/// </summary>
	public ref class Ventas : public System::Windows::Forms::Form
	{
	public:
		Ventas(void)
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
		~Ventas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Button^ btnComprobante;
	private: System::Windows::Forms::Button^ btnEliminar;
	private: System::Windows::Forms::Button^ btnBuscar;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Eliminar;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ txtIdventa;
	private: System::Windows::Forms::Label^ lblTotal_Pagado;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::DataGridView^ DataListadoDetalle;
	private: System::Windows::Forms::TextBox^ txtIdarticulo;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ txtStock_actual;
	private: System::Windows::Forms::Button^ btnQuitar;
	private: System::Windows::Forms::Button^ btnAgregar;
	private: System::Windows::Forms::DateTimePicker^ dtFecha_Vencimiento;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ txtPrecio_Venta;
	private: System::Windows::Forms::Label^ lblPrecioVenta;
	private: System::Windows::Forms::TextBox^ txtPrecioCompra;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtArticulo;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btnBuscarArticulo;
	private: System::Windows::Forms::TextBox^ txtDescuento;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ txtCantidad;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtIgv;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ txtCorrelativo;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::ComboBox^ cbTipo_Comprobante;
	private: System::Windows::Forms::DateTimePicker^ dtFecha;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ btnBuscarCliente;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txtCliente;
	private: System::Windows::Forms::TextBox^ txtIdcliente;
	private: System::Windows::Forms::TextBox^ txtSerie;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ btnCancelar;
	private: System::Windows::Forms::Button^ btnGuardar;
	private: System::Windows::Forms::Button^ btnNuevo;




















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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Ventas::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->btnComprobante = (gcnew System::Windows::Forms::Button());
			this->btnEliminar = (gcnew System::Windows::Forms::Button());
			this->btnBuscar = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Eliminar = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->txtIdventa = (gcnew System::Windows::Forms::TextBox());
			this->lblTotal_Pagado = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->DataListadoDetalle = (gcnew System::Windows::Forms::DataGridView());
			this->txtIdarticulo = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->txtStock_actual = (gcnew System::Windows::Forms::TextBox());
			this->btnQuitar = (gcnew System::Windows::Forms::Button());
			this->btnAgregar = (gcnew System::Windows::Forms::Button());
			this->dtFecha_Vencimiento = (gcnew System::Windows::Forms::DateTimePicker());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->txtPrecio_Venta = (gcnew System::Windows::Forms::TextBox());
			this->lblPrecioVenta = (gcnew System::Windows::Forms::Label());
			this->txtPrecioCompra = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtArticulo = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btnBuscarArticulo = (gcnew System::Windows::Forms::Button());
			this->txtDescuento = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->txtCantidad = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtIgv = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->txtCorrelativo = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->cbTipo_Comprobante = (gcnew System::Windows::Forms::ComboBox());
			this->dtFecha = (gcnew System::Windows::Forms::DateTimePicker());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->btnBuscarCliente = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtCliente = (gcnew System::Windows::Forms::TextBox());
			this->txtIdcliente = (gcnew System::Windows::Forms::TextBox());
			this->txtSerie = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->btnCancelar = (gcnew System::Windows::Forms::Button());
			this->btnGuardar = (gcnew System::Windows::Forms::Button());
			this->btnNuevo = (gcnew System::Windows::Forms::Button());
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataListadoDetalle))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(195, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Registro de Ventas";
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->btnComprobante);
			this->tabPage1->Controls->Add(this->btnEliminar);
			this->tabPage1->Controls->Add(this->btnBuscar);
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Controls->Add(this->checkBox1);
			this->tabPage1->Controls->Add(this->dateTimePicker2);
			this->tabPage1->Controls->Add(this->dateTimePicker1);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1111, 496);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Listado";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &Ventas::tabPage1_Click);
			// 
			// btnComprobante
			// 
			this->btnComprobante->Location = System::Drawing::Point(877, 65);
			this->btnComprobante->Name = L"btnComprobante";
			this->btnComprobante->Size = System::Drawing::Size(101, 34);
			this->btnComprobante->TabIndex = 8;
			this->btnComprobante->Text = L"Comprobante";
			this->btnComprobante->UseVisualStyleBackColor = true;
			// 
			// btnEliminar
			// 
			this->btnEliminar->Location = System::Drawing::Point(740, 65);
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(81, 34);
			this->btnEliminar->TabIndex = 7;
			this->btnEliminar->Text = L"Eliminar";
			this->btnEliminar->UseVisualStyleBackColor = true;
			// 
			// btnBuscar
			// 
			this->btnBuscar->Location = System::Drawing::Point(595, 65);
			this->btnBuscar->Name = L"btnBuscar";
			this->btnBuscar->Size = System::Drawing::Size(82, 34);
			this->btnBuscar->TabIndex = 6;
			this->btnBuscar->Text = L"Buscar";
			this->btnBuscar->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Eliminar });
			this->dataGridView1->Location = System::Drawing::Point(7, 149);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1095, 295);
			this->dataGridView1->TabIndex = 5;
			// 
			// Eliminar
			// 
			this->Eliminar->HeaderText = L"Eliminar";
			this->Eliminar->MinimumWidth = 6;
			this->Eliminar->Name = L"Eliminar";
			this->Eliminar->Width = 125;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(15, 107);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(77, 20);
			this->checkBox1->TabIndex = 4;
			this->checkBox1->Text = L"Eliminar";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point(299, 65);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(237, 22);
			this->dateTimePicker2->TabIndex = 3;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(15, 65);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(237, 22);
			this->dateTimePicker1->TabIndex = 2;
			this->dateTimePicker1->Value = System::DateTime(2024, 5, 25, 0, 0, 0, 0);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(307, 30);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(91, 16);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Fecha  de Fin:";
			this->label3->Click += gcnew System::EventHandler(this, &Ventas::label3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(23, 30);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(101, 16);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Fecha de inicio:";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(17, 53);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1119, 525);
			this->tabControl1->TabIndex = 1;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->groupBox1);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1111, 496);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Mantenimineto";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->txtIdventa);
			this->groupBox1->Controls->Add(this->lblTotal_Pagado);
			this->groupBox1->Controls->Add(this->label15);
			this->groupBox1->Controls->Add(this->label14);
			this->groupBox1->Controls->Add(this->DataListadoDetalle);
			this->groupBox1->Controls->Add(this->txtIdarticulo);
			this->groupBox1->Controls->Add(this->groupBox2);
			this->groupBox1->Controls->Add(this->txtIgv);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->txtCorrelativo);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->cbTipo_Comprobante);
			this->groupBox1->Controls->Add(this->dtFecha);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->btnBuscarCliente);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->txtCliente);
			this->groupBox1->Controls->Add(this->txtIdcliente);
			this->groupBox1->Controls->Add(this->txtSerie);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->btnCancelar);
			this->groupBox1->Controls->Add(this->btnGuardar);
			this->groupBox1->Controls->Add(this->btnNuevo);
			this->groupBox1->Location = System::Drawing::Point(15, 7);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(1081, 482);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Ventas";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &Ventas::groupBox1_Enter);
			// 
			// txtIdventa
			// 
			this->txtIdventa->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->txtIdventa->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtIdventa->Location = System::Drawing::Point(93, 65);
			this->txtIdventa->Margin = System::Windows::Forms::Padding(4);
			this->txtIdventa->Name = L"txtIdventa";
			this->txtIdventa->Size = System::Drawing::Size(133, 22);
			this->txtIdventa->TabIndex = 38;
			// 
			// lblTotal_Pagado
			// 
			this->lblTotal_Pagado->AutoSize = true;
			this->lblTotal_Pagado->Location = System::Drawing::Point(139, 453);
			this->lblTotal_Pagado->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblTotal_Pagado->Name = L"lblTotal_Pagado";
			this->lblTotal_Pagado->Size = System::Drawing::Size(24, 16);
			this->lblTotal_Pagado->TabIndex = 37;
			this->lblTotal_Pagado->Text = L"0.0";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(8, 453);
			this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(112, 16);
			this->label15->TabIndex = 36;
			this->label15->Text = L"Total Pagado: S/.";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(28, 68);
			this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(54, 16);
			this->label14->TabIndex = 31;
			this->label14->Text = L"Código:";
			// 
			// DataListadoDetalle
			// 
			this->DataListadoDetalle->AllowUserToAddRows = false;
			this->DataListadoDetalle->AllowUserToDeleteRows = false;
			this->DataListadoDetalle->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DataListadoDetalle->Location = System::Drawing::Point(9, 284);
			this->DataListadoDetalle->Margin = System::Windows::Forms::Padding(4);
			this->DataListadoDetalle->Name = L"DataListadoDetalle";
			this->DataListadoDetalle->RowHeadersWidth = 51;
			this->DataListadoDetalle->Size = System::Drawing::Size(1064, 155);
			this->DataListadoDetalle->TabIndex = 30;
			// 
			// txtIdarticulo
			// 
			this->txtIdarticulo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->txtIdarticulo->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtIdarticulo->Location = System::Drawing::Point(28, 151);
			this->txtIdarticulo->Margin = System::Windows::Forms::Padding(4);
			this->txtIdarticulo->Name = L"txtIdarticulo";
			this->txtIdarticulo->Size = System::Drawing::Size(85, 22);
			this->txtIdarticulo->TabIndex = 15;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->txtStock_actual);
			this->groupBox2->Controls->Add(this->btnQuitar);
			this->groupBox2->Controls->Add(this->btnAgregar);
			this->groupBox2->Controls->Add(this->dtFecha_Vencimiento);
			this->groupBox2->Controls->Add(this->label13);
			this->groupBox2->Controls->Add(this->txtPrecio_Venta);
			this->groupBox2->Controls->Add(this->lblPrecioVenta);
			this->groupBox2->Controls->Add(this->txtPrecioCompra);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->txtArticulo);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->btnBuscarArticulo);
			this->groupBox2->Controls->Add(this->txtDescuento);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->txtCantidad);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Location = System::Drawing::Point(9, 171);
			this->groupBox2->Margin = System::Windows::Forms::Padding(4);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(4);
			this->groupBox2->Size = System::Drawing::Size(1064, 105);
			this->groupBox2->TabIndex = 29;
			this->groupBox2->TabStop = false;
			// 
			// txtStock_actual
			// 
			this->txtStock_actual->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->txtStock_actual->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtStock_actual->Location = System::Drawing::Point(200, 54);
			this->txtStock_actual->Margin = System::Windows::Forms::Padding(4);
			this->txtStock_actual->Name = L"txtStock_actual";
			this->txtStock_actual->Size = System::Drawing::Size(93, 22);
			this->txtStock_actual->TabIndex = 36;
			// 
			// btnQuitar
			// 
			this->btnQuitar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnQuitar->Location = System::Drawing::Point(964, 54);
			this->btnQuitar->Margin = System::Windows::Forms::Padding(4);
			this->btnQuitar->Name = L"btnQuitar";
			this->btnQuitar->Size = System::Drawing::Size(67, 28);
			this->btnQuitar->TabIndex = 35;
			this->btnQuitar->UseVisualStyleBackColor = true;
			// 
			// btnAgregar
			// 
			this->btnAgregar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnAgregar->Location = System::Drawing::Point(964, 18);
			this->btnAgregar->Margin = System::Windows::Forms::Padding(4);
			this->btnAgregar->Name = L"btnAgregar";
			this->btnAgregar->Size = System::Drawing::Size(67, 28);
			this->btnAgregar->TabIndex = 34;
			this->btnAgregar->UseVisualStyleBackColor = true;
			// 
			// dtFecha_Vencimiento
			// 
			this->dtFecha_Vencimiento->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtFecha_Vencimiento->Location = System::Drawing::Point(827, 20);
			this->dtFecha_Vencimiento->Margin = System::Windows::Forms::Padding(4);
			this->dtFecha_Vencimiento->Name = L"dtFecha_Vencimiento";
			this->dtFecha_Vencimiento->Size = System::Drawing::Size(128, 22);
			this->dtFecha_Vencimiento->TabIndex = 33;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(671, 25);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(144, 16);
			this->label13->TabIndex = 32;
			this->label13->Text = L"Fecha de Vencimiento:";
			// 
			// txtPrecio_Venta
			// 
			this->txtPrecio_Venta->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->txtPrecio_Venta->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtPrecio_Venta->Location = System::Drawing::Point(480, 50);
			this->txtPrecio_Venta->Margin = System::Windows::Forms::Padding(4);
			this->txtPrecio_Venta->Name = L"txtPrecio_Venta";
			this->txtPrecio_Venta->Size = System::Drawing::Size(171, 22);
			this->txtPrecio_Venta->TabIndex = 23;
			// 
			// lblPrecioVenta
			// 
			this->lblPrecioVenta->AutoSize = true;
			this->lblPrecioVenta->Location = System::Drawing::Point(357, 53);
			this->lblPrecioVenta->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblPrecioVenta->Name = L"lblPrecioVenta";
			this->lblPrecioVenta->Size = System::Drawing::Size(106, 16);
			this->lblPrecioVenta->TabIndex = 22;
			this->lblPrecioVenta->Text = L"Precio de Venta:";
			// 
			// txtPrecioCompra
			// 
			this->txtPrecioCompra->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->txtPrecioCompra->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtPrecioCompra->Location = System::Drawing::Point(471, 18);
			this->txtPrecioCompra->Margin = System::Windows::Forms::Padding(4);
			this->txtPrecioCompra->Name = L"txtPrecioCompra";
			this->txtPrecioCompra->Size = System::Drawing::Size(181, 22);
			this->txtPrecioCompra->TabIndex = 21;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(357, 21);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(100, 16);
			this->label5->TabIndex = 20;
			this->label5->Text = L"Precio Compra:";
			// 
			// txtArticulo
			// 
			this->txtArticulo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->txtArticulo->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtArticulo->Location = System::Drawing::Point(112, 23);
			this->txtArticulo->Margin = System::Windows::Forms::Padding(4);
			this->txtArticulo->Name = L"txtArticulo";
			this->txtArticulo->Size = System::Drawing::Size(181, 22);
			this->txtArticulo->TabIndex = 16;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 27);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(54, 16);
			this->label4->TabIndex = 18;
			this->label4->Text = L"Artículo:";
			// 
			// btnBuscarArticulo
			// 
			this->btnBuscarArticulo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnBuscarArticulo.BackgroundImage")));
			this->btnBuscarArticulo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnBuscarArticulo->Location = System::Drawing::Point(301, 14);
			this->btnBuscarArticulo->Margin = System::Windows::Forms::Padding(4);
			this->btnBuscarArticulo->Name = L"btnBuscarArticulo";
			this->btnBuscarArticulo->Size = System::Drawing::Size(43, 39);
			this->btnBuscarArticulo->TabIndex = 19;
			this->btnBuscarArticulo->UseVisualStyleBackColor = true;
			// 
			// txtDescuento
			// 
			this->txtDescuento->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->txtDescuento->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtDescuento->Location = System::Drawing::Point(761, 55);
			this->txtDescuento->Margin = System::Windows::Forms::Padding(4);
			this->txtDescuento->Name = L"txtDescuento";
			this->txtDescuento->Size = System::Drawing::Size(194, 22);
			this->txtDescuento->TabIndex = 3;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(671, 55);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(75, 16);
			this->label12->TabIndex = 0;
			this->label12->Text = L"Descuento:";
			// 
			// txtCantidad
			// 
			this->txtCantidad->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->txtCantidad->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtCantidad->Location = System::Drawing::Point(112, 55);
			this->txtCantidad->Margin = System::Windows::Forms::Padding(4);
			this->txtCantidad->Name = L"txtCantidad";
			this->txtCantidad->Size = System::Drawing::Size(79, 22);
			this->txtCantidad->TabIndex = 3;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(13, 58);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(64, 16);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Cantidad:";
			// 
			// txtIgv
			// 
			this->txtIgv->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->txtIgv->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtIgv->Location = System::Drawing::Point(668, 122);
			this->txtIgv->Margin = System::Windows::Forms::Padding(4);
			this->txtIgv->Name = L"txtIgv";
			this->txtIgv->Size = System::Drawing::Size(122, 22);
			this->txtIgv->TabIndex = 28;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(623, 124);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(32, 16);
			this->label11->TabIndex = 27;
			this->label11->Text = L"IGV:";
			// 
			// txtCorrelativo
			// 
			this->txtCorrelativo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->txtCorrelativo->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtCorrelativo->Location = System::Drawing::Point(479, 122);
			this->txtCorrelativo->Margin = System::Windows::Forms::Padding(4);
			this->txtCorrelativo->Name = L"txtCorrelativo";
			this->txtCorrelativo->Size = System::Drawing::Size(122, 22);
			this->txtCorrelativo->TabIndex = 26;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(315, 124);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(58, 16);
			this->label9->TabIndex = 25;
			this->label9->Text = L"Número:";
			// 
			// cbTipo_Comprobante
			// 
			this->cbTipo_Comprobante->FormattingEnabled = true;
			this->cbTipo_Comprobante->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"TICKET", L"BOLETA", L"FACTURA", L"GUIA REMISION" });
			this->cbTipo_Comprobante->Location = System::Drawing::Point(141, 121);
			this->cbTipo_Comprobante->Margin = System::Windows::Forms::Padding(4);
			this->cbTipo_Comprobante->Name = L"cbTipo_Comprobante";
			this->cbTipo_Comprobante->Size = System::Drawing::Size(160, 24);
			this->cbTipo_Comprobante->TabIndex = 24;
			this->cbTipo_Comprobante->Text = L"TICKET";
			// 
			// dtFecha
			// 
			this->dtFecha->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtFecha->Location = System::Drawing::Point(684, 64);
			this->dtFecha->Margin = System::Windows::Forms::Padding(4);
			this->dtFecha->Name = L"dtFecha";
			this->dtFecha->Size = System::Drawing::Size(163, 22);
			this->dtFecha->TabIndex = 23;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(623, 68);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(48, 16);
			this->label10->TabIndex = 22;
			this->label10->Text = L"Fecha:";
			// 
			// btnBuscarCliente
			// 
			this->btnBuscarCliente->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnBuscarCliente.BackgroundImage")));
			this->btnBuscarCliente->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnBuscarCliente->Location = System::Drawing::Point(559, 54);
			this->btnBuscarCliente->Margin = System::Windows::Forms::Padding(4);
			this->btnBuscarCliente->Name = L"btnBuscarCliente";
			this->btnBuscarCliente->Size = System::Drawing::Size(43, 39);
			this->btnBuscarCliente->TabIndex = 19;
			this->btnBuscarCliente->UseVisualStyleBackColor = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(283, 68);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(51, 16);
			this->label8->TabIndex = 18;
			this->label8->Text = L"Cliente:";
			// 
			// txtCliente
			// 
			this->txtCliente->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->txtCliente->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtCliente->Location = System::Drawing::Point(369, 64);
			this->txtCliente->Margin = System::Windows::Forms::Padding(4);
			this->txtCliente->Name = L"txtCliente";
			this->txtCliente->Size = System::Drawing::Size(181, 22);
			this->txtCliente->TabIndex = 16;
			// 
			// txtIdcliente
			// 
			this->txtIdcliente->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->txtIdcliente->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtIdcliente->Location = System::Drawing::Point(369, 23);
			this->txtIdcliente->Margin = System::Windows::Forms::Padding(4);
			this->txtIdcliente->Name = L"txtIdcliente";
			this->txtIdcliente->Size = System::Drawing::Size(133, 22);
			this->txtIdcliente->TabIndex = 15;
			// 
			// txtSerie
			// 
			this->txtSerie->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->txtSerie->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtSerie->Location = System::Drawing::Point(385, 124);
			this->txtSerie->Margin = System::Windows::Forms::Padding(4);
			this->txtSerie->Name = L"txtSerie";
			this->txtSerie->Size = System::Drawing::Size(85, 22);
			this->txtSerie->TabIndex = 11;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(28, 121);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(92, 16);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Comprobante:";
			// 
			// btnCancelar
			// 
			this->btnCancelar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnCancelar->Location = System::Drawing::Point(588, 447);
			this->btnCancelar->Margin = System::Windows::Forms::Padding(4);
			this->btnCancelar->Name = L"btnCancelar";
			this->btnCancelar->Size = System::Drawing::Size(100, 28);
			this->btnCancelar->TabIndex = 9;
			this->btnCancelar->Text = L"&Cancelar";
			this->btnCancelar->UseVisualStyleBackColor = false;
			// 
			// btnGuardar
			// 
			this->btnGuardar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnGuardar->Location = System::Drawing::Point(480, 447);
			this->btnGuardar->Margin = System::Windows::Forms::Padding(4);
			this->btnGuardar->Name = L"btnGuardar";
			this->btnGuardar->Size = System::Drawing::Size(100, 28);
			this->btnGuardar->TabIndex = 7;
			this->btnGuardar->Text = L"&Guardar";
			this->btnGuardar->UseVisualStyleBackColor = false;
			// 
			// btnNuevo
			// 
			this->btnNuevo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnNuevo->Location = System::Drawing::Point(372, 447);
			this->btnNuevo->Margin = System::Windows::Forms::Padding(4);
			this->btnNuevo->Name = L"btnNuevo";
			this->btnNuevo->Size = System::Drawing::Size(100, 28);
			this->btnNuevo->TabIndex = 6;
			this->btnNuevo->Text = L"&Nuevo";
			this->btnNuevo->UseVisualStyleBackColor = false;
			// 
			// Ventas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1158, 569);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->label1);
			this->Name = L"Ventas";
			this->Text = L"Ventas";
			this->Load += gcnew System::EventHandler(this, &Ventas::Ventas_Load);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataListadoDetalle))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Ventas_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void monthCalendar1_DateChanged(System::Object^ sender, System::Windows::Forms::DateRangeEventArgs^ e) {
}
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
};
}
