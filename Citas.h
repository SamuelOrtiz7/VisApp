#pragma once
#include "style.h"
#include "DB.h"
using namespace System::Data;
using namespace MySql::Data::MySqlClient;

namespace SysGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Citas
	/// </summary>
	public ref class Citas : public System::Windows::Forms::Form
	{
	public:
		Citas(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->CellDoubleClick += gcnew DataGridViewCellEventHandler(this, &Citas::dataGridView1_CellDoubleClick);
			//Style::PersonalizarDataGridView(dataGridView1);
			Style::PersonalizarPanelConDegradado(panel1);
			//Style::PersonalizarBoton3(btn);
			Style::PersonalizarBoton4(add_btn);
			Style::PersonalizarBoton4(del_btn);
			Style::PersonalizarBoton4(clean_btn);
			Style::PersonalizarBoton4(update_btn);
			Style::PersonalizarBoton4(search_btn);
			Style::PersonalizarDataGridView(dataGridView1);


			//Style::PersonalizarTextBoxRedondeado(hora_txt);
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Citas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;



	private: System::Windows::Forms::Button^ btn;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ add_btn;











	private: System::Windows::Forms::TextBox^ hora_txt;








	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Button^ update_btn;
	private: System::Windows::Forms::Button^ del_btn;
	private: System::Windows::Forms::Button^ clean_btn;
	private: System::Windows::Forms::ComboBox^ cliente_cmb;
	private: System::Windows::Forms::TextBox^ textBox1;




	private: System::Windows::Forms::Button^ search_btn;
	private: System::Windows::Forms::ComboBox^ edo;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::ComboBox^ serv_cita;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ citaid_txt;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Citas::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->btn = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->add_btn = (gcnew System::Windows::Forms::Button());
			this->hora_txt = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->update_btn = (gcnew System::Windows::Forms::Button());
			this->del_btn = (gcnew System::Windows::Forms::Button());
			this->clean_btn = (gcnew System::Windows::Forms::Button());
			this->cliente_cmb = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->search_btn = (gcnew System::Windows::Forms::Button());
			this->edo = (gcnew System::Windows::Forms::ComboBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->serv_cita = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->citaid_txt = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
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
			this->panel1->Size = System::Drawing::Size(1205, 108);
			this->panel1->TabIndex = 10;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Citas::panel1_Paint);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(483, -7);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(239, 122);
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Open Sans Semibold", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(16, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(129, 60);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Citas";
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
			this->button1->Click += gcnew System::EventHandler(this, &Citas::button1_Click);
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
			this->button2->Click += gcnew System::EventHandler(this, &Citas::button2_Click);
			// 
			// btn
			// 
			this->btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn.BackgroundImage")));
			this->btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->btn->Location = System::Drawing::Point(43, 120);
			this->btn->Name = L"btn";
			this->btn->Size = System::Drawing::Size(85, 75);
			this->btn->TabIndex = 12;
			this->btn->UseVisualStyleBackColor = false;
			this->btn->Click += gcnew System::EventHandler(this, &Citas::btn_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Open Sans Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(107, 274);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(145, 27);
			this->label3->TabIndex = 14;
			this->label3->Text = L"ID del cliente:";
			this->label3->Click += gcnew System::EventHandler(this, &Citas::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Open Sans Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(107, 337);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(145, 27);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Fecha de cita:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Open Sans Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(107, 397);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(135, 27);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Hora de cita:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Open Sans Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(107, 518);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(193, 27);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Servicio solicitado:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Open Sans Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(107, 455);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(152, 27);
			this->label8->TabIndex = 17;
			this->label8->Text = L"Estado de cita:";
			// 
			// add_btn
			// 
			this->add_btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"add_btn.BackgroundImage")));
			this->add_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->add_btn->Location = System::Drawing::Point(76, 657);
			this->add_btn->Name = L"add_btn";
			this->add_btn->Size = System::Drawing::Size(166, 49);
			this->add_btn->TabIndex = 20;
			this->add_btn->UseVisualStyleBackColor = true;
			this->add_btn->Click += gcnew System::EventHandler(this, &Citas::add_btn_Click);
			// 
			// hora_txt
			// 
			this->hora_txt->BackColor = System::Drawing::Color::WhiteSmoke;
			this->hora_txt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->hora_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->hora_txt->Location = System::Drawing::Point(325, 401);
			this->hora_txt->Name = L"hora_txt";
			this->hora_txt->Size = System::Drawing::Size(255, 23);
			this->hora_txt->TabIndex = 27;
			this->hora_txt->TextChanged += gcnew System::EventHandler(this, &Citas::hora_txt_TextChanged);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(325, 340);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(255, 22);
			this->dateTimePicker1->TabIndex = 31;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &Citas::dateTimePicker1_ValueChanged);
			// 
			// update_btn
			// 
			this->update_btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"update_btn.BackgroundImage")));
			this->update_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->update_btn->Location = System::Drawing::Point(368, 657);
			this->update_btn->Name = L"update_btn";
			this->update_btn->Size = System::Drawing::Size(176, 49);
			this->update_btn->TabIndex = 21;
			this->update_btn->UseVisualStyleBackColor = true;
			this->update_btn->Click += gcnew System::EventHandler(this, &Citas::update_btn_Click);
			// 
			// del_btn
			// 
			this->del_btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"del_btn.BackgroundImage")));
			this->del_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->del_btn->Location = System::Drawing::Point(689, 657);
			this->del_btn->Name = L"del_btn";
			this->del_btn->Size = System::Drawing::Size(174, 49);
			this->del_btn->TabIndex = 22;
			this->del_btn->UseVisualStyleBackColor = true;
			this->del_btn->Click += gcnew System::EventHandler(this, &Citas::del_btn_Click);
			// 
			// clean_btn
			// 
			this->clean_btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"clean_btn.BackgroundImage")));
			this->clean_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->clean_btn->Location = System::Drawing::Point(1006, 657);
			this->clean_btn->Name = L"clean_btn";
			this->clean_btn->Size = System::Drawing::Size(162, 49);
			this->clean_btn->TabIndex = 23;
			this->clean_btn->UseVisualStyleBackColor = true;
			this->clean_btn->Click += gcnew System::EventHandler(this, &Citas::clean_btn_Click);
			// 
			// cliente_cmb
			// 
			this->cliente_cmb->BackColor = System::Drawing::Color::WhiteSmoke;
			this->cliente_cmb->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cliente_cmb->FormattingEnabled = true;
			this->cliente_cmb->Location = System::Drawing::Point(325, 279);
			this->cliente_cmb->Name = L"cliente_cmb";
			this->cliente_cmb->Size = System::Drawing::Size(255, 24);
			this->cliente_cmb->TabIndex = 32;
			this->cliente_cmb->SelectedIndexChanged += gcnew System::EventHandler(this, &Citas::cliente_cmb_SelectedIndexChanged);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(731, 159);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(255, 23);
			this->textBox1->TabIndex = 67;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Citas::textBox1_TextChanged);
			// 
			// search_btn
			// 
			this->search_btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"search_btn.BackgroundImage")));
			this->search_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->search_btn->Location = System::Drawing::Point(992, 146);
			this->search_btn->Name = L"search_btn";
			this->search_btn->Size = System::Drawing::Size(176, 49);
			this->search_btn->TabIndex = 66;
			this->search_btn->UseVisualStyleBackColor = true;
			this->search_btn->Click += gcnew System::EventHandler(this, &Citas::search_btn_Click);
			// 
			// edo
			// 
			this->edo->BackColor = System::Drawing::Color::WhiteSmoke;
			this->edo->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->edo->FormattingEnabled = true;
			this->edo->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Completada", L"Pendiente", L"Cancelada" });
			this->edo->Location = System::Drawing::Point(325, 455);
			this->edo->Name = L"edo";
			this->edo->Size = System::Drawing::Size(255, 24);
			this->edo->TabIndex = 68;
			this->edo->SelectedIndexChanged += gcnew System::EventHandler(this, &Citas::edo_SelectedIndexChanged);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->EditMode = System::Windows::Forms::DataGridViewEditMode::EditOnEnter;
			this->dataGridView1->Location = System::Drawing::Point(721, 220);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(426, 383);
			this->dataGridView1->TabIndex = 70;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Citas::dataGridView1_CellContentClick);
			// 
			// serv_cita
			// 
			this->serv_cita->BackColor = System::Drawing::Color::WhiteSmoke;
			this->serv_cita->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->serv_cita->FormattingEnabled = true;
			this->serv_cita->Location = System::Drawing::Point(325, 521);
			this->serv_cita->Name = L"serv_cita";
			this->serv_cita->Size = System::Drawing::Size(255, 24);
			this->serv_cita->TabIndex = 71;
			this->serv_cita->SelectedIndexChanged += gcnew System::EventHandler(this, &Citas::serv_cita_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Open Sans Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(107, 215);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(82, 27);
			this->label2->TabIndex = 13;
			this->label2->Text = L"ID Cita:";
			// 
			// citaid_txt
			// 
			this->citaid_txt->BackColor = System::Drawing::Color::LightGray;
			this->citaid_txt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->citaid_txt->Enabled = false;
			this->citaid_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->citaid_txt->Location = System::Drawing::Point(325, 220);
			this->citaid_txt->Name = L"citaid_txt";
			this->citaid_txt->Size = System::Drawing::Size(255, 23);
			this->citaid_txt->TabIndex = 24;
			this->citaid_txt->TextChanged += gcnew System::EventHandler(this, &Citas::citaid_txt_TextChanged);
			// 
			// Citas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->ClientSize = System::Drawing::Size(1200, 725);
			this->Controls->Add(this->serv_cita);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->edo);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->btn);
			this->Controls->Add(this->search_btn);
			this->Controls->Add(this->cliente_cmb);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->hora_txt);
			this->Controls->Add(this->citaid_txt);
			this->Controls->Add(this->clean_btn);
			this->Controls->Add(this->del_btn);
			this->Controls->Add(this->update_btn);
			this->Controls->Add(this->add_btn);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Citas";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"dataGridView1";
			this->Load += gcnew System::EventHandler(this, &Citas::Citas_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void dataGridView1_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (e->RowIndex >= 0) {
		DataGridViewRow^ row = dataGridView1->Rows[e->RowIndex];

		if (row->Cells["id_cita"]->Value != nullptr)
			citaid_txt->Text = row->Cells["id_cita"]->Value->ToString();

		if (row->Cells["id_cita"]->Value != nullptr)
			citaid_txt->Text = row->Cells["id_cita"]->Value->ToString();

		// Obtener el ID del cliente desde la fila seleccionada
		if (row->Cells["id_cita"]->Value != nullptr) {
			String^ idCita = row->Cells["id_cita"]->Value->ToString();

			String^ connectionString = DB::ConnectionString();
			MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

			try {
				conn->Open();

				// Consulta para obtener el texto completo del cliente (formato del ComboBox)
				String^ query =
					"SELECT CONCAT(cliente.id_cliente, '.- ', cliente.nombre, ' ', cliente.apellido_paternoCL, ' ', cliente.apellido_maternoCL) AS cliente_info " +
					"FROM cita " +
					"INNER JOIN cliente ON cita.id_cliente = cliente.id_cliente " +
					"WHERE cita.id_cita = @idCita;";

				MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
				cmd->Parameters->AddWithValue("@idCita", idCita);

				Object^ resultado = cmd->ExecuteScalar();
				if (resultado != nullptr) {
					String^ clienteTexto = resultado->ToString();

					// Selecciona el cliente en el ComboBox
					int index = cliente_cmb->Items->IndexOf(clienteTexto);
					if (index >= 0) {
						cliente_cmb->SelectedIndex = index;
					}
					else {
						cliente_cmb->Text = clienteTexto; // Fallback por si no está en Items (aunque no ideal)
					}
				}
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error al obtener cliente desde la base de datos: " + ex->Message);
			}
			finally {
				conn->Close();
			}
		}


		// Buscar el nombre del servicio a partir de la descripción
		if (row->Cells["descripcion"]->Value != nullptr) {
			String^ descripcion = row->Cells["descripcion"]->Value->ToString();

			// Conexión a la base de datos para buscar el nombre
			String^ connectionString = DB::ConnectionString();
			MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

			try {
				conn->Open();
				String^ query = "SELECT nombre FROM servicio WHERE descripcion = @descripcion;";
				MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
				cmd->Parameters->AddWithValue("@descripcion", descripcion);

				Object^ nombreServicio = cmd->ExecuteScalar();

				if (nombreServicio != nullptr)
					serv_cita->Text = nombreServicio->ToString();
				else
					serv_cita->Text = ""; // Si no se encuentra, dejar en blanco o mostrar mensaje si lo prefieres

			}
			catch (Exception^ ex) {
				MessageBox::Show("Error al buscar el servicio: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			finally {
				conn->Close();
			}
		}

		if (row->Cells["estado"]->Value != nullptr)
			edo->Text = row->Cells["estado"]->Value->ToString();

		if (row->Cells["hora"]->Value != nullptr) {
			String^ horaCompleta = row->Cells["hora"]->Value->ToString();
			DateTime hora;
			if (DateTime::TryParse(horaCompleta, hora)) {
				hora_txt->Text = hora.ToString("HH:mm");
			}
			else {
				hora_txt->Text = horaCompleta->Substring(0, 5); // como fallback
			}
		}


		if (row->Cells["fecha"]->Value != nullptr) {
			DateTime fecha;
			if (DateTime::TryParse(row->Cells["fecha"]->Value->ToString(), fecha))
				dateTimePicker1->Value = fecha;
		}
	}
}




	private: System::Void AgregarCita() {
		String^ connectionString = DB::ConnectionString();
		MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

		try {
			conn->Open();

			// === Obtener valores del formulario ===
			String^ clienteTexto = cliente_cmb->Text->Trim();
			String^ servicioNombre = serv_cita->Text->Trim();
			String^ estado = edo->Text->Trim();
			String^ hora = hora_txt->Text->Trim();
			String^ fecha = dateTimePicker1->Value.ToString("yyyy-MM-dd");

			// Validar que todos los campos estén llenos
			if (clienteTexto == "" || servicioNombre == "" || estado == "" || hora == "") {
				MessageBox::Show("Por favor, completa todos los campos antes de guardar.");
				return;
			}

			// === Extraer solo el ID del cliente antes del ".-" ===
			System::Text::RegularExpressions::Regex^ regexId = gcnew System::Text::RegularExpressions::Regex("^(\\d+)");
			System::Text::RegularExpressions::Match^ match = regexId->Match(clienteTexto);
			if (!match->Success) {
				MessageBox::Show("Formato de cliente inválido.");
				return;
			}
			int id_cliente = Convert::ToInt32(match->Groups[1]->Value);

			// === Obtener descripción del servicio seleccionado ===
			String^ getDescServicioQuery = "SELECT descripcion FROM servicio WHERE nombre = @nombreServicio;";
			MySqlCommand^ cmdGetServicio = gcnew MySqlCommand(getDescServicioQuery, conn);
			cmdGetServicio->Parameters->AddWithValue("@nombreServicio", servicioNombre);
			Object^ resultServicio = cmdGetServicio->ExecuteScalar();

			if (resultServicio == nullptr) {
				MessageBox::Show("Servicio no encontrado.");
				return;
			}

			String^ descripcionServicio = resultServicio->ToString();

			// === Insertar la nueva cita ===
			String^ insertQuery = "INSERT INTO cita (id_cliente, descripcion, estado, hora, fecha) VALUES (@id_cliente, @descripcion, @estado, @hora, @fecha);";
			MySqlCommand^ cmdInsert = gcnew MySqlCommand(insertQuery, conn);
			cmdInsert->Parameters->AddWithValue("@id_cliente", id_cliente);
			cmdInsert->Parameters->AddWithValue("@descripcion", descripcionServicio);
			cmdInsert->Parameters->AddWithValue("@estado", estado);
			cmdInsert->Parameters->AddWithValue("@hora", hora);
			cmdInsert->Parameters->AddWithValue("@fecha", fecha);

			cmdInsert->ExecuteNonQuery();

			MessageBox::Show("Cita registrada exitosamente.");
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error al registrar la cita: " + ex->Message);
		}
		finally {
			conn->Close();
		}
	}


	private: System::Void CargarCombosCitas() {
		String^ connectionString = DB::ConnectionString();
		MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

		try {
			conn->Open();

			// === Cargar nombres de clientes con ID ===
			String^ queryClientes = "SELECT id_cliente, nombre, apellido_paternoCL, apellido_maternoCL FROM cliente;";
			MySqlCommand^ cmdClientes = gcnew MySqlCommand(queryClientes, conn);
			MySqlDataReader^ readerClientes = cmdClientes->ExecuteReader();

			cliente_cmb->Items->Clear(); // Limpia antes de llenar
			while (readerClientes->Read()) {
				String^ texto = readerClientes["id_cliente"]->ToString() + ".- " +
					readerClientes["nombre"]->ToString() + " " +
					readerClientes["apellido_paternoCL"]->ToString() + " " +
					readerClientes["apellido_maternoCL"]->ToString();
				cliente_cmb->Items->Add(texto);
			}
			readerClientes->Close();


			// === Cargar nombres de servicios ===
			String^ queryServicios = "SELECT nombre FROM servicio;";
			MySqlCommand^ cmdServicios = gcnew MySqlCommand(queryServicios, conn);
			MySqlDataReader^ readerServicios = cmdServicios->ExecuteReader();

			serv_cita->Items->Clear(); // Limpia antes de llenar
			while (readerServicios->Read()) {
				serv_cita->Items->Add(readerServicios["nombre"]->ToString());
			}
			readerServicios->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error al cargar datos de combos: " + ex->Message);
		}
		finally {
			conn->Close();
		}
	}

		private: System::Void LoadData() {
			// Configurar la conexión a la base de datos
			String^ connectionString = DB::ConnectionString();
			MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

			try {
				conn->Open();

				// Consulta con JOIN y concatenación del cliente
				String^ query =
					"SELECT " +
					"cita.id_cita, cita.fecha, cita.hora, cita.estado, cita.descripcion, " +
					"CONCAT(cliente.id_cliente, '.- ', cliente.apellido_paternoCL, ' ', cliente.apellido_maternoCL) AS cliente_info " +
					"FROM cita " +
					"INNER JOIN cliente ON cita.id_cliente = cliente.id_cliente;";

				MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
				MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter(cmd);
				DataTable^ dt = gcnew DataTable();
				adapter->Fill(dt);

				// Mostrar los datos en el DataGridView
				dataGridView1->DataSource = dt;
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error: " + ex->Message);
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


	private: System::Void citas_data_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	}
private: System::Void Citas_Load(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->EditMode = DataGridViewEditMode::EditProgrammatically;
	this->dataGridView1->SelectionMode = DataGridViewSelectionMode::FullRowSelect;
	LoadData();
	CargarCombosCitas();
	cliente_cmb->DropDownStyle = ComboBoxStyle::DropDownList;
	edo->DropDownStyle = ComboBoxStyle::DropDownList;
	serv_cita->DropDownStyle = ComboBoxStyle::DropDownList;

}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();

}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	this->panel1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Citas::Form_MouseDown);
	this->panel1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Citas::Form_MouseMove);
	this->panel1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Citas::Form_MouseUp);
}

private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->WindowState = FormWindowState::Minimized;
}
private: System::Void citaid_txt_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	//ID NUMERICO
}
private: System::Void nom__txt_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
//Descripcion
}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void estedo_txt_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void search_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	// Validar que el campo no esté vacío
	if (String::IsNullOrWhiteSpace(textBox1->Text)) {
		LoadData();
		return;
	}

	// Validar que solo contenga números y diagonales (/)
	if (!System::Text::RegularExpressions::Regex::IsMatch(textBox1->Text, "^[0-9/]+$")) {
		MessageBox::Show("El campo de búsqueda solo puede contener números y diagonales (/).", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	String^ entrada = textBox1->Text->Trim();

	// Convertir diagonales (/) a guiones (-), ya que en la base están así
	entrada = entrada->Replace("/", "-");

	String^ connStr = DB::ConnectionString();
	MySqlConnection^ conn = gcnew MySqlConnection(connStr);

	try {
		conn->Open();

		// Buscar por id_cita, id_cliente o coincidencias de fecha parcial o total
		String^ query = "SELECT * FROM cita WHERE id_cita LIKE @param OR id_cliente LIKE @param OR fecha LIKE @fecha";

		MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);

		// Param para id y cliente
		cmd->Parameters->AddWithValue("@param", "%" + entrada + "%");

		// Param especial para fecha parcial o completa
		cmd->Parameters->AddWithValue("@fecha", "%" + entrada + "%");

		MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter(cmd);
		DataTable^ dt = gcnew DataTable();
		adapter->Fill(dt);

		dataGridView1->DataSource = dt;

		if (dt->Rows->Count == 0) {
			MessageBox::Show("No se encontraron coincidencias.", "Resultado", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error al buscar: " + ex->Message);
	}
	finally {
		conn->Close();
	}
}


private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	//Busca por ID, Nombre
}

private: System::Void add_btn_Click(System::Object^ sender, System::EventArgs^ e) {


	// === Obtener valores de los controles ===
	String^ cliente = cliente_cmb->Text->Trim();

	// Extraer solo el ID numérico del cliente antes del ".-"
	System::Text::RegularExpressions::Regex^ regexId = gcnew System::Text::RegularExpressions::Regex("^(\\d+)");
	System::Text::RegularExpressions::Match^ match = regexId->Match(cliente);
	if (!match->Success) {
		MessageBox::Show("Formato de cliente inválido. Asegúrate de seleccionar un cliente válido.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	String^ id_cliente = match->Groups[1]->Value;


	String^ servicio = serv_cita->Text->Trim();
	String^ estado = edo->Text->Trim();
	String^ hora = hora_txt->Text->Trim();
	String^ fecha = dateTimePicker1->Value.ToString("yyyy-MM-dd");
	DateTime fechaSeleccionada = dateTimePicker1->Value;
	DateTime hoy = DateTime::Now.Date;

	// === Validar campos vacíos ===
	if (cliente == "") {
		MessageBox::Show("Selecciona un cliente.", "Validación", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	if (servicio == "") {
		MessageBox::Show("Selecciona un servicio.", "Validación", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	if (estado == "") {
		MessageBox::Show("Selecciona el estado de la cita.", "Validación", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	if (hora == "") {
		MessageBox::Show("Ingresa la hora de la cita.", "Validación", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	// === Validar formato de hora ===
	System::Text::RegularExpressions::Regex^ horaRegex = gcnew System::Text::RegularExpressions::Regex("^([01]?[0-9]|2[0-3]):[0-5][0-9]$");
	if (!horaRegex->IsMatch(hora)) {
		MessageBox::Show("Formato de hora inválido. Usa el formato HH:mm (por ejemplo, 14:30).", "Validación", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	// === Validar que la fecha no sea anterior a hoy ===
	if (fechaSeleccionada < hoy) {
		MessageBox::Show("La fecha seleccionada no puede ser anterior a hoy.", "Validación", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	AgregarCita();
	LoadData();
}




private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}

private: System::Void serv_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void serv_cita_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	//Servicio solicitado(descripcion)
}
private: System::Void cliente_cmb_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	//id del cliente (id_cliente)
}
private: System::Void edo_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	//estado de la cita(estado)
}
private: System::Void hora_txt_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	//Hora de cita (hora)
}
private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	//Fecha cita(fecha)
}

private: System::Void del_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dataGridView1->SelectedRows->Count > 0) {
		// Toma el ID de la fila seleccionada
		int idCita = Convert::ToInt32(dataGridView1->SelectedRows[0]->Cells["id_cita"]->Value);

		// Confirmación
		if (MessageBox::Show("¿Estás seguro de que deseas eliminar esta cita?",
			"Confirmar eliminación", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes) {
			try {
				String^ connStr = DB::ConnectionString();
				MySqlConnection^ conn = gcnew MySqlConnection(connStr);
				conn->Open();

				String^ deleteQuery = "DELETE FROM cita WHERE id_cita = @id;";
				MySqlCommand^ cmd = gcnew MySqlCommand(deleteQuery, conn);
				cmd->Parameters->AddWithValue("@id", idCita);
				int filasAfectadas = cmd->ExecuteNonQuery();

				conn->Close();

				if (filasAfectadas > 0) {
					MessageBox::Show("Cita eliminada correctamente.");
					LoadData(); // Refresca el grid si tienes esta función
				}
				else {
					MessageBox::Show("No se encontró la cita a eliminar.");
				}
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error al eliminar la cita: " + ex->Message);
			}
		}
	}
	else {
		MessageBox::Show("Selecciona una fila primero.");
	}
}
private: System::Void update_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ connectionString = DB::ConnectionString();
	MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

	try {
		conn->Open();

		// Obtener valores del formulario
		String^ idCitaStr = citaid_txt->Text->Trim();
		String^ clienteTexto = cliente_cmb->Text->Trim(); // "23.- Juan Pérez López"
		String^ servicioNombre = serv_cita->Text->Trim();
		String^ estado = edo->Text->Trim();
		String^ hora = hora_txt->Text->Trim();
		String^ fecha = dateTimePicker1->Value.ToString("yyyy-MM-dd");

		// Validar campos vacíos
		if (idCitaStr == "" || clienteTexto == "" || servicioNombre == "" || estado == "" || hora == "") {
			MessageBox::Show("Por favor, completa todos los campos.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Validar ID de cita
		int idCita;
		if (!Int32::TryParse(idCitaStr, idCita)) {
			MessageBox::Show("ID de cita inválido. Debe ser un número.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// === Extraer ID del cliente desde cliente_cmb ===
		int posSeparador = clienteTexto->IndexOf(".-");
		if (posSeparador == -1) {
			MessageBox::Show("Formato de cliente inválido. No se puede extraer ID.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		String^ clienteIdStr = clienteTexto->Substring(0, posSeparador)->Trim();
		int idCliente;
		if (!Int32::TryParse(clienteIdStr, idCliente)) {
			MessageBox::Show("ID de cliente inválido. Debe ser un número.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Validar hora (formato HH:mm)
		if (!System::Text::RegularExpressions::Regex::IsMatch(hora, "^(?:[01]\\d|2[0-3]):[0-5]\\d$")) {
			MessageBox::Show("Formato de hora inválido. Usa HH:mm (ej. 14:30).", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Validar que el servicio exista
		String^ getDescServicioQuery = "SELECT descripcion FROM servicio WHERE nombre = @nombreServicio;";
		MySqlCommand^ cmdGetServicio = gcnew MySqlCommand(getDescServicioQuery, conn);
		cmdGetServicio->Parameters->AddWithValue("@nombreServicio", servicioNombre);
		Object^ resultDesc = cmdGetServicio->ExecuteScalar();

		if (resultDesc == nullptr) {
			MessageBox::Show("El servicio seleccionado no existe.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		String^ descripcion = resultDesc->ToString();

		// Ejecutar UPDATE
		String^ updateQuery = "UPDATE cita SET id_cliente = @id_cliente, descripcion = @descripcion, estado = @estado, hora = @hora, fecha = @fecha WHERE id_cita = @id_cita;";
		MySqlCommand^ cmdUpdate = gcnew MySqlCommand(updateQuery, conn);
		cmdUpdate->Parameters->AddWithValue("@id_cita", idCita);
		cmdUpdate->Parameters->AddWithValue("@id_cliente", idCliente);
		cmdUpdate->Parameters->AddWithValue("@descripcion", descripcion);
		cmdUpdate->Parameters->AddWithValue("@estado", estado);
		cmdUpdate->Parameters->AddWithValue("@hora", hora);
		cmdUpdate->Parameters->AddWithValue("@fecha", fecha);

		int rowsAffected = cmdUpdate->ExecuteNonQuery();

		if (rowsAffected > 0) {
			MessageBox::Show("Cita actualizada correctamente.", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);
			// Recargar tabla si tienes una función LoadData
		}
		else {
			MessageBox::Show("No se encontró la cita para actualizar.", "Atención", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error al actualizar la cita: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	finally {
		conn->Close();
	}

	// Recargar datos si aplica
	LoadData();
}




private: System::Void clean_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	citaid_txt->Clear();
	hora_txt->Clear();
	dateTimePicker1->Value = DateTime::Now;
	cliente_cmb->SelectedIndex = -1;
	edo->SelectedIndex = -1;
	serv_cita->SelectedIndex = -1;


}
};
}
