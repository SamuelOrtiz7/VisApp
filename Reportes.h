#pragma once
#include "Style.h"
#include "DB.h"

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
	/// Resumen de Reportes
	/// </summary>
	public ref class Reportes : public System::Windows::Forms::Form
	{
	public:
		Reportes(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			Style::PersonalizarDataGridView(dataGridView1);
			//Style::PersonalizarBoton3(btn);
			Style::PersonalizarBoton(search_btn);
			Style::PersonalizarPanelConDegradado(panel1);
			Style::PersonalizarBoton4(search_btn);


			Style::PersonalizarBoton4(add_btn);
			Style::PersonalizarBoton4(del_btn);
			Style::PersonalizarBoton4(clean_btn);
			Style::PersonalizarBoton4(update_btn);
			Style::PersonalizarBoton4(search_btn);

			dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->CellDoubleClick += gcnew DataGridViewCellEventHandler(this, &Reportes::dataGridView1_CellDoubleClick);
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Reportes()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Button^ btn;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ search_btn;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::RichTextBox^ coment_txt;

	private: System::Windows::Forms::RichTextBox^ general_txt;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Button^ clean_btn;
	private: System::Windows::Forms::Button^ del_btn;
	private: System::Windows::Forms::Button^ update_btn;
	private: System::Windows::Forms::Button^ add_btn;
	private: System::Windows::Forms::TextBox^ reporteid_txt;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ citaid_txt;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Reportes::typeid));
			this->btn = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->search_btn = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->coment_txt = (gcnew System::Windows::Forms::RichTextBox());
			this->general_txt = (gcnew System::Windows::Forms::RichTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->clean_btn = (gcnew System::Windows::Forms::Button());
			this->del_btn = (gcnew System::Windows::Forms::Button());
			this->update_btn = (gcnew System::Windows::Forms::Button());
			this->add_btn = (gcnew System::Windows::Forms::Button());
			this->reporteid_txt = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->citaid_txt = (gcnew System::Windows::Forms::ComboBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
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
			this->btn->Location = System::Drawing::Point(23, 129);
			this->btn->Name = L"btn";
			this->btn->Size = System::Drawing::Size(106, 87);
			this->btn->TabIndex = 62;
			this->btn->UseVisualStyleBackColor = false;
			this->btn->Click += gcnew System::EventHandler(this, &Reportes::btn_Click);
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
			this->panel1->TabIndex = 61;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Reportes::panel1_Paint);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(495, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(239, 122);
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Open Sans Semibold", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(16, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(214, 60);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Reportes";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Transparent;
			this->button1->Location = System::Drawing::Point(1071, 21);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(90, 39);
			this->button1->TabIndex = 0;
			this->button1->Text = L"✕";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Reportes::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Transparent;
			this->button2->Location = System::Drawing::Point(987, 21);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(63, 39);
			this->button2->TabIndex = 1;
			this->button2->Text = L"—";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Reportes::button2_Click);
			// 
			// search_btn
			// 
			this->search_btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"search_btn.BackgroundImage")));
			this->search_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->search_btn->Location = System::Drawing::Point(966, 147);
			this->search_btn->Name = L"search_btn";
			this->search_btn->Size = System::Drawing::Size(176, 49);
			this->search_btn->TabIndex = 68;
			this->search_btn->UseVisualStyleBackColor = true;
			this->search_btn->Click += gcnew System::EventHandler(this, &Reportes::search_btn_Click_1);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(705, 160);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(255, 23);
			this->textBox1->TabIndex = 69;
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(792, 245);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(350, 370);
			this->dataGridView1->TabIndex = 63;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Reportes::dataGridView1_CellContentClick);
			// 
			// coment_txt
			// 
			this->coment_txt->BackColor = System::Drawing::Color::WhiteSmoke;
			this->coment_txt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->coment_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->coment_txt->Location = System::Drawing::Point(138, 519);
			this->coment_txt->Name = L"coment_txt";
			this->coment_txt->Size = System::Drawing::Size(552, 112);
			this->coment_txt->TabIndex = 70;
			this->coment_txt->Text = L"";
			this->coment_txt->TextChanged += gcnew System::EventHandler(this, &Reportes::coment_txt_TextChanged);
			// 
			// general_txt
			// 
			this->general_txt->BackColor = System::Drawing::Color::WhiteSmoke;
			this->general_txt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->general_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->general_txt->Location = System::Drawing::Point(138, 387);
			this->general_txt->Name = L"general_txt";
			this->general_txt->Size = System::Drawing::Size(552, 99);
			this->general_txt->TabIndex = 71;
			this->general_txt->Text = L"";
			this->general_txt->TextChanged += gcnew System::EventHandler(this, &Reportes::general_txt_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Open Sans Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(133, 489);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(257, 27);
			this->label3->TabIndex = 73;
			this->label3->Text = L"Comentarios del reporte:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Open Sans Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(133, 357);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(264, 27);
			this->label2->TabIndex = 72;
			this->label2->Text = L"Observaciones generales:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Open Sans Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(133, 301);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(82, 27);
			this->label4->TabIndex = 74;
			this->label4->Text = L"ID Cita:";
			// 
			// clean_btn
			// 
			this->clean_btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"clean_btn.BackgroundImage")));
			this->clean_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->clean_btn->Location = System::Drawing::Point(966, 653);
			this->clean_btn->Name = L"clean_btn";
			this->clean_btn->Size = System::Drawing::Size(167, 49);
			this->clean_btn->TabIndex = 79;
			this->clean_btn->UseVisualStyleBackColor = true;
			this->clean_btn->Click += gcnew System::EventHandler(this, &Reportes::clean_btn_Click);
			// 
			// del_btn
			// 
			this->del_btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"del_btn.BackgroundImage")));
			this->del_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->del_btn->Location = System::Drawing::Point(663, 653);
			this->del_btn->Name = L"del_btn";
			this->del_btn->Size = System::Drawing::Size(161, 49);
			this->del_btn->TabIndex = 78;
			this->del_btn->UseVisualStyleBackColor = true;
			this->del_btn->Click += gcnew System::EventHandler(this, &Reportes::del_btn_Click);
			// 
			// update_btn
			// 
			this->update_btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"update_btn.BackgroundImage")));
			this->update_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->update_btn->Location = System::Drawing::Point(317, 653);
			this->update_btn->Name = L"update_btn";
			this->update_btn->Size = System::Drawing::Size(176, 49);
			this->update_btn->TabIndex = 77;
			this->update_btn->UseVisualStyleBackColor = true;
			this->update_btn->Click += gcnew System::EventHandler(this, &Reportes::update_btn_Click);
			// 
			// add_btn
			// 
			this->add_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->add_btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"add_btn.BackgroundImage")));
			this->add_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->add_btn->Location = System::Drawing::Point(53, 653);
			this->add_btn->Name = L"add_btn";
			this->add_btn->Size = System::Drawing::Size(146, 49);
			this->add_btn->TabIndex = 76;
			this->add_btn->UseVisualStyleBackColor = false;
			this->add_btn->Click += gcnew System::EventHandler(this, &Reportes::add_btn_Click);
			// 
			// reporteid_txt
			// 
			this->reporteid_txt->BackColor = System::Drawing::Color::LightGray;
			this->reporteid_txt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->reporteid_txt->Enabled = false;
			this->reporteid_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->reporteid_txt->Location = System::Drawing::Point(138, 275);
			this->reporteid_txt->Name = L"reporteid_txt";
			this->reporteid_txt->Size = System::Drawing::Size(255, 23);
			this->reporteid_txt->TabIndex = 81;
			this->reporteid_txt->TextChanged += gcnew System::EventHandler(this, &Reportes::reporteid_txt_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Open Sans Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(133, 232);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(116, 27);
			this->label5->TabIndex = 80;
			this->label5->Text = L"ID Reporte";
			// 
			// citaid_txt
			// 
			this->citaid_txt->BackColor = System::Drawing::Color::WhiteSmoke;
			this->citaid_txt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->citaid_txt->FormattingEnabled = true;
			this->citaid_txt->Location = System::Drawing::Point(138, 332);
			this->citaid_txt->Name = L"citaid_txt";
			this->citaid_txt->Size = System::Drawing::Size(255, 24);
			this->citaid_txt->TabIndex = 82;
			// 
			// Reportes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->ClientSize = System::Drawing::Size(1200, 725);
			this->Controls->Add(this->citaid_txt);
			this->Controls->Add(this->reporteid_txt);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->clean_btn);
			this->Controls->Add(this->del_btn);
			this->Controls->Add(this->update_btn);
			this->Controls->Add(this->add_btn);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->general_txt);
			this->Controls->Add(this->coment_txt);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->search_btn);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->btn);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Reportes";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Reportes";
			this->Load += gcnew System::EventHandler(this, &Reportes::Reportes_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		private: System::Void CargarComboIdCitas() {
			String^ connectionString = DB::ConnectionString();
			MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

			try {
				conn->Open();

				// Cargar los ID de las citas en el ComboBox
				String^ queryCitas = "SELECT id_cita FROM cita;";
				MySqlCommand^ cmdCitas = gcnew MySqlCommand(queryCitas, conn);
				MySqlDataReader^ readerCitas = cmdCitas->ExecuteReader();

				citaid_txt->Items->Clear(); // Asegura que no haya elementos duplicados
				while (readerCitas->Read()) {
					citaid_txt->Items->Add(readerCitas["id_cita"]->ToString());
				}
				readerCitas->Close();
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error al cargar IDs de citas: " + ex->Message);
			}
			finally {
				conn->Close();
			}
		}



		private: System::Void dataGridView1_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
			if (e->RowIndex >= 0) {
				DataGridViewRow^ row = dataGridView1->Rows[e->RowIndex];

				// Obtener y mostrar el ID de la cita
				if (row->Cells["id_cita"]->Value != nullptr)
					citaid_txt->Text = row->Cells["id_cita"]->Value->ToString();

				// Mostrar el campo general
				if (row->Cells["general"]->Value != nullptr)
					general_txt->Text = row->Cells["general"]->Value->ToString();

				// Mostrar el campo coment
				if (row->Cells["coment"]->Value != nullptr)
					coment_txt->Text = row->Cells["coment"]->Value->ToString();

				// Opcional: si tienes un campo oculto para el ID del reporte
				if (row->Cells["idReportes"]->Value != nullptr)
					reporteid_txt->Text = row->Cells["idReportes"]->Value->ToString();  // Este textbox podría estar oculto
			}
		}

private: System::Void loadReportesData() {
	try {
		String^ connStr = DB::ConnectionString();
		MySqlConnection^ conn = gcnew MySqlConnection(connStr);
		conn->Open();

		// Nueva consulta para cargar desde la tabla reportes
		String^ query =
			"SELECT idReportes, id_cita, general, coment FROM reportes;";

		MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
		MySqlDataAdapter^ da = gcnew MySqlDataAdapter(cmd);
		DataTable^ dt = gcnew DataTable();
		da->Fill(dt);

		dataGridView1->DataSource = dt;

		conn->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error al cargar los datos de la tabla reportes: " + ex->Message);
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

	private: System::Void Reportes_Load(System::Object^ sender, System::EventArgs^ e) {

		dataGridView1->EditMode = DataGridViewEditMode::EditProgrammatically;
		this->dataGridView1->SelectionMode = DataGridViewSelectionMode::FullRowSelect;
		loadReportesData();
		this->dataGridView1->SelectionMode = DataGridViewSelectionMode::FullRowSelect;
		CargarComboIdCitas();
	}


private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->WindowState = FormWindowState::Minimized;
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	this->panel1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Reportes::Form_MouseDown);
	this->panel1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Reportes::Form_MouseMove);
	this->panel1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Reportes::Form_MouseUp);
}
private: System::Void btn_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void search_btn_Click(System::Object^ sender, System::EventArgs^ e) {
    
}

private: System::Void src_btn_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void search_btn_Click_1(System::Object^ sender, System::EventArgs^ e) {
	// Validar que el campo de búsqueda no esté vacío
	if (String::IsNullOrWhiteSpace(textBox1->Text)) {
		loadReportesData (); // Asegúrate de tener una función que cargue todos los reportes
		return;
	}

	// Validar que no contenga caracteres especiales (solo letras, números y espacios)
	if (!System::Text::RegularExpressions::Regex::IsMatch(textBox1->Text, "^[a-zA-Z0-9 ]+$")) {
		MessageBox::Show("El campo de búsqueda solo puede contener letras, números y espacios.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	String^ busqueda = textBox1->Text->Trim();

	String^ connStr = DB::ConnectionString();
	MySqlConnection^ conn = gcnew MySqlConnection(connStr);

	try {
		conn->Open();
		String^ query = "SELECT idReportes, id_cita, general, coment " +
			"FROM reportes " +
			"WHERE CAST(idReportes AS CHAR) LIKE @param OR " +
			"CAST(id_cita AS CHAR) LIKE @param OR " +
			"general LIKE @param OR " +
			"coment LIKE @param";

		MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
		cmd->Parameters->AddWithValue("@param", "%" + busqueda + "%");

		MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter(cmd);
		DataTable^ dt = gcnew DataTable();
		adapter->Fill(dt);

		dataGridView1->DataSource = dt;

		if (dt->Rows->Count == 0) {
			MessageBox::Show("No se encontraron coincidencias.", "Resultado", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error al realizar la búsqueda: " + ex->Message);
	}
	finally {
		conn->Close();
	}
}

private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void citaid_txt_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void general_txt_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void coment_txt_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void add_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	// Validación básica
	if (String::IsNullOrWhiteSpace(citaid_txt->Text) ||
		String::IsNullOrWhiteSpace(general_txt->Text) ||
		String::IsNullOrWhiteSpace(coment_txt->Text)) {

		MessageBox::Show("Por favor, llena todos los campos antes de agregar.", "Advertencia", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	int idCita;
	if (!Int32::TryParse(citaid_txt->Text, idCita)) {
		MessageBox::Show("El campo ID de cita debe ser un número válido.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	String^ general = general_txt->Text->Trim();
	String^ coment = coment_txt->Text->Trim();

	String^ connStr = DB::ConnectionString();
	MySqlConnection^ conn = gcnew MySqlConnection(connStr);

	try {
		conn->Open();
		String^ query = "INSERT INTO reportes (id_cita, general, coment) VALUES (@idCita, @general, @coment)";

		MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
		cmd->Parameters->AddWithValue("@idCita", idCita);
		cmd->Parameters->AddWithValue("@general", general);
		cmd->Parameters->AddWithValue("@coment", coment);

		int rowsAffected = cmd->ExecuteNonQuery();

		if (rowsAffected > 0) {
			MessageBox::Show("Reporte agregado correctamente.", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);
			// Opcional: limpiar los campos
			citaid_txt->SelectedIndex = -1;
			general_txt->Clear();
			coment_txt->Clear();
		}
		else {
			MessageBox::Show("No se pudo agregar el reporte.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error al insertar datos: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	finally {
		conn->Close();
	}

	loadReportesData();
}

private: System::Void update_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ connectionString = DB::ConnectionString();
	MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

	try {
		conn->Open();

		// Obtener valores de los TextBox
		String^ idReporteStr = reporteid_txt->Text->Trim(); // ← campo ID del reporte
		String^ idCitaStr = citaid_txt->Text->Trim();
		String^ general = general_txt->Text->Trim();
		String^ coment = coment_txt->Text->Trim();

		// Validar campos vacíos
		if (idReporteStr == "" || idCitaStr == "" || general == "" || coment == "") {
			MessageBox::Show("Por favor, completa todos los campos.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Validar que los ID sean numéricos
		int idReporte, idCita;
		if (!Int32::TryParse(idReporteStr, idReporte)) {
			MessageBox::Show("ID del reporte inválido. Debe ser un número.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		if (!Int32::TryParse(idCitaStr, idCita)) {
			MessageBox::Show("ID de la cita inválido. Debe ser un número.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Ejecutar UPDATE usando idReportes
		String^ updateQuery = "UPDATE reportes SET id_cita = @id_cita, general = @general, coment = @coment WHERE idReportes = @idReportes;";
		MySqlCommand^ cmdUpdate = gcnew MySqlCommand(updateQuery, conn);
		cmdUpdate->Parameters->AddWithValue("@idReportes", idReporte);
		cmdUpdate->Parameters->AddWithValue("@id_cita", idCita);
		cmdUpdate->Parameters->AddWithValue("@general", general);
		cmdUpdate->Parameters->AddWithValue("@coment", coment);

		int rowsAffected = cmdUpdate->ExecuteNonQuery();

		if (rowsAffected > 0) {
			MessageBox::Show("Reporte actualizado correctamente.", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			MessageBox::Show("No se encontró el reporte con ese ID.", "Atención", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error al actualizar el reporte: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	finally {
		conn->Close();
	}

	loadReportesData(); // ← Asegúrate de tener esta función implementada
}


private: System::Void reporteid_txt_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void del_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ connectionString = DB::ConnectionString();
	MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

	try {
		String^ idCitaStr = citaid_txt->Text->Trim();

		// Validar campo vacío
		if (idCitaStr == "") {
			MessageBox::Show("Por favor, ingresa el ID de la cita que deseas eliminar.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Validar que el ID sea numérico
		int idCita;
		if (!Int32::TryParse(idCitaStr, idCita)) {
			MessageBox::Show("ID de cita inválido. Debe ser un número.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Confirmación de eliminación
		System::Windows::Forms::DialogResult result = MessageBox::Show(
			"¿Estás seguro de que deseas eliminar este reporte?",
			"Confirmar eliminación",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Warning
		);

		if (result == System::Windows::Forms::DialogResult::No) {
			return;
		}

		conn->Open();

		// Ejecutar DELETE
		String^ deleteQuery = "DELETE FROM reportes WHERE id_cita = @id_cita;";
		MySqlCommand^ cmdDelete = gcnew MySqlCommand(deleteQuery, conn);
		cmdDelete->Parameters->AddWithValue("@id_cita", idCita);

		int rowsAffected = cmdDelete->ExecuteNonQuery();

		if (rowsAffected > 0) {
			MessageBox::Show("Reporte eliminado correctamente.", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);

			// Limpiar los campos si deseas
			citaid_txt->SelectedIndex = -1;
			general_txt->Clear();
			coment_txt->Clear();
		}
		else {
			MessageBox::Show("No se encontró el reporte a eliminar.", "Atención", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error al eliminar el reporte: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	finally {
		conn->Close();
	}

	// Recargar tabla si aplica
	loadReportesData(); // Asegúrate de tener esta función
}


private: System::Void clean_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	// Limpiar los TextBox
	citaid_txt-> SelectedIndex = -1;
	general_txt->Clear();
	coment_txt->Clear();

	// Enfocar el primer campo si deseas
	citaid_txt->Focus();
}

};
}
