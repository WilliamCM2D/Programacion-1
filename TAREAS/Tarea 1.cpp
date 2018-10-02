/*una empresa de telefonia necesita calcular el total a pagar por cada cliente segun la siguiente tabla 
De 1 a 10 min se paga $0.05 
De 11 minutos a 15 minutos son $0.08 
Mas de 15 min $0.10
Calcular el total a pagar utilizando ciclos y funciones */
//William Alexander Chavez Marquez CM18064
//librerias utilizadas
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
 
int cl(int clear);//hace una verificacion

void l();//limpia la pantalla 

using namespace std;

int main()
{
	int Minutos;//numero de minutos
    float total;//total a pagar
    float llamadas;//numero de llamadas
	float Costo1 = 0.05;//costo de llamadas de 1 a 10 minutos
	float Costo2 = 0.08;//costo de llamadas de 11 a 15 minutos
	float Costo3 = 0.10;//costo de llamadas mayores a 15 minutos
	int n;//numero
	float suma;//suma 
	
 		do {
//ingresar el numero de llamadas realizadas
    cout<<"Ingrese las llamadas realizadas: "<<endl;
    cin>> llamadas;
    cl(llamadas);//verificacion
    l();//limpiar pantalla
    
   } while (llamadas < 1);
   
  for (n=1 ; n <= llamadas; n++){
    //ingresar los minutos de cada llamada
    cout<< "Minutos de duracion:"<<""<<n<<endl;
	cin>> Minutos;
	cl(Minutos);//verificacion
	l();//limpiar pantalla
	    //cuadro de decision para los costos
	    //al ser mas de 1 a 10 minutos de llamada se cobrara el costo numero 1
    if (Minutos >= 1 &&  Minutos < 10)
       {
        	total = Costo1;
       }
       //al ser mas de 11 a 15 minutos de llamada se cobrara el costo numero 2
       else if (Minutos >= 11 && Minutos < 15)
       {
            total = Costo2;
       }
       //al ser mas de 15 minutos de llamada se cobrara el costo numero 3
       else if (Minutos > 15) 
       {
			total = Costo3;
	   }
	   //sumatoria para encontrar el pago
	   suma=(suma + total);
 }
 //da el precio a pagar 
    cout << "El valor a pagar es: $ "<< suma << endl;
	system ("pause");
    return 0;
}
//limpieza de pantalla
void l()
{
	system("cls");
}
//verificacion para datos erroneos 
int cl(int clear)
{
	if (cin.fail() || clear <= 0)
    	{
			cin.clear(); // limpia la variable
        	cin.ignore();
        	cout << "Ingrese un numero valido." << endl;
        	system("pause");
        	l();
    	}
    l();
    return clear;
}
