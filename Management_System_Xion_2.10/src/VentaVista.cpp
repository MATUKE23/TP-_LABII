#include<iostream>
#include<clocale>
#include<cstdlib>
#include<cstring>
#include <cstdio>
#include<string.h>

#include "TransaxinventarioNegocio.h"
#include "Transaxinventario.h"
#include "VentaNegocio.h"
#include "VentaVista.h"

using namespace std;

void VentaVista::menuVentas()
{
    int opc;
    setlocale(LC_ALL,"Spanish");
    system("color 02");

    do
    {
        cout<<"MENU VENTAS"<<endl<<endl;
        cout<<"1-CARGAR VENTAS"<<endl;
        cout<<"0-VOLVER AL MENU ANTERIOR"<<endl<<endl;
        cout<<"Ingresar Opcion: ";
        cin>>opc;

        system("cls");
        switch(opc)
        {

        case 1:

            if(cargarVentas()==true) cout<<"¡¡DATOS GUARDADOS CON EXITO!!"<<endl;
            else cout<<"¡¡ERROR, NO SE PUDIERON GUARDAR LOS DATOS!!"<<endl;

            system("pause");
            system("cls");
            break;

        case 0:

		break;

        default:
            break;

        }

    }
    while(opc!=0);


}


bool VentaVista::cargarVentas()
{
    VentaNegocio negocio;
    char cadena[20];
    int entero,dia,mes,anio;;
    float decimal;


    cout<<"Datos de la fecha actual: "<<endl;
    cout<<"Dia: ";
    cin>>dia;
    cout<<"Mes: ";
    cin>>mes;
    cout<<"Anio: ";
    cin>>anio;

    TransaxInventario datos(dia,mes,anio);


    cout<<"--------------------------------------"<<endl;

    cout << "Datos de la Venta:"<<endl;
    cout<<"Ingresar: "<<endl;

    cout<<"ID_Articulo: ";
        negocio.cargarCadena(cadena,20);
        datos.setTRID_Articulo(cadena);

    cout<<"Categoria:";
        negocio.cargarCadena(cadena,20);
        datos.setTRCategoria(cadena);

    cout<<"Marca:";
      negocio.cargarCadena(cadena,20);
        datos.setTRMarca(cadena);

    cout<<"Cantidad:";
        cin>>entero;
        datos.setTRCantidad(entero);

    cout<<"Precio Unitario: ";
    cin>>decimal;
        datos.setTRprecioUnitario(decimal);

   // cout<<"Impositivo Ventas:";
   //     datos.setImpositivoVentas(decimal);


    TransaxinventarioNegocio negocio2;
    negocio2.actualizarstock(0,datos); //llamo al metodo de la clase TransaxinventarioNegocio que va a modificar el stock
    return negocio.guardarDatos(datos);

}

bool VentaVista::mostrarVentas(){

	TransaxinventarioNegocio negocio;
    TransaxInventario *vectorVentas;

    vectorVentas=negocio.Cargar_Vector_de_Ventas();///get_compras

        for(int x;x<negocio.CantidadDeVentas();x++){
        cout<< "ID_Articulo: "<<vectorVentas[x].getTRID_Articulo() <<endl;
        cout<< "Anio de compra: "<<vectorVentas[x].getFechaTransax().getAnio() <<endl;
        cout<< "Mes de compra: "<<vectorVentas[x].getFechaTransax().getMes() <<endl;
		cout<< "Dia de compra: "<<vectorVentas[x].getFechaTransax().getDia() <<endl;
		cout<< "ID_Articulo: "<<vectorVentas[x].getTRID_Articulo() <<endl;
        cout<< "Categoria: "<<vectorVentas[x].getTRCategoria() <<endl;
        cout<< "Marca: "<<vectorVentas[x].getTRMarca() <<endl;
        cout<< "Cantidad: "<<vectorVentas[x].getTRCantidad() <<endl;
        cout<< "QxBulto: "<<vectorVentas[x].getTRQxBulto() <<endl;
        cout<< "Precio Unitario: "<<vectorVentas[x].getTRprecioUnitario() <<endl;

        cout<< "-------------------------"<<endl;}

    delete vectorVentas;

}
