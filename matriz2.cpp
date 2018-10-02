//Programa creado por: Ulises Edgardo Coreas Huezo 
//Carnet: CH18030

				//librerias obligatorias utilizadas
#include <iostream> //utilizado para operaciones de entrada/salida.
#include <math.h>	//utilizado para procesos matematicos.
#include <windows.h> //utilizado para declarar las funciones de la biblioteca windows API.

				//cuerpo del programa
using namespace std;

int main (int argc, char *argv[]){
	/*char x[4][4];
	
	
	for(int i=0; i<=2; i++)
	{
		for(int j=2; j>=0; j--)
		{
	
			x[i][j]='x';
	
		}
	}
	
		for(int i=0; i<=3; i++)
	{
		x[i][1]=3;
		
		if(i=3){
				x[3][2]=3;
				x[3][3]=3;			
		}	
	}*/
	
	
		char x[4][4];
	
	for(int i=0; i<=2; i++)
	{
		for(int j=2; j>=0; j--)
	{	
		if(i=3){
				x[i][j]=1;			
		}
		else{
			x[i][j]=0;
		}
			
	for(int i=0; i<=3; i++)
	{
		for(int j=0; j<=3; j++)
		{
	
			cout<<x[i][j]<<"______";
	
		}
		cout<<endl;
	}
	

system("pause");
return 0;

}

}
