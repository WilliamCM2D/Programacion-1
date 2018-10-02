//Programa creado por: Ulises Edgardo Coreas Huezo 
//Carnet: CH18030

				//librerias obligatorias utilizadas
#include <iostream> //utilizado para operaciones de entrada/salida.
#include <math.h>	//utilizado para procesos matematicos.
#include <windows.h> //utilizado para declarar las funciones de la biblioteca windows API.

				//cuerpo del programa
using namespace std;

int main (int argc, char *argv[])
{

int x;

int fact=1;
  
do{

cout<<"Escriba el numero que quiere sacar el factorial: "<<endl;
cin>>x;

}while (x < 0);

for (int i=1;i<=x;i++)
{
	
	fact=fact*i;
	
}

cout <<"El resultado es: "<<fact<<endl;

system("pause");
return EXIT_SUCCESS;

}

