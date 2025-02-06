#pragma once
using namespace std;
using namespace System::Data;
using namespace System;
using namespace MySql::Data::MySqlClient;
ref class DB
{
private:
	String^ connectionString;
	MySqlConnection^ conn;
public:
	DB();
	/*DataTable^ getData();*/
	void AbrirConexion();
	void CerrarConexion();
	void Insertar(int cod, String^ cliente, String^ plato, String^ bebida, String^ postre, float total, String^ forma, String^ fecha);
};

