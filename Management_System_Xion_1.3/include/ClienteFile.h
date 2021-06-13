#define FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#ifndef CLIENTEFILE_H
#define CLIENTEFILE_H


class ClienteFile
{
	private:
		FILE *pfile;

	public:
		//static ClienteNegocio x;
		bool grabarEnDisco_Cliente(*pfile );
		//bool leerDeDisco_Cliente(Cliente_Proveedor_Propiedades &Cliente,int pos);

};




#endif // CLIENTEFILE_H
