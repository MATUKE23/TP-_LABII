#include<iostream>

#include "TransaxinventarioFile.h"
#include "Transaxinventario.h"

using namespace std;

int TransaxinventarioFile::cantidadDeTransaxGrabadas()
{

    TransaxInventario inventario;
    int cantidad=0;

    FILE *p;
    p=fopen("Inventario.dat","rb");
    if(p==NULL) return false;

    while(fread(&inventario, sizeof (TransaxInventario), 1, p)==true)cantidad++;


    fclose(p);
    return cantidad;
}

int TransaxinventarioFile::cantidadDeDatosComprasGrabadas()
{

    TransaxInventario inventario;
    int cantidad=0;

    FILE *p;
    p=fopen("Compras.dat","rb");
    if(p==NULL) return false;

    while(fread(&inventario, sizeof (TransaxInventario), 1, p)==true)cantidad++;


    fclose(p);
    return cantidad;
}

int TransaxinventarioFile::cantidadDeDatosVentasGrabadas()
{

    TransaxInventario inventario;
    int cantidad=0;

    FILE *p;
    p=fopen("Ventas.dat","rb");
    if(p==NULL) return false;

    while(fread(&inventario, sizeof (TransaxInventario), 1, p)==true)cantidad++;


    fclose(p);
    return cantidad;
}

bool TransaxinventarioFile::grabarEnDisco(TransaxInventario compra) //graba datos de compra en inventario
{

    FILE *p;
    p=fopen("Inventario.dat","ab");
    if(p==NULL) return false;
    bool escribio=fwrite(&compra, sizeof (TransaxInventario), 1, p);
    fclose(p);
    return escribio;
}


bool TransaxinventarioFile::grabarDatosCompraEnDisco(TransaxInventario compra) //graba datos de compra en compras
{

    FILE *p;
    p=fopen("Compras.dat","ab");
    if(p==NULL) return false;
    bool escribio=fwrite(&compra, sizeof (TransaxInventario), 1, p);
    fclose(p);
    return escribio;
}


bool TransaxinventarioFile::grabarDatosVentasEnDisco(TransaxInventario venta) //graba datos de compra en compras
{

    FILE *p;
    p=fopen("Ventas.dat","ab");
    if(p==NULL) return false;
    bool escribio=fwrite(&venta, sizeof (TransaxInventario), 1, p);
    fclose(p);
    return escribio;
}






bool TransaxinventarioFile::modificarEnDisco(TransaxInventario datos)  //paso por parametro el registro a agregar
{
    int cant=cantidadDeTransaxGrabadas();// pido la cantidad de registros

    if(cant<10)
    {
        grabarEnDisco(datos);   //verifico si la cantidad es menor a 10, en cuyo caso grabo el dato al final del archivo
    }
    else  //caso contrario:
    {

        TransaxInventario *vec=obtener_Datos_Inventario(); //copio los datos del archivo en vector

        for(int x=0; x<10; x++) vec[x]=vec[x+1]; // voy sobreescribiendo los datos del vector

        vec[9]=datos;// agrego el ultimo dato

        FILE *p;
        p=fopen("Inventario.dat","wb"); //borro el archivo y lo truco a longitud cero
        if(p==NULL) return 0;


        for(int pos=0; pos<10; pos++) // //escribo el archivo de vuelta con la lista actualizada
        {
            fseek(p, pos*sizeof (TransaxInventario), 0);
            fwrite(&vec[pos], sizeof (TransaxInventario), 1, p);
        }
        fclose(p);
        return 1;
    }
}


int TransaxinventarioFile::getStock(){
        TransaxInventario datos;
        FILE *p;
        p=fopen("Inventario.dat","rb");// habro el archivo en modo lectura
        if(p==NULL) return 0;
        fseek(p,sizeof (TransaxInventario), 2); //posiciono el puntero al final del archivo
        fread(&datos, sizeof (TransaxInventario), 1, p);
return datos.getStock();//devuelvo el stock disponible;
}



TransaxInventario* TransaxinventarioFile::obtener_Datos_Compras(){

        int pos=0,cant=cantidadDeDatosComprasGrabadas();
        TransaxInventario* vectorCompras= new TransaxInventario[cant];
        if(vectorCompras==NULL) return 0;

        FILE *p;
        p=fopen("Compras.dat","rb");
        if(p==NULL) return 0;

        for(pos;pos<cant;pos++){

        fseek(p, pos*sizeof (TransaxInventario), 0);
        fread(&vectorCompras[pos], sizeof (TransaxInventario), 1, p);

        }

        fclose(p);
        return vectorCompras;
    }

TransaxInventario* TransaxinventarioFile::obtener_Datos_Ventas(){

        int pos=0,cant=cantidadDeDatosVentasGrabadas();
        TransaxInventario* vectorVentas= new TransaxInventario[cant];
        if(vectorVentas==NULL) return 0;

        FILE *p;
        p=fopen("Ventas.dat","rb");
        if(p==NULL) return 0;

        for(pos;pos<cant;pos++){

        fseek(p, pos*sizeof (TransaxInventario), 0);
        fread(&vectorVentas[pos], sizeof (TransaxInventario), 1, p);

        }

        fclose(p);
        return vectorVentas;
    }

    TransaxInventario* TransaxinventarioFile::obtener_Datos_Inventario()
{

    int pos=0,cant=cantidadDeTransaxGrabadas();
    TransaxInventario* vectorInventario= new TransaxInventario[cant];
    if(vectorInventario==NULL) return 0;

    FILE *p;
    p=fopen("Inventario.dat","rb");
    if(p==NULL) return 0;

    for(pos; pos<cant; pos++)
    {

        fseek(p, pos*sizeof (TransaxInventario), 0);
        fread(&vectorInventario[pos], sizeof (TransaxInventario), 1, p);

    }

    fclose(p);
    return vectorInventario;
}
