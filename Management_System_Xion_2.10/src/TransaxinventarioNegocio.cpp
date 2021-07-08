#include "TransaxinventarioNegocio.h"
#include "TransaxinventarioFile.h"

void TransaxinventarioNegocio::actualizarstock(bool tipoTrans,TransaxInventario datos)
{
    TransaxinventarioFile archivo;
    int stock=archivo.getStock();// cargo la disponibilidad del stock en una variable

    if(tipoTrans==false) //verifico si la transaccion es de tipo compra:
    {
        stock+=datos.getTRCantidad();//sumo cantidad de productos al stock
    }
    else// caso contrario,si la transaccion es de tipo compra:
    {
        stock-=datos.getTRCantidad();//resto cantidad de productos al stock
    }

     datos.setStock(stock);//modifico el stock en la clase Transinventario

     archivo.modificarEnDisco(datos);  //llamo a la funcion que actualiza el inventario
}



bool TransaxinventarioNegocio::guardarDatosCompra(TransaxInventario compra)
{
    TransaxinventarioFile archivo;
    return archivo.grabarDatosCompraEnDisco(compra);
}


TransaxInventario* TransaxinventarioNegocio::Cargar_Vector_de_Compras()
{
    TransaxInventario *vectorCompras;
    TransaxinventarioFile archivo;
    vectorCompras=archivo.obtener_Datos_Compras();

return vectorCompras;
}

TransaxInventario* TransaxinventarioNegocio::Cargar_Vector_de_Stocks()
{
    TransaxInventario *vectorStocks;
    TransaxinventarioFile archivo;
    vectorStocks=archivo.obtener_Datos_Inventario();

return vectorStocks;
}


int TransaxinventarioNegocio::CantidadDeCompras()
{

    TransaxinventarioFile archivo;

    return archivo.cantidadDeDatosComprasGrabadas();

}


void TransaxinventarioNegocio::cargarCadena(char *pal, int tam){
			int i;
			fflush(stdin);
			for(i=0;i<tam;i++){
				pal[i]=cin.get();
				if(pal[i]=='\n') break;
				}
				pal[i]='\0';
				fflush(stdin);
				}


TransaxInventario* TransaxinventarioNegocio::Cargar_Vector_de_Ventas()
{
    TransaxInventario *vectorVentas;
    TransaxinventarioFile archivo;
    vectorVentas=archivo.obtener_Datos_Ventas();

return vectorVentas;
}


int TransaxinventarioNegocio::CantidadDeVentas()
{

    TransaxinventarioFile archivo;

    return archivo.cantidadDeDatosComprasGrabadas();

}

int TransaxinventarioNegocio::CantidadDeTransax()
{

    TransaxinventarioFile archivo;

    return archivo.cantidadDeTransaxGrabadas();

}
