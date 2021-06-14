#define FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#ifndef CLIENTEFILE_H
#define CLIENTEFILE_H
#include "ClienteNegocio.h"

class ClienteFile
{
	private:
		FILE *pfile;

	public:
		bool grabarEnDisco_Cliente(ClienteNegocio*);
		//bool leerDeDisco_Cliente(Cliente_Proveedor_Propiedades &Cliente,int pos);

};




#endif // CLIENTEFILE_H
