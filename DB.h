#pragma once

using namespace System;
using namespace System::IO;
using namespace System::Text;
using namespace System::Windows::Forms;
using namespace System::Security::Cryptography;

// Configuracion centralizada de la conexion a MySQL y de la cuenta de administrador.
// Antes, cada formulario (Citas, Clientes, Empleados, Reportes, Servicios) tenia
// la cadena de conexion y la contrasena escritas directamente en el codigo,
// repetidas mas de 30 veces. Ahora todos usan DB::ConnectionString().
//
// Los valores se leen de "db_config.ini" (al lado del .exe). Si el archivo no
// existe todavia se usan los valores por defecto (los que tenia el proyecto),
// para no romper instalaciones existentes hasta que se use el boton de
// configuracion inicial en la pantalla de Login.
ref class DB {
public:
	static String^ Server;
	static String^ Database;
	static String^ User;
	static String^ Password;

	static String^ ConfigPath() {
		return Path::Combine(Application::StartupPath, "db_config.ini");
	}

	static bool EstaConfigurada() {
		return File::Exists(ConfigPath());
	}

	static void Load() {
		String^ path = ConfigPath();
		if (!File::Exists(path)) return;

		for each (String ^ linea in File::ReadAllLines(path)) {
			String^ l = linea->Trim();
			if (l->Length == 0 || l->StartsWith("#")) continue;

			int i = l->IndexOf('=');
			if (i < 0) continue;

			String^ clave = l->Substring(0, i)->Trim()->ToLower();
			String^ valor = l->Substring(i + 1)->Trim();

			if (clave == "server") Server = valor;
			else if (clave == "database") Database = valor;
			else if (clave == "user") User = valor;
			else if (clave == "password") Password = valor;
		}
	}

	static void Save() {
		array<String^>^ lineas = {
			"server=" + Server,
			"database=" + Database,
			"user=" + User,
			"password=" + Password
		};
		File::WriteAllLines(ConfigPath(), lineas);
	}

	// Cadena de conexion normal, usada por todos los formularios de la app.
	static String^ ConnectionString() {
		return "server=" + Server + ";database=" + Database + ";uid=" + User + ";pwd=" + Password + ";";
	}

	// Cadena sin base de datos especifica: se usa una sola vez, para poder
	// ejecutar "CREATE DATABASE" cuando la base todavia no existe.
	static String^ ServerConnectionString() {
		return "server=" + Server + ";uid=" + User + ";pwd=" + Password + ";";
	}

	static String^ Hash(String^ texto) {
		SHA256^ sha = SHA256::Create();
		array<Byte>^ datos = Encoding::UTF8->GetBytes(texto);
		array<Byte>^ hashBytes = sha->ComputeHash(datos);

		StringBuilder^ sb = gcnew StringBuilder();
		for each (Byte b in hashBytes) {
			sb->Append(b.ToString("x2"));
		}
		return sb->ToString();
	}

	static DB() {
		// Valores por defecto (los que estaban escritos en el codigo).
		Server = "localhost";
		Database = "citas_visa";
		User = "root";
		Password = "343611";
		Load();
	}
};
