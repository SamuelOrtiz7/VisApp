#pragma once
#include "Style.h"
#include "DB.h"

using namespace System;
using namespace System::Data;
using namespace MySql::Data::MySqlClient;

namespace SysGUI {

	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Drawing;

	// Pantalla de configuracion inicial: crea (si falta) la base de datos,
	// la tabla de administradores, y la cuenta de administrador inicial.
	// Se abre desde un boton en la pantalla de Login.
	public ref class SetupForm : public System::Windows::Forms::Form
	{
	public:
		SetupForm(void)
		{
			InitializeComponent();
			server_txt->Text = DB::Server;
			db_txt->Text = DB::Database;
			user_txt->Text = DB::User;
			pass_txt->Text = DB::Password;
		}

	protected:
		~SetupForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		System::ComponentModel::Container^ components;

		Label^ titulo;
		Label^ lbl_server;
		TextBox^ server_txt;
		Label^ lbl_db;
		TextBox^ db_txt;
		Label^ lbl_user;
		TextBox^ user_txt;
		Label^ lbl_pass;
		TextBox^ pass_txt;
		Label^ lbl_admin_pass;
		TextBox^ admin_pass_txt;
		Label^ lbl_admin_pass2;
		TextBox^ admin_pass2_txt;
		Button^ crear_btn;
		Label^ status_lbl;

		void InitializeComponent(void)
		{
			this->titulo = gcnew Label();
			this->lbl_server = gcnew Label();
			this->server_txt = gcnew TextBox();
			this->lbl_db = gcnew Label();
			this->db_txt = gcnew TextBox();
			this->lbl_user = gcnew Label();
			this->user_txt = gcnew TextBox();
			this->lbl_pass = gcnew Label();
			this->pass_txt = gcnew TextBox();
			this->lbl_admin_pass = gcnew Label();
			this->admin_pass_txt = gcnew TextBox();
			this->lbl_admin_pass2 = gcnew Label();
			this->admin_pass2_txt = gcnew TextBox();
			this->crear_btn = gcnew Button();
			this->status_lbl = gcnew Label();

			this->SuspendLayout();

			this->titulo->AutoSize = true;
			this->titulo->Font = gcnew Drawing::Font(L"Open Sans Semibold", 14, Drawing::FontStyle::Bold);
			this->titulo->Location = Drawing::Point(20, 15);
			this->titulo->Text = L"Configuracion inicial";

			int y = 55;
			int step = 32;

			this->lbl_server->AutoSize = true;
			this->lbl_server->Location = Drawing::Point(20, y);
			this->lbl_server->Text = L"Servidor:";
			this->server_txt->Location = Drawing::Point(160, y - 3);
			this->server_txt->Size = Drawing::Size(200, 23);
			y += step;

			this->lbl_db->AutoSize = true;
			this->lbl_db->Location = Drawing::Point(20, y);
			this->lbl_db->Text = L"Base de datos:";
			this->db_txt->Location = Drawing::Point(160, y - 3);
			this->db_txt->Size = Drawing::Size(200, 23);
			y += step;

			this->lbl_user->AutoSize = true;
			this->lbl_user->Location = Drawing::Point(20, y);
			this->lbl_user->Text = L"Usuario MySQL:";
			this->user_txt->Location = Drawing::Point(160, y - 3);
			this->user_txt->Size = Drawing::Size(200, 23);
			y += step;

			this->lbl_pass->AutoSize = true;
			this->lbl_pass->Location = Drawing::Point(20, y);
			this->lbl_pass->Text = L"Contrasena MySQL:";
			this->pass_txt->Location = Drawing::Point(160, y - 3);
			this->pass_txt->Size = Drawing::Size(200, 23);
			this->pass_txt->PasswordChar = '*';
			y += step + 10;

			this->lbl_admin_pass->AutoSize = true;
			this->lbl_admin_pass->Location = Drawing::Point(20, y);
			this->lbl_admin_pass->Text = L"Nueva contrasena de admin:";
			this->admin_pass_txt->Location = Drawing::Point(220, y - 3);
			this->admin_pass_txt->Size = Drawing::Size(140, 23);
			this->admin_pass_txt->PasswordChar = '*';
			y += step;

			this->lbl_admin_pass2->AutoSize = true;
			this->lbl_admin_pass2->Location = Drawing::Point(20, y);
			this->lbl_admin_pass2->Text = L"Confirmar contrasena:";
			this->admin_pass2_txt->Location = Drawing::Point(220, y - 3);
			this->admin_pass2_txt->Size = Drawing::Size(140, 23);
			this->admin_pass2_txt->PasswordChar = '*';
			y += step + 10;

			this->crear_btn->Location = Drawing::Point(20, y);
			this->crear_btn->Size = Drawing::Size(340, 32);
			this->crear_btn->Text = L"Crear base de datos y administrador";
			this->crear_btn->Click += gcnew EventHandler(this, &SetupForm::crear_btn_Click);
			y += 42;

			this->status_lbl->Location = Drawing::Point(20, y);
			this->status_lbl->Size = Drawing::Size(340, 40);
			this->status_lbl->Text = L"";

			this->AutoScaleDimensions = Drawing::SizeF(7, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = Drawing::Size(380, y + 50);
			this->Controls->Add(this->titulo);
			this->Controls->Add(this->lbl_server);
			this->Controls->Add(this->server_txt);
			this->Controls->Add(this->lbl_db);
			this->Controls->Add(this->db_txt);
			this->Controls->Add(this->lbl_user);
			this->Controls->Add(this->user_txt);
			this->Controls->Add(this->lbl_pass);
			this->Controls->Add(this->pass_txt);
			this->Controls->Add(this->lbl_admin_pass);
			this->Controls->Add(this->admin_pass_txt);
			this->Controls->Add(this->lbl_admin_pass2);
			this->Controls->Add(this->admin_pass2_txt);
			this->Controls->Add(this->crear_btn);
			this->Controls->Add(this->status_lbl);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"SetupForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Configuracion inicial";
			this->ResumeLayout(false);
		}

		System::Void crear_btn_Click(System::Object^ sender, System::EventArgs^ e) {
			if (server_txt->Text->Trim()->Length == 0 || db_txt->Text->Trim()->Length == 0 || user_txt->Text->Trim()->Length == 0) {
				status_lbl->Text = L"Completa servidor, base de datos y usuario.";
				return;
			}
			if (admin_pass_txt->Text->Length == 0) {
				status_lbl->Text = L"Escribe la nueva contrasena de administrador.";
				return;
			}
			if (admin_pass_txt->Text != admin_pass2_txt->Text) {
				status_lbl->Text = L"Las contrasenas de administrador no coinciden.";
				return;
			}

			DB::Server = server_txt->Text->Trim();
			DB::Database = db_txt->Text->Trim();
			DB::User = user_txt->Text->Trim();
			DB::Password = pass_txt->Text;

			try {
				// 1) Crear la base de datos si no existe (conexion sin "database=").
				MySqlConnection^ connServidor = gcnew MySqlConnection(DB::ServerConnectionString());
				connServidor->Open();
				MySqlCommand^ crearDb = gcnew MySqlCommand("CREATE DATABASE IF NOT EXISTS `" + DB::Database + "`", connServidor);
				crearDb->ExecuteNonQuery();
				connServidor->Close();

				// 2) Crear la tabla de administradores si no existe.
				MySqlConnection^ conn = gcnew MySqlConnection(DB::ConnectionString());
				conn->Open();

				MySqlCommand^ crearTabla = gcnew MySqlCommand(
					"CREATE TABLE IF NOT EXISTS administradores ("
					"id INT AUTO_INCREMENT PRIMARY KEY, "
					"usuario VARCHAR(50) UNIQUE NOT NULL, "
					"password_hash VARCHAR(255) NOT NULL)", conn);
				crearTabla->ExecuteNonQuery();

				// 3) Crear o actualizar la cuenta inicial de administrador.
				MySqlCommand^ upsert = gcnew MySqlCommand(
					"INSERT INTO administradores (usuario, password_hash) VALUES ('admin', @hash) "
					"ON DUPLICATE KEY UPDATE password_hash = @hash", conn);
				upsert->Parameters->AddWithValue("@hash", DB::Hash(admin_pass_txt->Text));
				upsert->ExecuteNonQuery();

				conn->Close();

				// 4) Guardar la configuracion para que los demas formularios la usen.
				DB::Save();

				MessageBox::Show("Base de datos y cuenta de administrador listas.", "Configuracion inicial",
					MessageBoxButtons::OK, MessageBoxIcon::Information);
				this->DialogResult = System::Windows::Forms::DialogResult::OK;
				this->Close();
			}
			catch (Exception^ ex) {
				status_lbl->Text = L"Error: " + ex->Message;
			}
		}
	};
}
