//Programa creado por: Ulises Edgardo Coreas Huezo 
//Carnet: CH18030

/*programa para calcular la venta de cada ventendor realizada en el mes 
  y mostrar el salario*/

				//librerias obligatorias utilizadas
#include <iostream> //utilizado para operaciones de entrada/salida.
#include <math.h>	//utilizado para procesos matematicos.
#include <iomanip>	//utilizado para manipular el formato de salida.
#include <windows.h> //utilizado para declarar las funciones de la biblioteca windows API.
				//cuerpo del programa
using namespace std;

				//variables utilizadas
int main ()
{
				/*comando para asignar color de fondo y color a las letras,
				  el 80 significa 8="color de fondo" 1="color de letras"*/
system("color 81");

				//variable de la venta
int venta;
				//variable de la paga
float salario;

				//saludo
	cout<<"Hola bienvenido/a."<<endl;

				//ciclo para verificar si es menor que 0
do
{

				//peticion de la cantidad de ventas realizadas.
cout<<"Escriba la cantidad de ventas realizadas en el mes."<<endl;

				//se asigna valor a la variable venta
cin>> venta;
				//cierre del ciclo
} while(venta < 0);

				//peticion de cuantos decimales imprimira
cout << setprecision(3)<<endl;
cout << fixed<<endl;

				//primera condicion
if (venta >= 0 && venta <= 500000){
	
				//se asigna valor	
	salario = 80.000; 
}
				//segunda condicion
else if (venta >= 500001  && venta  <= 1000000){
	
				//se asigna valor
	salario = 160.000;
}
				//tercera condicion
else if (venta >= 1000001  && venta <= 1500000){
	
				//se asigna valor
	salario = 320.000;
}
				//cuarta condicion
else if (venta >= 1500001  && venta <= 2500000){
	
				//se asigna valor
	salario = 450.000;
}
				//quita condicion
else if (venta >= 2500001  && venta <= 4000000){
	
				//se asigna valor
	salario = 500.000;
}
				//sexta condicion
else if (venta > 4000000){
	
				//se asigna valor, usando la operacion del 20 %
	salario = (venta * 0.20);
	
}
				//septima condicion
else {
	cout<<"No tendra pago"<<endl;
}
				//imprimir la paga que le corresponde
	cout<<"Su paga por la venta es de: "<<salario<<endl;
	
				//tipo de sonido
	Beep(523,300); 
	Beep(659,300); 
	Beep(587,300); 
	Beep(698,300); 
	Beep(784,300); 
	Beep(523,300); 
	
				//comando para detener el programa
system("pause");
return EXIT_SUCCESS; //comando para salir del programa
}
