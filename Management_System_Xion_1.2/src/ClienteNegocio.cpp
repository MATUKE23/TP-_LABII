#include<iostream>
#include<clocale>
#include<cstdlib>
using namespace std;
#include "ClienteNegocio.h"
#include "ClienteVista.h"

bool ValidacionCliente ( int *IDcliente )
{
	while(IDcliente<=0)
	{
		cout<<"Ingrese un Id de cliente valido. "<<endl;
	}

}
