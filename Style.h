#pragma once

using namespace System;
using namespace System::Drawing;
using namespace System::Drawing::Drawing2D;
using namespace System::Windows::Forms;
using namespace System::Drawing::Drawing2D;
using namespace System::Drawing::Imaging;
using namespace System::Collections::Generic;



ref class Style {

public:


	static void PersonalizarBoton(Button^ boton) {
		boton->BackColor = System::Drawing::Color::FromArgb(0x24, 0x25, 0x29); // Fondo #d35550
		boton->ForeColor = System::Drawing::Color::White; // Texto blanco
		boton->Font = gcnew System::Drawing::Font("Open Sans ExtraBold", 16, FontStyle::Bold); // Fuente Open Sans, negrita
		boton->FlatStyle = FlatStyle::Flat; // Estilo plano
		boton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(0x24, 0x25, 0x29); // Bordes negros
		boton->FlatAppearance->BorderSize = 2; // Grosor del borde
	}

	static void PersonalizarBoton2(Button^ boton) {
		boton->ForeColor = System::Drawing::Color::White; // Texto blanco
		boton->Font = gcnew System::Drawing::Font("Open Sans ExtraBold", 16, FontStyle::Bold); // Fuente Open Sans, negrita
		boton->FlatStyle = FlatStyle::Flat; // Estilo plano
		boton->FlatAppearance->BorderColor = System::Drawing::Color::Black; // Bordes negros
		boton->FlatAppearance->BorderSize = 2; // Grosor del borde
	}

    static void PersonalizarBoton3(Button^ boton) {
        boton->BackColor = Color::FromArgb(0xC3, 0x5B, 0xDA); // Fondo #d35550
        boton->ForeColor = Color::White; // Texto blanco
        boton->Font = gcnew Font("Open Sans ExtraBold", 10, FontStyle::Bold); // Fuente Open Sans, negrita
        boton->FlatStyle = FlatStyle::Flat; // Estilo plano
        boton->FlatAppearance->BorderColor = Color::FromArgb(0xC3, 0x5B, 0xDA); // Bordes negros
        boton->FlatAppearance->BorderSize = 2; // Grosor del borde

        // Bordes redondeados
        int radio = 15; // Radio de redondeo
        GraphicsPath^ path = gcnew GraphicsPath();
        path->AddArc(0, 0, radio, radio, 180, 90);
        path->AddArc(boton->Width - radio, 0, radio, radio, 270, 90);
        path->AddArc(boton->Width - radio, boton->Height - radio, radio, radio, 0, 90);
        path->AddArc(0, boton->Height - radio, radio, radio, 90, 90);
        path->CloseFigure();

        boton->Region = gcnew Region(path);
    }

    // Variables auxiliares para el efecto hover
    static Dictionary<Button^, bool>^ hoverState = gcnew Dictionary<Button^, bool>();

    // Manejador Paint del botón personalizado
    static void Boton_PaintConDegradado(Object^ sender, PaintEventArgs^ e) {
        Button^ btn = dynamic_cast<Button^>(sender);
        if (btn == nullptr) return;

        Graphics^ g = e->Graphics;
        Rectangle rect = btn->ClientRectangle;

        // Crear el degradado horizontal
        ColorBlend^ degradado = gcnew ColorBlend();
        degradado->Positions = gcnew array<Single>{ 0.0f, 1.0f };
        degradado->Colors = gcnew array<Color>{
            Color::FromArgb(0xD8, 0x96, 0xFF), // #d896ff
            Color::FromArgb(0xBE, 0x29, 0xEC)  // #be29ec
        };

        LinearGradientBrush^ brush = gcnew LinearGradientBrush(
            rect,
            Color::Black,
            Color::Black,
            LinearGradientMode::Horizontal
        );
        brush->InterpolationColors = degradado;

        // Crear bordes redondeados
        int radio = 20;
        GraphicsPath^ path = gcnew GraphicsPath();
        path->AddArc(0, 0, radio, radio, 180, 90);
        path->AddArc(rect.Width - radio, 0, radio, radio, 270, 90);
        path->AddArc(rect.Width - radio, rect.Height - radio, radio, radio, 0, 90);
        path->AddArc(0, rect.Height - radio, radio, radio, 90, 90);
        path->CloseFigure();

        btn->Region = gcnew Region(path);

        // Efecto de hover (oscurecer)
        bool isHovered = false;
        if (hoverState->ContainsKey(btn)) isHovered = hoverState[btn];

        if (isHovered) {
            ColorMatrix^ matrix = gcnew ColorMatrix();
            matrix->Matrix33 = 0.9f; // reduce opacidad
            ImageAttributes^ attributes = gcnew ImageAttributes();
            attributes->SetColorMatrix(matrix, ColorMatrixFlag::Default, ColorAdjustType::Brush);

            g->FillRectangle(gcnew SolidBrush(Color::FromArgb(30, Color::Black)), rect); // sombreado hover
        }
        else {
            g->FillPath(brush, path);
        }

        // Dibujar la imagen si existe
        if (btn->BackgroundImage != nullptr) {
            Image^ img = btn->BackgroundImage;
            switch (btn->BackgroundImageLayout) {
            case ImageLayout::Stretch: {
                g->DrawImage(img, rect);
                break;
            }
            case ImageLayout::Center: {
                int x = (rect.Width - img->Width) / 2;
                int y = (rect.Height - img->Height) / 2;
                g->DrawImage(img, x, y);
                break;
            }
            case ImageLayout::Zoom: {
                float ratioX = (float)rect.Width / img->Width;
                float ratioY = (float)rect.Height / img->Height;
                float ratio = Math::Min(ratioX, ratioY);
                int newW = (int)(img->Width * ratio);
                int newH = (int)(img->Height * ratio);
                int x = (rect.Width - newW) / 2;
                int y = (rect.Height - newH) / 2;
                g->DrawImage(img, x, y, newW, newH);
                break;
            }
            case ImageLayout::Tile: {
                TextureBrush^ tb = gcnew TextureBrush(img);
                g->FillRectangle(tb, rect);
                break;
            }
            case ImageLayout::None: {
                g->DrawImage(img, 0, 0);
                break;
            }
            }
        }

        // Dibujar el texto encima de la imagen
        TextRenderer::DrawText(g, btn->Text, btn->Font, rect, btn->ForeColor, TextFormatFlags::HorizontalCenter | TextFormatFlags::VerticalCenter);
    }

    // Manejadores para hover
    static void Boton_MouseEnter(Object^ sender, EventArgs^ e) {
        Button^ btn = dynamic_cast<Button^>(sender);
        if (btn == nullptr) return;
        hoverState[btn] = true;
        btn->Invalidate();
    }

    static void Boton_MouseLeave(Object^ sender, EventArgs^ e) {
        Button^ btn = dynamic_cast<Button^>(sender);
        if (btn == nullptr) return;
        hoverState[btn] = false;
        btn->Invalidate();
    }

    // Aplicar estilo completo
    static void PersonalizarBoton4(Button^ btn) {
        btn->FlatStyle = FlatStyle::Flat;
        btn->FlatAppearance->BorderSize = 0;
        btn->BackColor = Color::Transparent;
        btn->ForeColor = Color::White;
        btn->Paint += gcnew PaintEventHandler(Boton_PaintConDegradado);
        btn->MouseEnter += gcnew EventHandler(Boton_MouseEnter);
        btn->MouseLeave += gcnew EventHandler(Boton_MouseLeave);
        hoverState[btn] = false;
    }




    static void PersonalizarDataGridView(DataGridView^ dgv) {
        int radio = 20; // Radio de redondeo

        // Crear el camino de bordes redondeados
        GraphicsPath^ path = gcnew GraphicsPath();
        path->AddArc(0, 0, radio, radio, 180, 90);
        path->AddArc(dgv->Width - radio, 0, radio, radio, 270, 90);
        path->AddArc(dgv->Width - radio, dgv->Height - radio, radio, radio, 0, 90);
        path->AddArc(0, dgv->Height - radio, radio, radio, 90, 90);
        path->CloseFigure();

        dgv->Region = gcnew Region(path); // Aplicar la máscara de recorte

        // Personalizar colores
        dgv->BackgroundColor = Color::FromArgb(0xF0, 0xF0, 0xF0); // Fondo
        dgv->GridColor = Color::Gray; // Color de líneas
        dgv->DefaultCellStyle->BackColor = Color::FromArgb(224, 224, 255); // Color de fondo de celdas
        dgv->DefaultCellStyle->ForeColor = Color::Black;
        dgv->EnableHeadersVisualStyles = false;

        // Personalizar encabezados
        dgv->ColumnHeadersDefaultCellStyle->BackColor = Color::FromArgb(80, 85, 211); // Color de fondo del encabezado
        dgv->ColumnHeadersDefaultCellStyle->ForeColor = Color::White; // Texto
        dgv->ColumnHeadersDefaultCellStyle->Font = gcnew Font("Open Sans ExtraBold", 12, FontStyle::Bold);

        // Hacerlo visualmente más limpio
        dgv->BorderStyle = BorderStyle::None;
        dgv->CellBorderStyle = DataGridViewCellBorderStyle::SingleHorizontal;
        dgv->RowHeadersVisible = false;
    }


    // Declaración del manejador
    static void Panel_PaintConDegradado(Object^ sender, PaintEventArgs^ e) {
        Panel^ panel = dynamic_cast<Panel^>(sender);
        if (panel == nullptr) return;

        Graphics^ g = e->Graphics;
        Rectangle rect = panel->ClientRectangle;

        // Crear el degradado horizontal
        array<Single>^ posiciones = { 0.0f, 0.5f, 1.0f };
        array<Color>^ colores = {
            Color::FromArgb(0xEF, 0xBB, 0xFF), // #efbbff
            Color::FromArgb(0xD8, 0x96, 0xFF), // #d896ff
            Color::FromArgb(0xBE, 0x29, 0xEC)  // #be29ec
        };

        ColorBlend^ degradado = gcnew ColorBlend();
        degradado->Positions = posiciones;
        degradado->Colors = colores;

        LinearGradientBrush^ brush = gcnew LinearGradientBrush(
            rect,
            Color::Black, Color::Black,
            LinearGradientMode::Horizontal
        );

        brush->InterpolationColors = degradado;

        // Redondear ambas esquinas inferiores
        int radio = 80;
        GraphicsPath^ path = gcnew GraphicsPath();
        path->AddLine(0, 0, rect.Width, 0); // Borde superior
        path->AddLine(rect.Width, 0, rect.Width, rect.Height - radio); // Lado derecho
        path->AddArc(rect.Width - radio, rect.Height - radio, radio, radio, 0, 90); // Inferior derecha
        path->AddLine(rect.Width - radio, rect.Height, radio, rect.Height); // Parte inferior (centro)
        path->AddArc(0, rect.Height - radio, radio, radio, 90, 90); // Inferior izquierda
        path->AddLine(0, rect.Height - radio, 0, 0); // Lado izquierdo
        path->CloseFigure();

        panel->Region = gcnew Region(path); // Aplicar redondeo
        g->FillRectangle(brush, rect);      // Rellenar fondo con degradado
    }


    // Función para aplicar estilo
    static void PersonalizarPanelConDegradado(Panel^ panel) {
        panel->Paint += gcnew PaintEventHandler(Panel_PaintConDegradado);
    }

    static void Panel_PaintConDegradado1(Object^ sender, PaintEventArgs^ e) {
        Panel^ panel = dynamic_cast<Panel^>(sender);
        if (panel == nullptr) return;

        Graphics^ g = e->Graphics;
        Rectangle rect = panel->ClientRectangle;

        // Crear el degradado horizontal con nuevos colores
        array<Single>^ posiciones = { 0.0f, 0.5f, 1.0f };
        array<Color>^ colores = {
            Color::FromArgb(0xEF, 0xBB, 0xFF), // #efbbff
            Color::FromArgb(0xD8, 0x96, 0xFF), // #d896ff
            Color::FromArgb(0xBE, 0x29, 0xEC)  // #be29ec
        };

        ColorBlend^ degradado = gcnew ColorBlend();
        degradado->Positions = posiciones;
        degradado->Colors = colores;

        LinearGradientBrush^ brush = gcnew LinearGradientBrush(
            rect,
            Color::Black, Color::Black,
            LinearGradientMode::Horizontal
        );

        brush->InterpolationColors = degradado;

        // Solo esquina inferior derecha redondeada con radio grande
        int radio = 80;
        GraphicsPath^ path = gcnew GraphicsPath();
        path->AddLine(0, 0, rect.Width, 0);                          // Borde superior
        path->AddLine(rect.Width, 0, rect.Width, rect.Height - radio); // Borde derecho
        path->AddArc(rect.Width - radio, rect.Height - radio, radio, radio, 0, 90); // Solo esquina inferior derecha
        path->AddLine(rect.Width - radio, rect.Height, 0, rect.Height); // Borde inferior
        path->AddLine(0, rect.Height, 0, 0);                         // Borde izquierdo
        path->CloseFigure();

        panel->Region = gcnew Region(path); // Aplicar redondeo
        g->FillRectangle(brush, rect);      // Rellenar fondo con degradado
    }


    // Función para aplicar estilo
    static void PersonalizarPanelConDegradado1(Panel^ panel) {
        panel->Paint += gcnew PaintEventHandler(Panel_PaintConDegradado1);
    }




    

};
