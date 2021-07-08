#include"Articulo.h"
#include<iostream>
#include<clocale>
#include<cstdlib>
#include<cstring>
#include <cstdio>
#include<string.h>
using namespace std;
		//sets
        void Articulo::setID_Articulo(const char* cadena){strcpy(id_Articulo,cadena);}
        void Articulo::setCategoria(const char* cadena){strcpy(categoria,cadena);};
        void Articulo::setMarca(const char* cadena){strcpy(marca,cadena);};
		void Articulo::setQxBulto(int b){qxBulto=b;}
        void Articulo::setprecioUnitario(float n){precioUnitario=n;}

		//gets
        const char*  Articulo::getID_Articulo(){return id_Articulo;}
        const char*  Articulo::getCategoria(){return categoria;}
        const char*  Articulo::getMarca(){return marca;}
		int          Articulo::getQxBulto(){return qxBulto;}
        float        Articulo::getprecioUnitario(){return precioUnitario;}




void Articulo::menuArticulos()
{
    int opc;
    system("color 02");

    do
    {
        cout<<"MAESTRO DE ARTICULOS"<<endl<<endl;
        cout<<"1-CARGAR ARTICULOS"<<endl;
        cout<<"2-LISTAR ARTICULOS"<<endl;
        cout<<"0-VOLVER AL MENU ANTERIOR"<<endl<<endl;
        cout<<"Ingresar Opcion: ";
        cin>>opc;

        system("cls");
        switch(opc)
        {

        case 1:

           // if(cargarCliente()==true) cout<<"¡¡DATOS GUARDADOS CON EXITO!!"<<endl;
           // else cout<<"¡¡ERROR, NO SE PUDIERON GUARDAR LOS DATOS!!"<<endl;

            system("pause");
            system("cls");
            break;

        case 2:
            //mostrarClientes();
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

