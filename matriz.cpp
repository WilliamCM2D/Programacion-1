//Programa creado por: Ulises Edgardo Coreas Huezo 
//Carnet: CH18030

				//librerias obligatorias utilizadas
#include <iostream> //utilizado para operaciones de entrada/salida.
#include <math.h>	//utilizado para procesos matematicos.
#include <windows.h> //utilizado para declarar las funciones de la biblioteca windows API.

				//cuerpo del programa
using namespace std;

int main (int argc, char *argv[]){
	int x[4][4] = {0};
	
		for(int i=0; i<=3; i++)
	{
		x[i][1]=3;
		
		if(i==3){
				x[3][2]=3;
				x[3][3]=3;

			
		}
	
	}
	
	for(int i=0; i<=3; i++)
	{
		for(int j=0; j<=3; j++)
		{
	
			cout<<x[i][j];
	
		}
		cout <<endl;
	}
	

system("pause");
return 0;

}
