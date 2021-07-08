#ifndef TRANSAXINVENTARIONEGOCIO_H
#define TRANSAXINVENTARIONEGOCIO_H
#include "Transaxinventario.h"

class TransaxinventarioNegocio
{
    public:
	void actualizarstock(bool,TransaxInventario);
	int CantidadDeTransax();
	void cargarCadena(char *pal, int tam);
	TransaxInventario* Cargar_Vector_de_Stocks();


	//para compras
	TransaxInventario* Cargar_Vector_de_Compras();
	int CantidadDeCompras();
	bool guardarDatosCompra(TransaxInventario);

	//para ventas
	TransaxInventario* Cargar_Vector_de_Ventas();
	int CantidadDeVentas();

};

#endif // TRANSAXINVENTARIONEGOCIO_H
