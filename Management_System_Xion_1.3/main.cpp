#include<iostream>
#include<clocale>
#include<cstdlib>
#include "ClienteNegocio.h"
#include "ClienteFile.h"
#include "ClienteVista.h"

using namespace std;






int main()

{
setlocale(LC_ALL,"Spanish");
system("color 02");

ClienteVista obj;
obj.cargarCliente();







system("pause");
return 0;

}
