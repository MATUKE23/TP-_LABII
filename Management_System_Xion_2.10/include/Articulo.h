#define FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#ifndef ARTICULO_H
#define ARTICULO_H


class Articulo
{
   private:
        char id_Articulo[20];
        char categoria[20];
        char marca[20];
        int qxBulto;
        float precioUnitario;

    public:
        void setID_Articulo(const char* );
        void setCategoria(const char* );
        void setMarca(const char* );
        void setQxBulto(int);
        void setprecioUnitario(float);

        const char*  getID_Articulo();
        const char*  getCategoria();
        const char*  getMarca();
		int getQxBulto();
        float getprecioUnitario();
        void menuArticulos();

};

#endif // ARTICULO_H
