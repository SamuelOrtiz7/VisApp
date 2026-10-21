#pragma once
#include "Style.h"
#include <string>
#include "Citas.h"
#using <System.Drawing.dll>
#include "Clientes.h"
#include "Reportes.h"
#include "Servicios.h"
#include "Empleados.h"

namespace SysGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	using namespace System::Drawing;
	using namespace System::Drawing::Drawing2D;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{

	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			Style::PersonalizarPanelConDegradado1(panel1);
			Style::PersonalizarBoton(citas_btn);
			Style::PersonalizarBoton(clientes_btn);
			Style::PersonalizarBoton(serv_btn);
			Style::PersonalizarBoton(rep_btn);
			//Style::PersonalizarDataGridView(dataGridView1);
			//Style::PersonalizarBoton(emp_btn);
			//Style::PersonalizarBoton2(config_btn);
			Style::PersonalizarBoton(logout_btn);
			Style::PersonalizarBoton(emp_btn);



		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}



	private: System::Windows::Forms::Panel^ panel1;







	private: System::Windows::Forms::Button^ citas_btn;
	private: System::Windows::Forms::Button^ clientes_btn;
	private: System::Windows::Forms::Button^ serv_btn;

	private: System::Windows::Forms::Button^ rep_btn;

	private: System::Windows::Forms::Button^ logout_btn;


	private: System::Windows::Forms::Button^ emp_btn;

	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;














	protected:



	protected:

	private:

		int index;

		System::Void Label_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

			Label^ label = dynamic_cast<Label^>(sender);
			if (label != nullptr) {
				// Dibujar un borde alrededor del Label
				Graphics^ g = e->Graphics;
				Rectangle rect = label->ClientRectangle;
				rect.Inflate(-1, -1); // Inflar el rectángulo para evitar que el borde esté justo en el borde del Label
				g->DrawRectangle(System::Drawing::Pens::Gray, rect); // Cambia el color según sea necesario
			}
		}




		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->citas_btn = (gcnew System::Windows::Forms::Button());
			this->clientes_btn = (gcnew System::Windows::Forms::Button());
			this->serv_btn = (gcnew System::Windows::Forms::Button());
			this->rep_btn = (gcnew System::Windows::Forms::Button());
			this->logout_btn = (gcnew System::Windows::Forms::Button());
			this->emp_btn = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Location = System::Drawing::Point(353, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(847, 83);
			this->panel1->TabIndex = 9;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::panel1_Paint);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Transparent;
			this->button1->Location = System::Drawing::Point(721, 19);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(90, 39);
			this->button1->TabIndex = 0;
			this->button1->Text = L"✕";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click_1);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Transparent;
			this->button2->Location = System::Drawing::Point(637, 19);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(63, 39);
			this->button2->TabIndex = 1;
			this->button2->Text = L"—";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// citas_btn
			// 
			this->citas_btn->Location = System::Drawing::Point(13, 88);
			this->citas_btn->Name = L"citas_btn";
			this->citas_btn->Size = System::Drawing::Size(323, 68);
			this->citas_btn->TabIndex = 14;
			this->citas_btn->Text = L"         Citas";
			this->citas_btn->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->citas_btn->UseVisualStyleBackColor = true;
			this->citas_btn->Click += gcnew System::EventHandler(this, &Form1::button3_Click_1);
			// 
			// clientes_btn
			// 
			this->clientes_btn->Location = System::Drawing::Point(13, 280);
			this->clientes_btn->Name = L"clientes_btn";
			this->clientes_btn->Size = System::Drawing::Size(323, 68);
			this->clientes_btn->TabIndex = 15;
			this->clientes_btn->Text = L"         Clientes";
			this->clientes_btn->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->clientes_btn->UseVisualStyleBackColor = true;
			this->clientes_btn->Click += gcnew System::EventHandler(this, &Form1::clientes_btn_Click);
			// 
			// serv_btn
			// 
			this->serv_btn->Location = System::Drawing::Point(13, 377);
			this->serv_btn->Name = L"serv_btn";
			this->serv_btn->Size = System::Drawing::Size(323, 68);
			this->serv_btn->TabIndex = 16;
			this->serv_btn->Text = L"         Servicios";
			this->serv_btn->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->serv_btn->UseVisualStyleBackColor = true;
			this->serv_btn->Click += gcnew System::EventHandler(this, &Form1::serv_btn_Click);
			// 
			// rep_btn
			// 
			this->rep_btn->Location = System::Drawing::Point(13, 470);
			this->rep_btn->Name = L"rep_btn";
			this->rep_btn->Size = System::Drawing::Size(323, 68);
			this->rep_btn->TabIndex = 18;
			this->rep_btn->Text = L"         Reportes";
			this->rep_btn->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->rep_btn->UseVisualStyleBackColor = true;
			this->rep_btn->Click += gcnew System::EventHandler(this, &Form1::rep_btn_Click);
			// 
			// logout_btn
			// 
			this->logout_btn->Location = System::Drawing::Point(13, 626);
			this->logout_btn->Name = L"logout_btn";
			this->logout_btn->Size = System::Drawing::Size(323, 62);
			this->logout_btn->TabIndex = 20;
			this->logout_btn->Text = L"     Cerrar Sesión";
			this->logout_btn->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->logout_btn->UseVisualStyleBackColor = true;
			this->logout_btn->Click += gcnew System::EventHandler(this, &Form1::logout_btn_Click);
			// 
			// emp_btn
			// 
			this->emp_btn->Location = System::Drawing::Point(13, 183);
			this->emp_btn->Name = L"emp_btn";
			this->emp_btn->Size = System::Drawing::Size(323, 68);
			this->emp_btn->TabIndex = 22;
			this->emp_btn->Text = L"         Empleados";
			this->emp_btn->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->emp_btn->UseVisualStyleBackColor = true;
			this->emp_btn->Click += gcnew System::EventHandler(this, &Form1::button3_Click_2);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->panel3->Controls->Add(this->pictureBox5);
			this->panel3->Controls->Add(this->pictureBox4);
			this->panel3->Controls->Add(this->pictureBox3);
			this->panel3->Controls->Add(this->pictureBox1);
			this->panel3->Controls->Add(this->citas_btn);
			this->panel3->Controls->Add(this->clientes_btn);
			this->panel3->Controls->Add(this->logout_btn);
			this->panel3->Controls->Add(this->serv_btn);
			this->panel3->Controls->Add(this->emp_btn);
			this->panel3->Controls->Add(this->rep_btn);
			this->panel3->Location = System::Drawing::Point(-1, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(364, 728);
			this->panel3->TabIndex = 23;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::panel3_Paint);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox5->Location = System::Drawing::Point(13, 451);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(323, 14);
			this->pictureBox5->TabIndex = 26;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox4->Location = System::Drawing::Point(13, 257);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(323, 14);
			this->pictureBox4->TabIndex = 25;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox3->Location = System::Drawing::Point(13, 357);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(323, 14);
			this->pictureBox3->TabIndex = 24;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(13, 163);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(323, 14);
			this->pictureBox1->TabIndex = 23;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox2->Location = System::Drawing::Point(508, 108);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(549, 580);
			this->pictureBox2->TabIndex = 13;
			this->pictureBox2->TabStop = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->button3->Location = System::Drawing::Point(1113, 655);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 58);
			this->button3->TabIndex = 24;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click_3);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->ClientSize = System::Drawing::Size(1200, 725);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->panel1);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Ecuaciones";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->panel1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

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



	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {


	}


private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();

}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	this->panel1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::Form_MouseDown);
	this->panel1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::Form_MouseMove);
	this->panel1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::Form_MouseUp);

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->WindowState = FormWindowState::Minimized;
}
private: System::Void false0_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->Hide(); // Oculta la ventana principal

	Citas^ nuevaVentana = gcnew Citas();

	// Mostrar la ventana secundaria y esperar a que se cierre
	nuevaVentana->ShowDialog();

	// Cuando la nueva ventana se cierre, vuelve a mostrar la principal
	this->Show();
}
private: System::Void clientes_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide(); // Oculta la ventana principal

	Clientes^ nuevaVentana = gcnew Clientes();

	// Mostrar la ventana secundaria y esperar a que se cierre
	nuevaVentana->ShowDialog();

	// Cuando la nueva ventana se cierre, vuelve a mostrar la principal
	this->Show();
}

private: System::Void logout_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void serv_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide(); // Oculta la ventana principal

	Servicios^ nuevaVentana = gcnew Servicios();

	// Mostrar la ventana secundaria y esperar a que se cierre
	nuevaVentana->ShowDialog();

	// Cuando la nueva ventana se cierre, vuelve a mostrar la principal
	this->Show();
}
private: System::Void emp_btn_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void rep_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide(); // Oculta la ventana principal

	Reportes^ nuevaVentana = gcnew Reportes();

	// Mostrar la ventana secundaria y esperar a que se cierre
	nuevaVentana->ShowDialog();

	// Cuando la nueva ventana se cierre, vuelve a mostrar la principal
	this->Show();
}
private: System::Void button3_Click_2(System::Object^ sender, System::EventArgs^ e) {
	this->Hide(); // Oculta la ventana principal

	Empleados^ nuevaVentana = gcnew Empleados();

	// Mostrar la ventana secundaria y esperar a que se cierre
	nuevaVentana->ShowDialog();

	// Cuando la nueva ventana se cierre, vuelve a mostrar la principal
	this->Show();
}
private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged_2(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void line_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void button3_Click_3(System::Object^ sender, System::EventArgs^ e) {
    String^ mensaje = "------------------------------\n"
                      "  NEXUMCODE\n"
                      "------------------------------\n\n"
                      "Developer:\n"
                      " Ortiz Salinas Samuel\n"
                      "  or503836@uaeh.edu.mx\n\n"
                      "Scrum Master:\n"
                      " Sanches Hernandez Adrian\n"
                      "  sa402141@uaeh.edu.mx\n\n"
                      "Product Owner:\n"
                      " Flores Guzman Oliver\n"
                      "  fl502138@uaeh.edu.mx";

    MessageBox::Show(mensaje, "SOBRE NOSOTROS", MessageBoxButtons::OK, MessageBoxIcon::Information);
}

};
}




