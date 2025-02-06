#include "DB.h"
#include "Pedidos.h"

DB::DB()
{
	/*this->connectionString = "datasource=127.0.0.1;username=root;database=Leñita;";*/
	this->connectionString = "Server = localhost; Port = 3306; Database = Leñita; Uid = root2; Pwd = """;
	this->conn = gcnew MySqlConnection(this->connectionString);

}
void DB::AbrirConexion()
{
	this->conn->Open();
}
Void DB::CerrarConexion()
{
	this->conn->Close();
}
void DB::Insertar(int cod, String^ cliente, String^ plato, String^ bebida, String^ postre, float total, String^ forma, String^ fecha)
{
	String^ sql = "insert into Pedidos(codigo,cliente,plato,bebida,postre,total,formadepago,fecha)values ('" + cod + "','" + cliente + "','" + plato + "','" + bebida + "','" + postre + "','" + total + "','" + forma + "','" + fecha + "')";
	/*String^ sql = "insert into Pedidos(Nombre,Edad,Carrera)values ('" + cod + "'," + cliente + ",'" + plato + "')";*/
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e)
	{
		this->conn->Close();
	}
}
