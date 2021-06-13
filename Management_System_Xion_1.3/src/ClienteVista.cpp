#include<iostream>
#include<clocale>
#include<cstdlib>
using namespace std;
#include "ClienteVista.h"
#include "ClienteNegocio.h"


void ClienteVista::cargarCliente()
{
	ClienteNegocio ID;
	int id;
	cout << "Datos del Cliente:" << endl;
	cout<< "Ingrese el Id del Cliente: " <<endl;
	cin>>id;

	while(ID.ValidacionCliente(id)!=true)
	{
	cout << "Datos del Cliente:" << endl;
	cout<< "Ingrese el Id del Cliente: " <<endl;
	cin>>id;

	}

	//grabardisco();
	cout<<"Carga OK"<<endl;






}

/*void mostrarCliente(ClienteNegocio pp)
	{
		cout << "Datos del Cliente:" << endl;
		cout << "Id del Cliente: " << pp.GetIdCliente(); endl;
	}
*/
