#include<iostream>
#include<clocale>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include "Transaxinventario.h"

		void TransaxInventario::setTRID_Articulo(const char* cadena){strcpy(trid_Articulo,cadena);}
        void TransaxInventario::setTRCategoria(const char* cadena){strcpy(trcategoria,cadena);};
        void TransaxInventario::setTRMarca(const char* cadena){strcpy(trmarca,cadena);};
        void TransaxInventario::setTRCantidad(int n){trcantidad=n;}
		void TransaxInventario::setTRQxBulto(int b){trqxBulto=b;}
        void TransaxInventario::setTRprecioUnitario(float n){trprecioUnitario=n;}
        void TransaxInventario::setTRImpositivoVentas(float i){trimpositivoVentas=i;}
		void TransaxInventario::setFechaTransax(Fecha xx){fechaTransax=xx;}
		void TransaxInventario::setStock(float n){stock=n;}


        //void TransaxInventario::_setFechaTransax(int d, int m, int a){fechaTransax(d,m,a);}
        TransaxInventario::TransaxInventario(int d,int m,int a){fechaTransax.setFecha(d,m,a);}

        const char*  TransaxInventario::getTRID_Articulo(){return trid_Articulo;}
        const char*  TransaxInventario::getTRCategoria(){return trcategoria;}
        const char*  TransaxInventario::getTRMarca(){return trmarca;}
        int          TransaxInventario::getTRCantidad(){return trcantidad;}
		int          TransaxInventario::getTRQxBulto(){return trqxBulto;}
        float        TransaxInventario::getTRprecioUnitario(){return trprecioUnitario;}
        float        TransaxInventario::getTRImpositivoVentas(){return trimpositivoVentas;}
		Fecha        TransaxInventario::getFechaTransax(){return fechaTransax;}
		float        TransaxInventario::getStock(){return stock;}

