#pragma once
#include "Style.h"
#include "DB.h"
using namespace System::Text::RegularExpressions;

namespace SysGUI {

	using namespace System::Data;
	using namespace MySql::Data::MySqlClient;

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Servicios
	/// </summary>
	public ref class Servicios : public System::Windows::Forms::Form
	{
	public:
		Servicios(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			Style::PersonalizarPanelConDegradado(panel1);
			//Style::PersonalizarBoton3(btn);
			Style::PersonalizarBoton4(add_btn);
			Style::PersonalizarBoton4(del_btn);
			Style::PersonalizarBoton4(clean_btn);
			Style::PersonalizarBoton4(update_btn);
			Style::PersonalizarDataGridView(dataGridView1);


			dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->CellDoubleClick += gcnew DataGridViewCellEventHandler(this, &Servicios::dataGridView1_CellDoubleClick);
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Servicios()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ clean_btn;
	private: System::Windows::Forms::Button^ del_btn;
	private: System::Windows::Forms::Button^ update_btn;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ price_serv;
	private: System::Windows::Forms::TextBox^ hora;











	private: System::Windows::Forms::Button^ add_btn;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ NOmm;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btn;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::RichTextBox^ desc_serv;
	private: System::Windows::Forms::TextBox^ name_srv;
	private: System::Windows::Forms::PictureBox^ pictureBox1;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Servicios::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->clean_btn = (gcnew System::Windows::Forms::Button());
			this->del_btn = (gcnew System::Windows::Forms::Button());
			this->update_btn = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->price_serv = (gcnew System::Windows::Forms::TextBox());
			this->hora = (gcnew System::Windows::Forms::TextBox());
			this->add_btn = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->NOmm = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btn = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->desc_serv = (gcnew System::Windows::Forms::RichTextBox());
			this->name_srv = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Open Sans Semibold", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(16, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(211, 60);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Servicios";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Transparent;
			this->button1->Location = System::Drawing::Point(1069, 24);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(90, 39);
			this->button1->TabIndex = 0;
			this->button1->Text = L"✕";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Servicios::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Transparent;
			this->button2->Location = System::Drawing::Point(985, 24);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(63, 39);
			this->button2->TabIndex = 1;
			this->button2->Text = L"—";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Servicios::button2_Click);
			// 
			// clean_btn
			// 
			this->clean_btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"clean_btn.BackgroundImage")));
			this->clean_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->clean_btn->Location = System::Drawing::Point(939, 649);
			this->clean_btn->Name = L"clean_btn";
			this->clean_btn->Size = System::Drawing::Size(168, 49);
			this->clean_btn->TabIndex = 64;
			this->clean_btn->UseVisualStyleBackColor = true;
			this->clean_btn->Click += gcnew System::EventHandler(this, &Servicios::clean_btn_Click);
			// 
			// del_btn
			// 
			this->del_btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"del_btn.BackgroundImage")));
			this->del_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->del_btn->Location = System::Drawing::Point(645, 649);
			this->del_btn->Name = L"del_btn";
			this->del_btn->Size = System::Drawing::Size(154, 49);
			this->del_btn->TabIndex = 63;
			this->del_btn->UseVisualStyleBackColor = true;
			this->del_btn->Click += gcnew System::EventHandler(this, &Servicios::del_btn_Click);
			// 
			// update_btn
			// 
			this->update_btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"update_btn.BackgroundImage")));
			this->update_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->update_btn->Location = System::Drawing::Point(338, 649);
			this->update_btn->Name = L"update_btn";
			this->update_btn->Size = System::Drawing::Size(176, 49);
			this->update_btn->TabIndex = 62;
			this->update_btn->UseVisualStyleBackColor = true;
			this->update_btn->Click += gcnew System::EventHandler(this, &Servicios::update_btn_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(715, 154);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(449, 455);
			this->dataGridView1->TabIndex = 60;
			// 
			// price_serv
			// 
			this->price_serv->BackColor = System::Drawing::Color::WhiteSmoke;
			this->price_serv->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->price_serv->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->price_serv->Location = System::Drawing::Point(254, 404);
			this->price_serv->Multiline = true;
			this->price_serv->Name = L"price_serv";
			this->price_serv->Size = System::Drawing::Size(385, 23);
			this->price_serv->TabIndex = 56;
			this->price_serv->TextChanged += gcnew System::EventHandler(this, &Servicios::price_serv_TextChanged);
			// 
			// hora
			// 
			this->hora->BackColor = System::Drawing::Color::LightGray;
			this->hora->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->hora->Enabled = false;
			this->hora->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->hora->Location = System::Drawing::Point(254, 216);
			this->hora->Name = L"hora";
			this->hora->Size = System::Drawing::Size(385, 23);
			this->hora->TabIndex = 53;
			this->hora->TextChanged += gcnew System::EventHandler(this, &Servicios::hora_txt_TextChanged);
			// 
			// add_btn
			// 
			this->add_btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"add_btn.BackgroundImage")));
			this->add_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->add_btn->Location = System::Drawing::Point(57, 649);
			this->add_btn->Name = L"add_btn";
			this->add_btn->Size = System::Drawing::Size(154, 49);
			this->add_btn->TabIndex = 52;
			this->add_btn->UseVisualStyleBackColor = true;
			this->add_btn->Click += gcnew System::EventHandler(this, &Servicios::add_btn_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Open Sans Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(36, 400);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(78, 27);
			this->label5->TabIndex = 48;
			this->label5->Text = L"Precio:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Open Sans Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(36, 505);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(132, 27);
			this->label4->TabIndex = 47;
			this->label4->Text = L"Descripción:";
			// 
			// NOmm
			// 
			this->NOmm->AutoSize = true;
			this->NOmm->Font = (gcnew System::Drawing::Font(L"Open Sans Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NOmm->Location = System::Drawing::Point(34, 306);
			this->NOmm->Name = L"NOmm";
			this->NOmm->Size = System::Drawing::Size(213, 27);
			this->NOmm->TabIndex = 46;
			this->NOmm->Text = L"Nombre del servicio:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Open Sans Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(36, 215);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(120, 27);
			this->label2->TabIndex = 45;
			this->label2->Text = L"ID Servicio:";
			this->label2->Click += gcnew System::EventHandler(this, &Servicios::label2_Click);
			// 
			// btn
			// 
			this->btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn.BackgroundImage")));
			this->btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->btn->Location = System::Drawing::Point(36, 122);
			this->btn->Name = L"btn";
			this->btn->Size = System::Drawing::Size(86, 76);
			this->btn->TabIndex = 44;
			this->btn->UseVisualStyleBackColor = true;
			this->btn->Click += gcnew System::EventHandler(this, &Servicios::btn_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Location = System::Drawing::Point(-4, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1212, 108);
			this->panel1->TabIndex = 43;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Servicios::panel1_Paint);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(487, -7);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(239, 122);
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// desc_serv
			// 
			this->desc_serv->BackColor = System::Drawing::Color::WhiteSmoke;
			this->desc_serv->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->desc_serv->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->desc_serv->Location = System::Drawing::Point(254, 506);
			this->desc_serv->Name = L"desc_serv";
			this->desc_serv->Size = System::Drawing::Size(385, 103);
			this->desc_serv->TabIndex = 65;
			this->desc_serv->Text = L"";
			this->desc_serv->TextChanged += gcnew System::EventHandler(this, &Servicios::desc_serv_TextChanged);
			// 
			// name_srv
			// 
			this->name_srv->BackColor = System::Drawing::Color::WhiteSmoke;
			this->name_srv->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->name_srv->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->name_srv->Location = System::Drawing::Point(254, 310);
			this->name_srv->Multiline = true;
			this->name_srv->Name = L"name_srv";
			this->name_srv->Size = System::Drawing::Size(383, 23);
			this->name_srv->TabIndex = 66;
			this->name_srv->TextChanged += gcnew System::EventHandler(this, &Servicios::name_srv_TextChanged);
			// 
			// Servicios
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->ClientSize = System::Drawing::Size(1200, 725);
			this->Controls->Add(this->name_srv);
			this->Controls->Add(this->desc_serv);
			this->Controls->Add(this->clean_btn);
			this->Controls->Add(this->del_btn);
			this->Controls->Add(this->update_btn);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->price_serv);
			this->Controls->Add(this->hora);
			this->Controls->Add(this->add_btn);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->NOmm);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btn);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Servicios";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Servicios";
			this->Load += gcnew System::EventHandler(this, &Servicios::Servicios_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		private: System::Void dataGridView1_CellDoubleClick(System::Object^ sender, DataGridViewCellEventArgs^ e) {
			if (e->RowIndex >= 0) {
				DataGridViewRow^ row = dataGridView1->Rows[e->RowIndex];

				hora->Text = row->Cells["id_servicio"]->Value->ToString();
				name_srv->Text = row->Cells["nombre"]->Value->ToString();
				desc_serv->Text = row->Cells["descripcion"]->Value->ToString();
				price_serv->Text = row->Cells["precio"]->Value->ToString();
			}
		}



private: System::Void LoadServiciosData() {
	// Conexión a la base de datos
	String^ connectionString = DB::ConnectionString();
	MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

	try {
		conn->Open();

		// Consulta SQL para obtener los datos
		String^ query = "SELECT id_servicio, nombre, descripcion, precio FROM servicio;";
		MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
		MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter(cmd);
		DataTable^ dt = gcnew DataTable();

		// Llenar DataTable con los datos de la base
		adapter->Fill(dt);

		// Asignar DataTable como fuente del DataGridView
		dataGridView1->DataSource = dt;
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error al cargar servicios: " + ex->Message);
	}
	finally {
		conn->Close();
	}
}

private: System::Void AgregarServicio() {
	// Conexión a la base de datos
	String^ connectionString = DB::ConnectionString();
	MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

	try {
		conn->Open();

		// Obtener datos del formulario
		String^ nombreServicio = name_srv->Text;
		String^ descripcion = desc_serv->Text;
		String^ precio = price_serv->Text; // Se guarda como String, MySQL lo convierte

		// Validación básica (evita campos vacíos)
		if (nombreServicio->Trim() == "" || descripcion->Trim() == "" || precio->Trim() == "") {
			MessageBox::Show("Por favor, completa todos los campos.");
			return;
		}

		// Consulta SQL con parámetros
		String^ query = "INSERT INTO servicio (nombre, descripcion, precio) VALUES (@nombre, @descripcion, @precio);";

		MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
		cmd->Parameters->AddWithValue("@nombre", nombreServicio);
		cmd->Parameters->AddWithValue("@descripcion", descripcion);
		cmd->Parameters->AddWithValue("@precio", precio);

		// Ejecutar la consulta
		cmd->ExecuteNonQuery();

		MessageBox::Show("Servicio agregado exitosamente.");

		// Refrescar DataGridView si tienes una función como esta
		LoadServiciosData();
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error al agregar servicio: " + ex->Message);
	}
	finally {
		conn->Close();
	}
}

		private:
			// Variables para almacenar el estado del arrastre
					private:
						bool isDragging = false;
						Point startMousePosition;
						Point startFormPosition;

						// Evento MouseDown
						void Form_MouseDown(Object^ sender, MouseEventArgs^ e) {
							if (e->Button == System::Windows::Forms::MouseButtons::Left) {
								isDragging = true;
								startMousePosition = Cursor->Position; // Posición absoluta del mouse
								startFormPosition = this->Location;    // Posición actual del formulario
							}
						}

						// Evento MouseMove
						void Form_MouseMove(Object^ sender, MouseEventArgs^ e) {
							if (isDragging) {
								// Calcula la nueva posición del formulario basado en el movimiento del mouse
								Point currentMousePosition = Cursor->Position;
								int offsetX = currentMousePosition.X - startMousePosition.X;
								int offsetY = currentMousePosition.Y - startMousePosition.Y;

								// Mueve el formulario a la nueva posición
								this->Location = Point(startFormPosition.X + offsetX, startFormPosition.Y + offsetY);
							}
						}

						// Evento MouseUp
						void Form_MouseUp(Object^ sender, MouseEventArgs^ e) {
							isDragging = false;
						}


	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Servicios_Load(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->EditMode = DataGridViewEditMode::EditProgrammatically;
	this->dataGridView1->SelectionMode = DataGridViewSelectionMode::FullRowSelect;
	LoadServiciosData();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();

}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	this->panel1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Servicios::Form_MouseDown);
	this->panel1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Servicios::Form_MouseMove);
	this->panel1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Servicios::Form_MouseUp);
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->WindowState = FormWindowState::Minimized;
}
private: System::Void btn_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void add_btn_Click(System::Object^ sender, System::EventArgs^ e) {

	// Validar que el nombre del servicio no esté vacío
	if (String::IsNullOrWhiteSpace(name_srv->Text)) {
		MessageBox::Show("El nombre del servicio no puede estar vacío.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	// Validar que el nombre del servicio contenga solo letras y espacios
	if (!System::Text::RegularExpressions::Regex::IsMatch(name_srv->Text, "^[A-Za-zÁÉÍÓÚáéíóúñÑ ]+$")) {
		MessageBox::Show("El nombre del servicio solo puede contener letras y espacios.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// Validar que el precio no esté vacío
	if (String::IsNullOrWhiteSpace(price_serv->Text)) {
		MessageBox::Show("El precio del servicio no puede estar vacío.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	// Validar que el precio solo contenga números y opcionalmente un punto decimal
	if (!System::Text::RegularExpressions::Regex::IsMatch(price_serv->Text, "^[0-9]+(\\.[0-9]{1,2})?$")) {
		MessageBox::Show("El precio del servicio debe ser un número válido (ejemplo: 150 o 150.50).", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// Validar que la descripción no esté vacía
	if (String::IsNullOrWhiteSpace(desc_serv->Text)) {
		MessageBox::Show("La descripción del servicio no puede estar vacía.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// Si todas las validaciones pasan, se muestra el mensaje de éxito
	AgregarServicio();
}

private: System::Void hora_txt_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void estedo_txt_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	//Nombre del servicio
}
private: System::Void price_serv_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	//precio del servicio
}
private: System::Void desc_serv_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	//descripcion del servicio
}
private: System::Void name_srv_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void update_btn_Click(System::Object^ sender, System::EventArgs^ e) {


	String^ connectionString = DB::ConnectionString();
	MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

	try {
		conn->Open();

		String^ idServicioStr = hora->Text->Trim();
		String^ nombre = name_srv->Text->Trim();
		String^ descripcion = desc_serv->Text->Trim();
		String^ precio = price_serv->Text->Trim();

		// Validaciones


		if (idServicioStr == "" || nombre == "" || descripcion == "" || precio == "") {
			MessageBox::Show("Por favor, completa todos los campos.");
			return;
		}

		int idServicio;
		if (!Int32::TryParse(idServicioStr, idServicio)) {
			MessageBox::Show("ID de servicio inválido.");
			return;
		}


		if (!Regex::IsMatch(precio, "^\\d+(\\.\\d{1,2})?$")) {
			MessageBox::Show("El precio debe tener un formato válido. Ejemplo: 100 o 99.99");
			return;
		}

		// Consulta de actualización
		String^ query = "UPDATE servicio SET nombre = @nombre, descripcion = @descripcion, precio = @precio WHERE id_servicio = @id;";

		MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
		cmd->Parameters->AddWithValue("@nombre", nombre);
		cmd->Parameters->AddWithValue("@descripcion", descripcion);
		cmd->Parameters->AddWithValue("@precio", precio);
		cmd->Parameters->AddWithValue("@id", idServicio);

		int filas = cmd->ExecuteNonQuery();

		if (filas > 0)
			MessageBox::Show("Servicio actualizado correctamente.");
		else
			MessageBox::Show("No se encontró el servicio para actualizar.");

		LoadServiciosData(); // Actualiza DataGridView
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error al actualizar servicio: " + ex->Message);
	}
	finally {
		conn->Close();
	}
}
private: System::Void del_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ connectionString = DB::ConnectionString();
	MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

	try {
		conn->Open();

		// Asegurarse de que hay una fila seleccionada
		if (dataGridView1->SelectedRows->Count == 0) {
			MessageBox::Show("Selecciona un servicio de la tabla para eliminar.");
			return;
		}

		// Obtener el ID de la fila seleccionada
		int idServicio = Convert::ToInt32(dataGridView1->SelectedRows[0]->Cells["id_servicio"]->Value);

		// Confirmar eliminación
		if (MessageBox::Show("¿Estás seguro de que deseas eliminar este servicio?",
			"Confirmar eliminación", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes) {

			String^ query = "DELETE FROM servicio WHERE id_servicio = @id;";
			MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
			cmd->Parameters->AddWithValue("@id", idServicio);

			int filas = cmd->ExecuteNonQuery();

			if (filas > 0)
				MessageBox::Show("Servicio eliminado correctamente.");
			else
				MessageBox::Show("No se encontró el servicio para eliminar.");

			LoadServiciosData(); // Refrescar tabla
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error al eliminar servicio: " + ex->Message);
	}
	finally {
		conn->Close();
	}
}
private: System::Void clean_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	hora->Clear();
	name_srv->Clear();
	desc_serv->Clear();
	price_serv->Clear();
}
};
}
