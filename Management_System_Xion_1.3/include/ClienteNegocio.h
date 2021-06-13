#define FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#ifndef CLIENTENEGOCIO_H
#define CLIENTENEGOCIO_H


class  ClienteNegocio
{
	private:

	int _IdCliente;

	public:



	void SetIdCliente(const int IdCliente){ _IdCliente = IdCliente;}
	int  GetIdCliente(){return _IdCliente;}
	bool ValidacionCliente (int x);


};



#endif // CLIENTENEGOCIO_H
