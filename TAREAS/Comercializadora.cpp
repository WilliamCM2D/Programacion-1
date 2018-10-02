//Programador: William Alexander Chavez Marquez CM18064
//Fecha de diseño del programa: 10/09/2018
//Librerias necesarias 
#include <iostream>
#include <stdlib.h>
#include <windows.h>
//Cuerpo del programa
using namespace std;
int main (){
//Cambia de color el fondo y de fuente 
system ("color 4F");
//Variables utilizadas en el programa
	int ventas;
//Numero de ventas al mes  
	int Salario; 
//El pago que se le dara a la persona
//Pedir cantidad de ventas que se hizo
	do
	{
		cout << "Ingresar ventas del mes"<< endl ;
		cin >> ventas;
	}while(ventas < 0);
//Compara la ventas y mira cual es el salario que tiene el vendedor 
	if (ventas > 0 && ventas <= 500000)
	{ 
		Salario=80000;
	}
	else if (ventas > 500001 && ventas <= 1000000)
	{
		Salario=160000;
	}
	else if (ventas > 1000001 && ventas <= 1500000)
	{
		Salario=320000;
	}
	else if (ventas > 1500001 && ventas <= 2500000)
	{
		Salario=450000;
	}
	else if (ventas > 2500001 && ventas <= 4000000)
	{
		Salario=550000;
	}
	else if (ventas > 4000000)
	{
		Salario = ventas * 0.20 ;
	}
//Sonido antes de dar el mensaje del salario
		Beep(587.33,100);
		Beep(698.48,500);
		Beep(880,500);
		Beep(587.33,1000);
		Beep(689.46,500);
		Beep(880,250);
		Beep(1046.50,250);
		Beep(987.77,500);
		Beep(783.99,500);
		Beep(698.46,250);
		Beep(783.99,250);
		Beep(880,500);
		Beep(587.33,500);
		Beep(523.25,250);
		Beep(659.26,250);
		Beep(587.33,750);
		cin.get();
//da un mensaje del salario que recibe el vendedor 
	cout<<"El pago es de: $"<< Salario <<endl;
//pausa el sonido
	system("PAUSE");
// Fin del programa
	return 0;
}
