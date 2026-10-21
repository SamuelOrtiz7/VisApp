#pragma once
#include "Style.h"
#include "Form1.h"
#include "DB.h"
#include "SetupForm.h"

namespace SysGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Resumen de Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			Style::PersonalizarBoton3(log_btn);
			Style::PersonalizarPanelConDegradado(panel1);
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;




	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Button^ log_btn;
	private: System::Windows::Forms::TextBox^ pass_txt;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button3;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->log_btn = (gcnew System::Windows::Forms::Button());
			this->pass_txt = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(-4, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(844, 91);
			this->panel1->TabIndex = 10;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Login::panel1_Paint);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Open Sans Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label1->Location = System::Drawing::Point(16, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(222, 32);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Ingresar al sistema";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Transparent;
			this->button2->Location = System::Drawing::Point(638, 24);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(63, 39);
			this->button2->TabIndex = 1;
			this->button2->Text = L"—";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Login::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Transparent;
			this->button1->Location = System::Drawing::Point(722, 24);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(90, 39);
			this->button1->TabIndex = 0;
			this->button1->Text = L"✕";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Login::button1_Click);
			// 
			// log_btn
			// 
			this->log_btn->Font = (gcnew System::Drawing::Font(L"Open Sans", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->log_btn->Location = System::Drawing::Point(353, 391);
			this->log_btn->Name = L"log_btn";
			this->log_btn->Size = System::Drawing::Size(139, 50);
			this->log_btn->TabIndex = 19;
			this->log_btn->Text = L"Ingresar";
			this->log_btn->UseVisualStyleBackColor = true;
			this->log_btn->Click += gcnew System::EventHandler(this, &Login::log_btn_Click_1);
			// 
			// pass_txt
			// 
			this->pass_txt->BackColor = System::Drawing::Color::WhiteSmoke;
			this->pass_txt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->pass_txt->Font = (gcnew System::Drawing::Font(L"Consolas", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pass_txt->Location = System::Drawing::Point(458, 232);
			this->pass_txt->Name = L"pass_txt";
			this->pass_txt->Size = System::Drawing::Size(283, 51);
			this->pass_txt->TabIndex = 17;
			this->pass_txt->TextChanged += gcnew System::EventHandler(this, &Login::pass_txt_TextChanged_1);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Open Sans Semibold", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(106, 226);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(276, 59);
			this->label3->TabIndex = 21;
			this->label3->Text = L"Contraseña:";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(204, 447);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(447, 129);
			this->pictureBox1->TabIndex = 22;
			this->pictureBox1->TabStop = false;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(18, 110);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(49, 47);
			this->button3->TabIndex = 23;
			this->button3->Text = L"O";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Login::button3_Click);
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->ClientSize = System::Drawing::Size(840, 630);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->log_btn);
			this->Controls->Add(this->pass_txt);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login";
			this->Load += gcnew System::EventHandler(this, &Login::Login_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


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



	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		this->panel1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Login::Form_MouseDown);
		this->panel1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Login::Form_MouseMove);
		this->panel1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Login::Form_MouseUp);
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();

}
private: System::Void pass_txt_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Login_Load(System::Object^ sender, System::EventArgs^ e) {

	//pass_txt->UseSystemPasswordChar = false; // Para que tome el PasswordChar personalizado
	pass_txt->PasswordChar = '*';

}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void log_btn_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->WindowState = FormWindowState::Minimized;
}
private: System::Void log_btn_Click_1(System::Object^ sender, System::EventArgs^ e) {

	String^ texto = pass_txt->Text;

	if (!DB::EstaConfigurada()) {
		MessageBox::Show("Todavía no se ha configurado la base de datos ni la cuenta de administrador.\nUsa el botón \"Configuración inicial\".",
			"Falta configuración", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	bool contrasenaCorrecta = false;
	try {
		MySqlConnection^ conn = gcnew MySqlConnection(DB::ConnectionString());
		conn->Open();
		MySqlCommand^ cmd = gcnew MySqlCommand("SELECT password_hash FROM administradores WHERE usuario = 'admin' LIMIT 1", conn);
		Object^ resultado = cmd->ExecuteScalar();
		conn->Close();

		if (resultado != nullptr) {
			contrasenaCorrecta = (resultado->ToString() == DB::Hash(texto));
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error al conectar con la base de datos: " + ex->Message);
		return;
	}

	if (contrasenaCorrecta) {
		this->Hide(); // Oculta la ventana principal

		Form1^ nuevaVentana = gcnew Form1();

		// Mostrar la ventana secundaria y esperar a que se cierre
		nuevaVentana->ShowDialog();

		// Cuando la nueva ventana se cierre, vuelve a mostrar la principal
		this->Show();
		pass_txt->Text = "";
	}
	else {
		MessageBox::Show("CONTRASEÑA INCORRECTA.");
	}

}
private: System::Void users_comb_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void pass_txt_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide(); // Oculta la ventana principal

	SetupForm^ nuevaVentana = gcnew SetupForm();

	// Mostrar la ventana secundaria y esperar a que se cierre
	nuevaVentana->ShowDialog();

	// Cuando la nueva ventana se cierre, vuelve a mostrar la principal
	this->Show();
}
};
}
