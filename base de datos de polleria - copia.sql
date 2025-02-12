create database Leñita;
use Leñita;
create table Pedidos(
codigo int,
cliente varchar(30),
plato varchar(30),
bebida varchar(30),
postre varchar(30),
total float,
formadepago varchar(30),
fecha varchar(30)
);
select *from Pedidos;
DROP TABLE Pedidos;