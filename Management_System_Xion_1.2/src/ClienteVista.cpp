#include<iostream>
#include<clocale>
#include<cstdlib>
using namespace std;
#include "ClienteVista.h"
#include "ClienteNegocio.h"


void cargarCliente(ClienteNegocio ID)
{
	int id;
	cout << "Datos del Cliente:" << endl;
	cout<< "Ingrese el Id del Cliente: " <<endl;
	cin>>id;
	ID.ValidacionCliente(id);


}

/*void mostrarCliente(ClienteNegocio pp)
	{
		cout << "Datos del Cliente:" << endl;
		cout << "Id del Cliente: " << pp.GetIdCliente(); endl;
	}
*/
