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
	/// Resumen de Clientes
	/// </summary>
	public ref class Clientes : public System::Windows::Forms::Form
	{
	public:
		Clientes(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->CellDoubleClick += gcnew DataGridViewCellEventHandler(this, &Clientes::dataGridView1_CellDoubleClick);

			Style::PersonalizarPanelConDegradado(panel1);
			//Style::PersonalizarBoton3(btn);
			Style::PersonalizarBoton4(add_btn);
			Style::PersonalizarBoton4(del_btn);
			Style::PersonalizarBoton4(clean_btn);
			Style::PersonalizarBoton4(update_btn);
			Style::PersonalizarBoton4(search_btn);
			Style::PersonalizarDataGridView(dataGridView1);
			
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Clientes()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ btn;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ add_btn;
	private: System::Windows::Forms::TextBox^ hora_txt;


	private: System::Windows::Forms::TextBox^ APC;
	private: System::Windows::Forms::TextBox^ AMC;
	private: System::Windows::Forms::TextBox^ PNC;
	private: System::Windows::Forms::TextBox^ EMAILC;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;




	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ search_btn;


	private: System::Windows::Forms::Button^ update_btn;
	private: System::Windows::Forms::Button^ del_btn;
	private: System::Windows::Forms::Button^ clean_btn;
	private: System::Windows::Forms::TextBox^ textBox1;


	private: System::Windows::Forms::TextBox^ name_cli;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Clientes::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->btn = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->add_btn = (gcnew System::Windows::Forms::Button());
			this->hora_txt = (gcnew System::Windows::Forms::TextBox());
			this->APC = (gcnew System::Windows::Forms::TextBox());
			this->AMC = (gcnew System::Windows::Forms::TextBox());
			this->PNC = (gcnew System::Windows::Forms::TextBox());
			this->EMAILC = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->search_btn = (gcnew System::Windows::Forms::Button());
			this->update_btn = (gcnew System::Windows::Forms::Button());
			this->del_btn = (gcnew System::Windows::Forms::Button());
			this->clean_btn = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->name_cli = (gcnew System::Windows::Forms::TextBox());
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
			this->panel1->TabIndex = 11;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Clientes::panel1_Paint);
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
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(10, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(193, 60);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Clientes";
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
			this->button1->Click += gcnew System::EventHandler(this, &Clientes::button1_Click);
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
			this->button2->Click += gcnew System::EventHandler(this, &Clientes::button2_Click);
			// 
			// btn
			// 
			this->btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn.BackgroundImage")));
			this->btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->btn->Location = System::Drawing::Point(16, 127);
			this->btn->Name = L"btn";
			this->btn->Size = System::Drawing::Size(91, 83);
			this->btn->TabIndex = 21;
			this->btn->UseVisualStyleBackColor = true;
			this->btn->Click += gcnew System::EventHandler(this, &Clientes::btn_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Open Sans Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(47, 228);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(113, 27);
			this->label2->TabIndex = 22;
			this->label2->Text = L"ID Cliente:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Open Sans Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(47, 287);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(97, 27);
			this->label3->TabIndex = 23;
			this->label3->Text = L"Nombre:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Open Sans Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(47, 350);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(174, 27);
			this->label4->TabIndex = 24;
			this->label4->Text = L"Apellido Paterno";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Open Sans Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(47, 410);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(185, 27);
			this->label5->TabIndex = 25;
			this->label5->Text = L"Apellido Materno:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Open Sans Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(47, 468);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(102, 27);
			this->label8->TabIndex = 26;
			this->label8->Text = L"Teléfono:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Open Sans Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(47, 531);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(84, 27);
			this->label7->TabIndex = 27;
			this->label7->Text = L"Correo:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Open Sans Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(47, 592);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(186, 27);
			this->label6->TabIndex = 28;
			this->label6->Text = L"Fecha de registro:";
			// 
			// add_btn
			// 
			this->add_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->add_btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"add_btn.BackgroundImage")));
			this->add_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->add_btn->Location = System::Drawing::Point(53, 652);
			this->add_btn->Name = L"add_btn";
			this->add_btn->Size = System::Drawing::Size(146, 49);
			this->add_btn->TabIndex = 29;
			this->add_btn->UseVisualStyleBackColor = false;
			this->add_btn->Click += gcnew System::EventHandler(this, &Clientes::add_btn_Click);
			// 
			// hora_txt
			// 
			this->hora_txt->BackColor = System::Drawing::Color::LightGray;
			this->hora_txt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->hora_txt->Enabled = false;
			this->hora_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->hora_txt->Location = System::Drawing::Point(265, 229);
			this->hora_txt->Name = L"hora_txt";
			this->hora_txt->Size = System::Drawing::Size(356, 23);
			this->hora_txt->TabIndex = 31;
			this->hora_txt->TextChanged += gcnew System::EventHandler(this, &Clientes::hora_txt_TextChanged);
			// 
			// APC
			// 
			this->APC->BackColor = System::Drawing::Color::WhiteSmoke;
			this->APC->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->APC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->APC->Location = System::Drawing::Point(265, 350);
			this->APC->Name = L"APC";
			this->APC->Size = System::Drawing::Size(356, 27);
			this->APC->TabIndex = 33;
			this->APC->TextChanged += gcnew System::EventHandler(this, &Clientes::APC_TextChanged);
			// 
			// AMC
			// 
			this->AMC->BackColor = System::Drawing::Color::WhiteSmoke;
			this->AMC->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->AMC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AMC->Location = System::Drawing::Point(265, 408);
			this->AMC->Name = L"AMC";
			this->AMC->Size = System::Drawing::Size(356, 27);
			this->AMC->TabIndex = 34;
			this->AMC->TextChanged += gcnew System::EventHandler(this, &Clientes::AMC_TextChanged);
			// 
			// PNC
			// 
			this->PNC->BackColor = System::Drawing::Color::WhiteSmoke;
			this->PNC->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->PNC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PNC->Location = System::Drawing::Point(265, 468);
			this->PNC->Name = L"PNC";
			this->PNC->Size = System::Drawing::Size(356, 27);
			this->PNC->TabIndex = 35;
			this->PNC->TextChanged += gcnew System::EventHandler(this, &Clientes::PNC_TextChanged);
			// 
			// EMAILC
			// 
			this->EMAILC->BackColor = System::Drawing::Color::WhiteSmoke;
			this->EMAILC->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->EMAILC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EMAILC->Location = System::Drawing::Point(265, 534);
			this->EMAILC->Name = L"EMAILC";
			this->EMAILC->Size = System::Drawing::Size(356, 27);
			this->EMAILC->TabIndex = 36;
			this->EMAILC->TextChanged += gcnew System::EventHandler(this, &Clientes::EMAILC_TextChanged);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(265, 596);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(356, 22);
			this->dateTimePicker1->TabIndex = 37;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &Clientes::dateTimePicker1_ValueChanged);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(696, 228);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(437, 391);
			this->dataGridView1->TabIndex = 38;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Clientes::dataGridView1_CellContentClick);
			// 
			// search_btn
			// 
			this->search_btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"search_btn.BackgroundImage")));
			this->search_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->search_btn->Location = System::Drawing::Point(957, 173);
			this->search_btn->Name = L"search_btn";
			this->search_btn->Size = System::Drawing::Size(176, 49);
			this->search_btn->TabIndex = 39;
			this->search_btn->UseVisualStyleBackColor = true;
			this->search_btn->Click += gcnew System::EventHandler(this, &Clientes::search_btn_Click);
			// 
			// update_btn
			// 
			this->update_btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"update_btn.BackgroundImage")));
			this->update_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->update_btn->Location = System::Drawing::Point(382, 652);
			this->update_btn->Name = L"update_btn";
			this->update_btn->Size = System::Drawing::Size(176, 49);
			this->update_btn->TabIndex = 40;
			this->update_btn->UseVisualStyleBackColor = true;
			this->update_btn->Click += gcnew System::EventHandler(this, &Clientes::update_btn_Click);
			// 
			// del_btn
			// 
			this->del_btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"del_btn.BackgroundImage")));
			this->del_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->del_btn->Location = System::Drawing::Point(696, 650);
			this->del_btn->Name = L"del_btn";
			this->del_btn->Size = System::Drawing::Size(154, 49);
			this->del_btn->TabIndex = 41;
			this->del_btn->UseVisualStyleBackColor = true;
			this->del_btn->Click += gcnew System::EventHandler(this, &Clientes::del_btn_Click);
			// 
			// clean_btn
			// 
			this->clean_btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"clean_btn.BackgroundImage")));
			this->clean_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->clean_btn->Location = System::Drawing::Point(978, 652);
			this->clean_btn->Name = L"clean_btn";
			this->clean_btn->Size = System::Drawing::Size(155, 49);
			this->clean_btn->TabIndex = 42;
			this->clean_btn->UseVisualStyleBackColor = true;
			this->clean_btn->Click += gcnew System::EventHandler(this, &Clientes::clean_btn_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(696, 183);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(255, 27);
			this->textBox1->TabIndex = 43;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Clientes::textBox1_TextChanged);
			// 
			// name_cli
			// 
			this->name_cli->BackColor = System::Drawing::Color::WhiteSmoke;
			this->name_cli->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->name_cli->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->name_cli->Location = System::Drawing::Point(265, 295);
			this->name_cli->Multiline = true;
			this->name_cli->Name = L"name_cli";
			this->name_cli->Size = System::Drawing::Size(356, 27);
			this->name_cli->TabIndex = 44;
			this->name_cli->TextChanged += gcnew System::EventHandler(this, &Clientes::name_cli_TextChanged_1);
			// 
			// Clientes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->ClientSize = System::Drawing::Size(1200, 725);
			this->Controls->Add(this->name_cli);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->clean_btn);
			this->Controls->Add(this->del_btn);
			this->Controls->Add(this->update_btn);
			this->Controls->Add(this->search_btn);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->EMAILC);
			this->Controls->Add(this->PNC);
			this->Controls->Add(this->AMC);
			this->Controls->Add(this->APC);
			this->Controls->Add(this->hora_txt);
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
			this->Name = L"Clientes";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Clientes";
			this->Load += gcnew System::EventHandler(this, &Clientes::Clientes_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void dataGridView1_CellDoubleClick(System::Object^ sender, DataGridViewCellEventArgs^ e) {
	if (e->RowIndex >= 0) {
		DataGridViewRow^ row = dataGridView1->Rows[e->RowIndex];
		hora_txt->Text = row->Cells["id_cliente"]->Value->ToString();  // Este debe estar deshabilitado
		name_cli->Text = row->Cells["nombre"]->Value->ToString();
		APC->Text = row->Cells["apellido_paternoCL"]->Value->ToString();
		AMC->Text = row->Cells["apellido_maternoCL"]->Value->ToString();
		PNC->Text = row->Cells["telefono"]->Value->ToString();
		EMAILC->Text = row->Cells["correo_electronico"]->Value->ToString();
		dateTimePicker1->Value = DateTime::Parse(row->Cells["fecha_registro"]->Value->ToString());
	}
}

	private: System::Void LoadClientesData() {
		// Configurar la conexión a la base de datos
		String^ connectionString = DB::ConnectionString();
		MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

		try {
			conn->Open();
			String^ query = "SELECT * FROM cliente;";  // Consultar la tabla "cliente"
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

	private: System::Void AgregarCliente() {
		// Conexión a la base de datos
		String^ connectionString = DB::ConnectionString();
		MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

		try {
			conn->Open();

			// Obtener datos del formulario
			String^ nombre = name_cli->Text;
			String^ apellidoP = APC->Text;
			String^ apellidoM = AMC->Text;
			String^ telefono = PNC->Text;
			String^ correo = EMAILC->Text;
			String^ fecha = dateTimePicker1->Value.ToString("yyyy-MM-dd"); // formato correcto para MySQL

			// Consulta SQL con parámetros
			String^ query = "INSERT INTO cliente (nombre, apellido_paternoCL, apellido_maternoCL, telefono, correo_electronico, fecha_registro) " +
				"VALUES (@nombre, @apellidoP, @apellidoM, @telefono, @correo, @fecha);";

			MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
			cmd->Parameters->AddWithValue("@nombre", nombre);
			cmd->Parameters->AddWithValue("@apellidoP", apellidoP);
			cmd->Parameters->AddWithValue("@apellidoM", apellidoM);
			cmd->Parameters->AddWithValue("@telefono", telefono);
			cmd->Parameters->AddWithValue("@correo", correo);
			cmd->Parameters->AddWithValue("@fecha", fecha);

			// Ejecutar la consulta
			cmd->ExecuteNonQuery();

			MessageBox::Show("Cliente agregado exitosamente.");

			// Refrescar el DataGridView si tienes una función como esta
			LoadClientesData();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error al agregar cliente: " + ex->Message);
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


	private: System::Void Clientes_Load(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->EditMode = DataGridViewEditMode::EditProgrammatically;
		this->dataGridView1->SelectionMode = DataGridViewSelectionMode::FullRowSelect;
		
		LoadClientesData();
	}
private: System::Void update_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ connectionString = DB::ConnectionString();
	MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

	try {
		conn->Open();

		// Validaciones básicas
		if (String::IsNullOrWhiteSpace(hora_txt->Text) ||
			String::IsNullOrWhiteSpace(name_cli->Text) ||
			String::IsNullOrWhiteSpace(APC->Text) ||
			String::IsNullOrWhiteSpace(AMC->Text) ||
			String::IsNullOrWhiteSpace(PNC->Text) ||
			String::IsNullOrWhiteSpace(EMAILC->Text)) {
			MessageBox::Show("Todos los campos deben estar completos.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Validar ID
		int id_cliente;
		if (!Int32::TryParse(hora_txt->Text->Trim(), id_cliente)) {
			MessageBox::Show("El ID del cliente debe ser un número válido.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Validar nombre y apellidos (solo letras y espacios)
		if (!Regex::IsMatch(name_cli->Text, "^[a-zA-ZáéíóúÁÉÍÓÚñÑ ]+$") ||
			!Regex::IsMatch(APC->Text, "^[a-zA-ZáéíóúÁÉÍÓÚñÑ ]+$") ||
			!Regex::IsMatch(AMC->Text, "^[a-zA-ZáéíóúÁÉÍÓÚñÑ ]+$")) {
			MessageBox::Show("Nombre y apellidos solo deben contener letras y espacios.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Validar teléfono (solo dígitos, 10 cifras comunes en México)
		if (!Regex::IsMatch(PNC->Text, "^[0-9]{10}$")) {
			MessageBox::Show("Número de teléfono inválido. Debe tener 10 dígitos.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Validar correo electrónico
		if (!Regex::IsMatch(EMAILC->Text, "^[\\w\\.-]+@[\\w\\.-]+\\.\\w{2,4}$")) {
			MessageBox::Show("Correo electrónico inválido.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Obtener datos
		String^ nombre = name_cli->Text->Trim();
		String^ apellidoP = APC->Text->Trim();
		String^ apellidoM = AMC->Text->Trim();
		String^ telefono = PNC->Text->Trim();
		String^ correo = EMAILC->Text->Trim();
		String^ fecha = dateTimePicker1->Value.ToString("yyyy-MM-dd");

		// Consulta UPDATE
		String^ query = "UPDATE cliente SET nombre = @nombre, apellido_paternoCL = @apellidoP, apellido_maternoCL = @apellidoM, " +
			"telefono = @telefono, correo_electronico = @correo, fecha_registro = @fecha WHERE id_cliente = @id;";

		MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
		cmd->Parameters->AddWithValue("@id", id_cliente);
		cmd->Parameters->AddWithValue("@nombre", nombre);
		cmd->Parameters->AddWithValue("@apellidoP", apellidoP);
		cmd->Parameters->AddWithValue("@apellidoM", apellidoM);
		cmd->Parameters->AddWithValue("@telefono", telefono);
		cmd->Parameters->AddWithValue("@correo", correo);
		cmd->Parameters->AddWithValue("@fecha", fecha);

		int result = cmd->ExecuteNonQuery();
		if (result > 0) {
			MessageBox::Show("Cliente actualizado exitosamente.", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);
			LoadClientesData(); // Refrescar tabla
		}
		else {
			MessageBox::Show("No se encontró el cliente con el ID especificado.", "Aviso", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error al actualizar cliente: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	finally {
		conn->Close();
	}
}


private: System::Void del_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dataGridView1->SelectedRows->Count > 0) {
		if (MessageBox::Show("¿Estás seguro de que deseas eliminar este cliente?", "Confirmar eliminación",
			MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes) {

			int id_cliente = Convert::ToInt32(dataGridView1->SelectedRows[0]->Cells["id_cliente"]->Value->ToString());
			String^ connectionString = DB::ConnectionString();
			MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

			try {
				conn->Open();

				String^ query = "DELETE FROM cliente WHERE id_cliente = @id;";
				MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
				cmd->Parameters->AddWithValue("@id", id_cliente);
				cmd->ExecuteNonQuery();

				MessageBox::Show("Cliente eliminado correctamente.");
				LoadClientesData(); // Refrescar
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error al eliminar cliente: " + ex->Message);
			}
			finally {
				conn->Close();
			}
		}
	}
	else {
		MessageBox::Show("Selecciona un cliente para eliminar.");
	}
}
private: System::Void clean_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	hora_txt->Clear();
	name_cli->Clear();
	APC->Clear();
	AMC->Clear();
	PNC->Clear();
	EMAILC->Clear();
	dateTimePicker1->Value = DateTime::Now;
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	this->panel1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Clientes::Form_MouseDown);
	this->panel1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Clientes::Form_MouseMove);
	this->panel1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Clientes::Form_MouseUp);
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->WindowState = FormWindowState::Minimized;

}
private: System::Void btn_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}

private: System::Void name_cli_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
	//Nombre
}
private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	//Fecha de registro
}
private: System::Void APC_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	//Apellido Paterno cliente
}
private: System::Void AMC_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	//Apellido materno cliente
}
private: System::Void PNC_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	//Numero de telefono
}
private: System::Void EMAILC_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	//email cliente
}
private: System::Void hora_txt_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void add_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	// Validar que el nombre del cliente no esté vacío
	if (String::IsNullOrWhiteSpace(name_cli->Text)) {
		MessageBox::Show("El nombre del cliente no puede estar vacío.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	// Validar que el nombre solo contenga letras y espacios
	if (!System::Text::RegularExpressions::Regex::IsMatch(name_cli->Text, "^[A-Za-zÁÉÍÓÚáéíóúñÑ ]+$")) {
		MessageBox::Show("El nombre del cliente solo puede contener letras y espacios.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// Validar que el apellido paterno no esté vacío
	if (String::IsNullOrWhiteSpace(APC->Text)) {
		MessageBox::Show("El apellido paterno no puede estar vacío.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	// Validar que el apellido paterno solo contenga letras y espacios
	if (!System::Text::RegularExpressions::Regex::IsMatch(APC->Text, "^[A-Za-zÁÉÍÓÚáéíóúñÑ ]+$")) {
		MessageBox::Show("El apellido paterno solo puede contener letras y espacios.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// Validar que el apellido materno no esté vacío
	if (String::IsNullOrWhiteSpace(AMC->Text)) {
		MessageBox::Show("El apellido materno no puede estar vacío.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	// Validar que el apellido materno solo contenga letras y espacios
	if (!System::Text::RegularExpressions::Regex::IsMatch(AMC->Text, "^[A-Za-zÁÉÍÓÚáéíóúñÑ ]+$")) {
		MessageBox::Show("El apellido materno solo puede contener letras y espacios.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// Validar que el número de teléfono no esté vacío
	if (String::IsNullOrWhiteSpace(PNC->Text)) {
		MessageBox::Show("El número de teléfono no puede estar vacío.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	// Validar que el número de teléfono contenga exactamente 10 dígitos numéricos
	if (!System::Text::RegularExpressions::Regex::IsMatch(PNC->Text, "^[0-9]{10}$")) {
		MessageBox::Show("El número de teléfono debe contener exactamente 10 dígitos.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// Validar que el correo electrónico no esté vacío
	if (String::IsNullOrWhiteSpace(EMAILC->Text)) {
		MessageBox::Show("El correo electrónico no puede estar vacío.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	// Validar que el correo tenga un formato válido
	if (!System::Text::RegularExpressions::Regex::IsMatch(EMAILC->Text, "^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\\.[a-zA-Z]{2,}$")) {
		MessageBox::Show("El correo electrónico no es válido. Ejemplo: usuario@dominio.com", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	//Se agrega el cliente al pasar todas las validaciones
	AgregarCliente();
}

private: System::Void search_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	// Validar que el campo de búsqueda no esté vacío
	if (String::IsNullOrWhiteSpace(textBox1->Text)) {
		LoadClientesData();
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
		String^ query = "SELECT id_cliente, nombre, apellido_paternoCL, apellido_maternoCL, telefono, correo_electronico, fecha_registro " +
			"FROM cliente " +
			"WHERE id_cliente LIKE @param OR nombre LIKE @param OR apellido_paternoCL LIKE @param OR apellido_maternoCL LIKE @param";

		MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
		cmd->Parameters->AddWithValue("@param", "%" + busqueda + "%");

		MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter(cmd);
		DataTable^ dt = gcnew DataTable();
		adapter->Fill(dt);

		// Mostrar resultados en el DataGridView
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

private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
