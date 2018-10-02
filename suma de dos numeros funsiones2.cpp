//Programa creado por: Ulises Edgardo Coreas Huezo 
//Carnet: CH18030

				//librerias obligatorias utilizadas
#include <cstdlib>
#include <iostream> //utilizado para operaciones de entrada/salida.
#include <math.h>	//utilizado para procesos matematicos.

				//cuerpo del programa
using namespace std;

/*float sumar (float x, float y);
void pedirNumeros() //sin importar donde esta la funcion 
					no dara problema de compilacion*/


float sumar (float *x, float *y)
{
	cout << "x = "<< &x << endl;
	cout << "y = "<< &y << endl;
	
	return *x+*y;
}
//int main (int argc, char *argv[])
void pedirNumeros()
{	float x;
	float y;
	float res;
	
	cout<<"Ingrese un numero"<<endl;
	cin >> x;
	cout<<"Ingrese un numero"<<endl;
	cin >> y;
	res=sumar(&x,&y);
	
	cout << "x = "<< &x << endl;
	cout << "y = "<< &y << endl;
	
	cout<<"El resultado es: "<<res<<endl;

}

int main (){
	
pedirNumeros();
system ("pause"); //esta en la libreria iostream
return 0;

}
