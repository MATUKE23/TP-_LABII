#include<iostream>
#include<clocale>
#include<cstdlib>
#include "ArticuloNegocio.h"
#include "ArticuloFile.h"
#include "Articulo.h"

using namespace std;

    bool ArticuloFile::grabarEnDisco(Articulo articulo){

        FILE *p;
        p=fopen("Articulos.dat","ab");
        if(p==NULL) return false;
        bool escribio=fwrite(&articulo, sizeof (Articulo), 1, p);
        fclose(p);
        return escribio;
    }


Articulo* ArticuloFile::obtener_Datos_Articulos(){

        int pos=0,cant=cantidadDeDatosGrabados();
        Articulo* vectorArticulos= new Articulo[cant];
        if(vectorArticulos==NULL) return 0;

        FILE *p;
        p=fopen("Articulos.dat","rb");
        if(p==NULL) return 0;

        for(pos;pos<cant;pos++){

        fseek(p, pos*sizeof (Articulo), 0);
        fread(&vectorArticulos[pos], sizeof (Articulo), 1, p);

        }

        fclose(p);
        return vectorArticulos;
    }

    int ArticuloFile::cantidadDeDatosGrabados(){

        Articulo articulo;
        int cantidad=0;

        FILE *p;
        p=fopen("Articulos.dat","rb");
        if(p==NULL) return false;

        while(fread(&articulo, sizeof (Articulo), 1, p)==true)cantidad++;


        fclose(p);
        return cantidad;
    }

