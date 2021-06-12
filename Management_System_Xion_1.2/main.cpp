#include<iostream>
#include<clocale>
#include<cstdlib>
#include "ClienteNegocio.h"
#include "ClienteFile.h"
#include "ClienteVista.h"

using namespace std;

int main()

{
ClienteVista obj;
ClienteNegocio obj1;
obj.cargarCliente(obj1);


setlocale(LC_ALL,"Spanish");
system("color 02");




system("pause");
return 0;

}
