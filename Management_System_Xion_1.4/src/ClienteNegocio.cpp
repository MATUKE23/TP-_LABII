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

bool ClienteNegocio::ValidacionyGrabadodeCliente ()
{
	if(_IdCliente<=0)
	{
		cout<<"Ingrese un Id de cliente valido. "<<endl;
		return false;
	}

ClienteFile a;
	if(a.grabarEnDisco_Cliente(this))return true;
}
