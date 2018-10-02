//Programa creado por: Ulises Edgardo Coreas Huezo 
//Carnet: CH18030

				//librerias obligatorias utilizadas
#include <iostream> //utilizado para operaciones de entrada/salida.

				//cuerpo del programa
using namespace std;

int main ()
{

/*int vector[] = {1,2,3,4,5};

cout<<vector[1];
cout<<vector[4]; prueva 1*/

/*string nombres[] = {"juan","David","Carlos"};

cout<<nombres[0]<<endl;
cout<<nombres[1]<<endl;
cout<<nombres[2]<<endl; prueva 2*/

/*int numeros[] = {1,2,3,4,5,6,7,8,9,10};

for (int i=0; i<10; i++)
{

	cout<<numeros[i]<<endl;
} practica 3*/

/*int numeros[] = {1,2,3,4,5,6,7,8,9,10};

for (int i=9; i>=0; i--)
{

	cout<<numeros[i]<<endl;
} practica 4*/

/*int vector [30];
int nue;

cout<<"Ingrese el numero de datos: ";cin>>nue;

for (int i=0; i<nue; i++)
{
	cout<<"ingrese numero: "; cin>>vector [i];
	
}

for (int i=0; i<nue; i++)
{
	cout<<vector[i]<<endl;	
} practica 5*/

int vector [5];
int num;
int promedio;
int suma;

cout<<"ingrese el numero de la cantidad de las notas: "; cin>>num;

for (int i=0; i<num; i++)
{
	cout<<"ingrese numero: "; cin>>vector[i];
	suma = suma + vector[i];
}
for (int i=4; i>=0; i--)
{
	cout<<vector[i]<<endl;	
}

promedio = (suma/num);

cout<<"el promedio es: "<<promedio;

return 0;
}

