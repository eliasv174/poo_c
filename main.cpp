#include "Cliente.cpp"
#include <iostream>
using namespace std;
main(){
	string nit,nombres,apellidos,direccion;
	int telefono;
	
	cout<<"ingresar Nit: ";
	cin>>nit;
	cout<<"ingresar Nombres: ";
	cin>>nombres;
	cout<<"ingresar Apellidos: ";
	cin>>apellidos;
	cout<<"ingresar Direccion: ";
	cin>>direccion;
	cout<<"ingresar Telefono: ";
	cin>>telefono;
	//instacia de un objeto
	Cliente obj = Cliente (nombres,apellidos,direccion,telefono,nit);
	obj.mostrar();
	cout<<"ingresar Nit: ";
	cin>>nit;
	obj.setNit(nit);
	cout<<"Datos del Cliente: "<<endl<<obj.getNit()<<","<<obj.getNombres();
	/*Cliente obj2 = Cliente (nombres,apellidos,direccion,telefono,nit);	
	obj.mostrar();
	cout<<"ingresar Nit: ";
	cin>>nit;
	obj.setNit(nit);
	obj.mostrar();
	Cliente obj = Cliente();
	obj.setNit(nit);
	obj.setNombres(nombres);
	obj.setApellidos(apellidos);
	obj.setDireccion(direccion);
	obj.setTelefono(telefono);
	obj.mostrar();*/
}
