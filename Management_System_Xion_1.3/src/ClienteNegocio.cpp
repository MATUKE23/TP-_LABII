#include<iostream>
#include<clocale>
#include<cstdlib>
#include "ClienteFile.h""
#include "ClienteNegocio.h"

#include "ClienteVista.h"


using namespace std;

/*
 bool grabarEnDisco_Cliente(ClienteNegocio x){
        FILE *p;
        p=fopen("Cliente.dat","ab");
        if(p==NULL) return false;
        bool escribio=fwrite(&x, sizeof (ClienteNegocio), 1, p);
        fclose(p);
        return escribio;
    }

*/

bool ClienteNegocio::ValidacionCliente ( int IDcliente )
{
	if(IDcliente<=0)
	{
		cout<<"Ingrese un Id de cliente valido. "<<endl;
		return false;
	}
ClienteNegocio x;
	if(grabarEnDisco_Cliente(*x))return true;
}
