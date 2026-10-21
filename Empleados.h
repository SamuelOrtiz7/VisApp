#pragma once
#include "Style.h"
#include "DB.h"


namespace SysGUI {

	using namespace System::Data;
	using namespace MySql::Data::MySqlClient;
	using namespace System::Text::RegularExpressions;

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Empleados
	/// </summary>
	public ref class Empleados : public System::Windows::Forms::Form
	{
	public:
		Empleados(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			Style::PersonalizarPanelConDegradado(panel1);
			/*Style::PersonalizarBoton3(btn);
			Style::PersonalizarBoton(add_btn);
			Style::PersonalizarBoton(del_btn);
			Style::PersonalizarBoton(clean_btn);
			Style::PersonalizarBoton(update_btn);*/
			Style::PersonalizarDataGridView(dataGridView1);
			Style::PersonalizarBoton4(add_btn);
			Style::PersonalizarBoton4(del_btn);
			Style::PersonalizarBoton4(clean_btn);
			Style::PersonalizarBoton4(update_btn);
			Style::PersonalizarBoton4(search_btn);

			dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->CellDoubleClick += gcnew DataGridViewCellEventHandler(this, &Empleados::empleados_dgv_CellDoubleClick);
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Empleados()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ clean_btn;
	private: System::Windows::Forms::Button^ del_btn;
	private: System::Windows::Forms::Button^ update_btn;
	private: System::Windows::Forms::Button^ search_btn;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ RE;

	private: System::Windows::Forms::TextBox^ APME;



	private: System::Windows::Forms::TextBox^ APE;
	private: System::Windows::Forms::TextBox^ NomE_txt;


	private: System::Windows::Forms::TextBox^ IDE;

	private: System::Windows::Forms::Button^ add_btn;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btn;
	private: System::Windows::Forms::TextBox^ MAILE;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ PNE;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Empleados::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->clean_btn = (gcnew System::Windows::Forms::Button());
			this->del_btn = (gcnew System::Windows::Forms::Button());
			this->update_btn = (gcnew System::Windows::Forms::Button());
			this->search_btn = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->RE = (gcnew System::Windows::Forms::TextBox());
			this->APME = (gcnew System::Windows::Forms::TextBox());
			this->APE = (gcnew System::Windows::Forms::TextBox());
			this->NomE_txt = (gcnew System::Windows::Forms::TextBox());
			this->IDE = (gcnew System::Windows::Forms::TextBox());
			this->add_btn = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btn = (gcnew System::Windows::Forms::Button());
			this->MAILE = (gcnew System::Windows::Forms::TextBox());
			this->PNE = (gcnew System::Windows::Forms::TextBox());
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
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(-3, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1205, 108);
			this->panel1->TabIndex = 11;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Empleados::panel1_Paint);
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
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Open Sans Semibold", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label9->Location = System::Drawing::Point(15, 20);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(257, 60);
			this->label9->TabIndex = 4;
			this->label9->Text = L"Empleados";
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
			this->button2->Click += gcnew System::EventHandler(this, &Empleados::button2_Click);
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
			this->button1->Click += gcnew System::EventHandler(this, &Empleados::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(724, 146);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(255, 23);
			this->textBox1->TabIndex = 65;
			// 
			// clean_btn
			// 
			this->clean_btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"clean_btn.BackgroundImage")));
			this->clean_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->clean_btn->Location = System::Drawing::Point(985, 644);
			this->clean_btn->Name = L"clean_btn";
			this->clean_btn->Size = System::Drawing::Size(151, 49);
			this->clean_btn->TabIndex = 64;
			this->clean_btn->UseVisualStyleBackColor = true;
			this->clean_btn->Click += gcnew System::EventHandler(this, &Empleados::clean_btn_Click);
			// 
			// del_btn
			// 
			this->del_btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"del_btn.BackgroundImage")));
			this->del_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->del_btn->Location = System::Drawing::Point(674, 644);
			this->del_btn->Name = L"del_btn";
			this->del_btn->Size = System::Drawing::Size(154, 49);
			this->del_btn->TabIndex = 63;
			this->del_btn->UseVisualStyleBackColor = true;
			this->del_btn->Click += gcnew System::EventHandler(this, &Empleados::del_btn_Click);
			// 
			// update_btn
			// 
			this->update_btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"update_btn.BackgroundImage")));
			this->update_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->update_btn->Location = System::Drawing::Point(353, 644);
			this->update_btn->Name = L"update_btn";
			this->update_btn->Size = System::Drawing::Size(176, 49);
			this->update_btn->TabIndex = 62;
			this->update_btn->UseVisualStyleBackColor = true;
			this->update_btn->Click += gcnew System::EventHandler(this, &Empleados::update_btn_Click);
			// 
			// search_btn
			// 
			this->search_btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"search_btn.BackgroundImage")));
			this->search_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->search_btn->Location = System::Drawing::Point(985, 132);
			this->search_btn->Name = L"search_btn";
			this->search_btn->Size = System::Drawing::Size(176, 49);
			this->search_btn->TabIndex = 61;
			this->search_btn->UseVisualStyleBackColor = true;
			this->search_btn->Click += gcnew System::EventHandler(this, &Empleados::search_btn_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(758, 223);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(403, 389);
			this->dataGridView1->TabIndex = 60;
			this->dataGridView1->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Empleados::empleados_dgv_CellDoubleClick);
			// 
			// RE
			// 
			this->RE->BackColor = System::Drawing::Color::WhiteSmoke;
			this->RE->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->RE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RE->Location = System::Drawing::Point(281, 529);
			this->RE->Name = L"RE";
			this->RE->Size = System::Drawing::Size(340, 23);
			this->RE->TabIndex = 58;
			this->RE->TextChanged += gcnew System::EventHandler(this, &Empleados::RE_TextChanged);
			// 
			// APME
			// 
			this->APME->BackColor = System::Drawing::Color::WhiteSmoke;
			this->APME->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->APME->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->APME->Location = System::Drawing::Point(281, 403);
			this->APME->Name = L"APME";
			this->APME->Size = System::Drawing::Size(340, 23);
			this->APME->TabIndex = 56;
			this->APME->TextChanged += gcnew System::EventHandler(this, &Empleados::APM_TextChanged);
			// 
			// APE
			// 
			this->APE->BackColor = System::Drawing::Color::WhiteSmoke;
			this->APE->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->APE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->APE->Location = System::Drawing::Point(281, 345);
			this->APE->Name = L"APE";
			this->APE->Size = System::Drawing::Size(340, 23);
			this->APE->TabIndex = 55;
			this->APE->TextChanged += gcnew System::EventHandler(this, &Empleados::APE_TextChanged);
			// 
			// NomE_txt
			// 
			this->NomE_txt->BackColor = System::Drawing::Color::WhiteSmoke;
			this->NomE_txt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->NomE_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NomE_txt->Location = System::Drawing::Point(281, 279);
			this->NomE_txt->Name = L"NomE_txt";
			this->NomE_txt->Size = System::Drawing::Size(340, 23);
			this->NomE_txt->TabIndex = 54;
			this->NomE_txt->TextChanged += gcnew System::EventHandler(this, &Empleados::NomE_txt_TextChanged);
			// 
			// IDE
			// 
			this->IDE->BackColor = System::Drawing::Color::LightGray;
			this->IDE->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->IDE->Enabled = false;
			this->IDE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IDE->Location = System::Drawing::Point(281, 224);
			this->IDE->Name = L"IDE";
			this->IDE->Size = System::Drawing::Size(340, 23);
			this->IDE->TabIndex = 53;
			// 
			// add_btn
			// 
			this->add_btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"add_btn.BackgroundImage")));
			this->add_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->add_btn->Location = System::Drawing::Point(68, 644);
			this->add_btn->Name = L"add_btn";
			this->add_btn->Size = System::Drawing::Size(146, 49);
			this->add_btn->TabIndex = 52;
			this->add_btn->UseVisualStyleBackColor = true;
			this->add_btn->Click += gcnew System::EventHandler(this, &Empleados::add_btn_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Open Sans Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(63, 587);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(198, 27);
			this->label6->TabIndex = 51;
			this->label6->Text = L"Correo Electrónico:";
			this->label6->Click += gcnew System::EventHandler(this, &Empleados::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Open Sans Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(63, 526);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(48, 27);
			this->label7->TabIndex = 50;
			this->label7->Text = L"Rol:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Open Sans Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(63, 463);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(102, 27);
			this->label8->TabIndex = 49;
			this->label8->Text = L"Teléfono:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Open Sans Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(63, 405);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(185, 27);
			this->label5->TabIndex = 48;
			this->label5->Text = L"Apellido Materno:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Open Sans Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(63, 345);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(174, 27);
			this->label4->TabIndex = 47;
			this->label4->Text = L"Apellido Paterno";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Open Sans Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(63, 282);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(97, 27);
			this->label3->TabIndex = 46;
			this->label3->Text = L"Nombre:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Open Sans Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(63, 223);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(139, 27);
			this->label2->TabIndex = 45;
			this->label2->Text = L"ID Empleado:";
			// 
			// btn
			// 
			this->btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn.BackgroundImage")));
			this->btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->btn->Location = System::Drawing::Point(56, 132);
			this->btn->Name = L"btn";
			this->btn->Size = System::Drawing::Size(80, 70);
			this->btn->TabIndex = 44;
			this->btn->UseVisualStyleBackColor = true;
			this->btn->Click += gcnew System::EventHandler(this, &Empleados::btn_Click);
			// 
			// MAILE
			// 
			this->MAILE->BackColor = System::Drawing::Color::WhiteSmoke;
			this->MAILE->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->MAILE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MAILE->Location = System::Drawing::Point(281, 591);
			this->MAILE->Name = L"MAILE";
			this->MAILE->Size = System::Drawing::Size(340, 23);
			this->MAILE->TabIndex = 66;
			this->MAILE->TextChanged += gcnew System::EventHandler(this, &Empleados::MAILE_TextChanged);
			// 
			// PNE
			// 
			this->PNE->BackColor = System::Drawing::Color::WhiteSmoke;
			this->PNE->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->PNE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PNE->Location = System::Drawing::Point(281, 467);
			this->PNE->Name = L"PNE";
			this->PNE->Size = System::Drawing::Size(340, 23);
			this->PNE->TabIndex = 67;
			this->PNE->TextChanged += gcnew System::EventHandler(this, &Empleados::PNE_TextChanged_1);
			// 
			// Empleados
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->ClientSize = System::Drawing::Size(1200, 725);
			this->Controls->Add(this->PNE);
			this->Controls->Add(this->MAILE);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->clean_btn);
			this->Controls->Add(this->del_btn);
			this->Controls->Add(this->update_btn);
			this->Controls->Add(this->search_btn);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->RE);
			this->Controls->Add(this->APME);
			this->Controls->Add(this->APE);
			this->Controls->Add(this->NomE_txt);
			this->Controls->Add(this->IDE);
			this->Controls->Add(this->add_btn);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btn);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Empleados";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Empleados";
			this->Load += gcnew System::EventHandler(this, &Empleados::Empleados_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void empleados_dgv_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (e->RowIndex >= 0) {
			DataGridViewRow^ row = dataGridView1->Rows[e->RowIndex];

			IDE->Text = row->Cells["id_empleado"]->Value->ToString();
			NomE_txt->Text = row->Cells["nombre"]->Value->ToString();
			APE->Text = row->Cells["apellido_paternoEM"]->Value->ToString();
			APME->Text = row->Cells["apellido_maternoEM"]->Value->ToString();
			PNE->Text = row->Cells["telefono"]->Value->ToString();
			RE->Text = row->Cells["rol"]->Value->ToString();
			MAILE->Text = row->Cells["correo_electronico"]->Value->ToString();
		}
	}

	private: System::Void loadEmpleadosData() {
		try {
			String^ connStr = DB::ConnectionString();
			MySqlConnection^ conn = gcnew MySqlConnection(connStr);
			conn->Open();

			String^ selectQuery = "SELECT id_empleado, nombre, apellido_paternoEM, apellido_maternoEM, telefono, rol, correo_electronico FROM empleado;";
			MySqlCommand^ cmd = gcnew MySqlCommand(selectQuery, conn);
			MySqlDataAdapter^ da = gcnew MySqlDataAdapter(cmd);
			DataTable^ dt = gcnew DataTable();
			da->Fill(dt);

			// Asigna los datos al DataGridView
			dataGridView1->DataSource = dt;

			conn->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error al cargar los empleados: " + ex->Message);
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
	private: System::Void Empleados_Load(System::Object^ sender, System::EventArgs^ e) {
		this->panel1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Empleados::Form_MouseDown);
		this->panel1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Empleados::Form_MouseMove);
		this->panel1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Empleados::Form_MouseUp);
		dataGridView1->EditMode = DataGridViewEditMode::EditProgrammatically;
		this->dataGridView1->SelectionMode = DataGridViewSelectionMode::FullRowSelect;
		loadEmpleadosData();
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->WindowState = FormWindowState::Minimized;
}
private: System::Void btn_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void NomE_txt_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	//Nombre Empleado (nombre)
}
private: System::Void APE_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	//Apellido paterno(apellido_paternoEM)
}
private: System::Void APM_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	//Apellido materno (apellido_maternoEM)
}
private: System::Void PNE_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	//Numero de telefono(telefono)
}
private: System::Void RE_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	//Rol(rol)
}
private: System::Void MAILE_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	//email(correo_electronico)
}
private: System::Void add_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ nombre = NomE_txt->Text->Trim();
	String^ apellidoP = APE->Text->Trim();
	String^ apellidoM = APME->Text->Trim();
	String^ telefono = PNE->Text->Trim();
	String^ rol = RE->Text->Trim();
	String^ correo = MAILE->Text->Trim();

	// Validación: nombre
	if (String::IsNullOrWhiteSpace(nombre) || !System::Text::RegularExpressions::Regex::IsMatch(nombre, "^[a-zA-ZáéíóúÁÉÍÓÚñÑ\\s]+$")) {
		MessageBox::Show("Nombre inválido. Solo letras y espacios.");
		return;
	}

	// Validación: apellido paterno
	if (String::IsNullOrWhiteSpace(apellidoP) || !System::Text::RegularExpressions::Regex::IsMatch(apellidoP, "^[a-zA-ZáéíóúÁÉÍÓÚñÑ\\s]+$")) {
		MessageBox::Show("Apellido paterno inválido.");
		return;
	}

	// Validación: apellido materno
	if (String::IsNullOrWhiteSpace(apellidoM) || !System::Text::RegularExpressions::Regex::IsMatch(apellidoM, "^[a-zA-ZáéíóúÁÉÍÓÚñÑ\\s]+$")) {
		MessageBox::Show("Apellido materno inválido.");
		return;
	}

	// Validación: teléfono
	if (String::IsNullOrWhiteSpace(telefono) || !System::Text::RegularExpressions::Regex::IsMatch(telefono, "^[0-9]{10}$")) {
		MessageBox::Show("Teléfono inválido. Debe contener exactamente 10 dígitos.");
		return;
	}

	// Validación: rol
	if (String::IsNullOrWhiteSpace(rol) || !System::Text::RegularExpressions::Regex::IsMatch(rol, "^[a-zA-ZáéíóúÁÉÍÓÚñÑ\\s]+$")) {
		MessageBox::Show("Rol inválido. Solo letras y espacios.");
		return;
	}

	// Validación: correo electrónico
	if (String::IsNullOrWhiteSpace(correo) || !System::Text::RegularExpressions::Regex::IsMatch(correo, "^[\\w.-]+@[\\w.-]+\\.\\w{2,4}$")) {
		MessageBox::Show("Correo electrónico inválido.");
		return;
	}

	// Si todas las validaciones pasan:
	try {
		String^ connStr = DB::ConnectionString();
		MySqlConnection^ conn = gcnew MySqlConnection(connStr);
		conn->Open();

		String^ insertQuery = "INSERT INTO empleado (nombre, apellido_paternoEM, apellido_maternoEM, telefono, rol, correo_electronico) " +
			"VALUES (@nombre, @apeP, @apeM, @tel, @rol, @correo);";

		MySqlCommand^ cmd = gcnew MySqlCommand(insertQuery, conn);

		cmd->Parameters->AddWithValue("@nombre", NomE_txt->Text->Trim());
		cmd->Parameters->AddWithValue("@apeP", APE->Text->Trim());
		cmd->Parameters->AddWithValue("@apeM", APME->Text->Trim());
		cmd->Parameters->AddWithValue("@tel", PNE->Text->Trim());
		cmd->Parameters->AddWithValue("@rol", RE->Text->Trim());
		cmd->Parameters->AddWithValue("@correo", MAILE->Text->Trim());

		int rowsAffected = cmd->ExecuteNonQuery();

		if (rowsAffected > 0) {
			MessageBox::Show("Empleado registrado correctamente.");
			// Aquí puedes limpiar los campos si quieres:
			// NomE_txt->Clear(); etc.
		}
		else {
			MessageBox::Show("No se pudo registrar el empleado.");
		}

		conn->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error al registrar el empleado: " + ex->Message);
	}
	loadEmpleadosData();
}

private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void search_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ busqueda = textBox1->Text->Trim();

	// Validar que el campo de búsqueda no esté vacío
	if (String::IsNullOrWhiteSpace(busqueda)) {
		loadEmpleadosData();
		return;
	}

	// Validar que no contenga caracteres especiales (solo letras, números y espacios)
	if (!System::Text::RegularExpressions::Regex::IsMatch(busqueda, "^[a-zA-Z0-9 áéíóúÁÉÍÓÚñÑ]+$")) {
		MessageBox::Show("El campo de búsqueda solo puede contener letras, números y espacios.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	try {
		String^ connStr = DB::ConnectionString();
		MySqlConnection^ conn = gcnew MySqlConnection(connStr);
		conn->Open();

		String^ query = "SELECT id_empleado, nombre, apellido_paternoEM, apellido_maternoEM, telefono, rol, correo_electronico " +
			"FROM empleado WHERE " +
			"id_empleado LIKE @busqueda OR " +
			"nombre LIKE @busquedaL OR " +
			"apellido_paternoEM LIKE @busquedaL OR " +
			"apellido_maternoEM LIKE @busquedaL OR " +
			"rol LIKE @busquedaL;";

		MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
		cmd->Parameters->AddWithValue("@busqueda", "%" + busqueda + "%");
		cmd->Parameters->AddWithValue("@busquedaL", "%" + busqueda->ToLower() + "%");

		MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter(cmd);
		DataTable^ dt = gcnew DataTable();
		adapter->Fill(dt);

		dataGridView1->DataSource = dt;

		if (dt->Rows->Count == 0) {
			MessageBox::Show("No se encontraron resultados.", "Sin coincidencias", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error en la búsqueda: " + ex->Message);
	}
}


private: System::Void PNE_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}


private: System::Void update_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	if (String::IsNullOrWhiteSpace(IDE->Text)) {
		MessageBox::Show("Selecciona un empleado para actualizar.");
		return;
	}

	// Validaciones de campos vacíos
	if (String::IsNullOrWhiteSpace(NomE_txt->Text) ||
		String::IsNullOrWhiteSpace(APE->Text) ||
		String::IsNullOrWhiteSpace(APME->Text) ||
		String::IsNullOrWhiteSpace(PNE->Text) ||
		String::IsNullOrWhiteSpace(RE->Text) ||
		String::IsNullOrWhiteSpace(MAILE->Text)) {

		MessageBox::Show("Por favor, completa todos los campos.");
		return;
	}

	// Validación de nombre y apellidos (solo letras y espacios)
	String^ regexLetras = "^[a-zA-ZáéíóúÁÉÍÓÚñÑ ]+$";
	if (!Regex::IsMatch(NomE_txt->Text, regexLetras)) {
		MessageBox::Show("Nombre inválido.");
		return;
	}
	if (!Regex::IsMatch(APE->Text, regexLetras)) {
		MessageBox::Show("Apellido paterno inválido.");
		return;
	}
	if (!Regex::IsMatch(APME->Text, regexLetras)) {
		MessageBox::Show("Apellido materno inválido.");
		return;
	}

	// Validación de teléfono (exactamente 10 dígitos)
	if (!Regex::IsMatch(PNE->Text, "^[0-9]{10}$")) {
		MessageBox::Show("El número de teléfono debe contener exactamente 10 dígitos.");
		return;
	}

	// Validación de correo electrónico
	if (!Regex::IsMatch(MAILE->Text, "^[\\w\\.-]+@[\\w\\.-]+\\.\\w{2,4}$")) {
		MessageBox::Show("Correo electrónico inválido.");
		return;
	}

	// Validación de rol (opcional, puede ajustarse según valores permitidos)
	if (!Regex::IsMatch(RE->Text, regexLetras)) {
		MessageBox::Show("Rol inválido.");
		return;
	}

	try {
		int idEmpleado = Int32::Parse(IDE->Text); // Asegura que sea numérico

		String^ connStr = DB::ConnectionString();
		MySqlConnection^ conn = gcnew MySqlConnection(connStr);
		conn->Open();

		String^ query = "UPDATE empleado SET nombre = @nombre, apellido_paternoEM = @apeP, apellido_maternoEM = @apeM, telefono = @tel, rol = @rol, correo_electronico = @correo WHERE id_empleado = @id;";
		MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);

		cmd->Parameters->AddWithValue("@nombre", NomE_txt->Text->Trim());
		cmd->Parameters->AddWithValue("@apeP", APE->Text->Trim());
		cmd->Parameters->AddWithValue("@apeM", APME->Text->Trim());
		cmd->Parameters->AddWithValue("@tel", PNE->Text->Trim());
		cmd->Parameters->AddWithValue("@rol", RE->Text->Trim());
		cmd->Parameters->AddWithValue("@correo", MAILE->Text->Trim());
		cmd->Parameters->AddWithValue("@id", idEmpleado);

		cmd->ExecuteNonQuery();
		conn->Close();

		MessageBox::Show("Empleado actualizado correctamente.");
		loadEmpleadosData();
	}
	catch (FormatException^) {
		MessageBox::Show("ID de empleado inválido.");
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error al actualizar: " + ex->Message);
	}
}



private: System::Void del_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dataGridView1->SelectedRows->Count == 0) {
		MessageBox::Show("Selecciona un empleado para eliminar.");
		return;
	}

	int id = Convert::ToInt32(dataGridView1->SelectedRows[0]->Cells["id_empleado"]->Value);

	if (MessageBox::Show("¿Estás seguro de que deseas eliminar este empleado?", "Confirmar eliminación", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes) {
		try {
			String^ connStr = DB::ConnectionString();
			MySqlConnection^ conn = gcnew MySqlConnection(connStr);
			conn->Open();

			String^ query = "DELETE FROM empleado WHERE id_empleado = @id;";
			MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
			cmd->Parameters->AddWithValue("@id", id);
			cmd->ExecuteNonQuery();
			conn->Close();

			MessageBox::Show("Empleado eliminado correctamente.");
			loadEmpleadosData();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error al eliminar: " + ex->Message);
		}
	}
}
private: System::Void clean_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	IDE->Clear();
	NomE_txt->Clear();
	APE->Clear();
	APME->Clear();
	PNE->Clear();
	RE->Clear();
	MAILE->Clear();
}
};
}
