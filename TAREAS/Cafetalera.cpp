//Programa elaborado por: William Alexander Chavez Marquez CM18064
//Estas son las librerias utilizadas en este programa
#include <iostream>
//Cuerpo del programa
using namespace std;
int main (){
//Variables utilizadas en el programa
	float sacos;// cantidad de sacos que comprara 
	float compra; //cuanto sale por todos los sacos.
	float descuentoTotal; //que descuento se le aplica.
	float total; //cuanto pagara al final.
	
	cout << "Bienvendos a El cafetaso."<< endl 
	<< "Cual es la cantidad de sacos que desea comprar (precio del saco de cafe $100.00)" << endl;
	
	cin >> sacos; //cantidad de sacos que el cliente desea comprar 
	
	compra = sacos * 100
	
//en esta parte se ara la operacion para aplicarle el descuento por compras de malloreo
		if (sacos > 300 )
		{
			descuentoTotal = compra * 0.25; //aplicamos el 25% al comprar mas de 300 sacos 
		}
		else if (sacos = 300)
		{
			descuentoTotal = compra * 0.20; //aplicamos el 20% al comprar 300 sacos 
		}
		else if (sacos > 250)
		{
			descuentoTotal = compra * 0.20; //aplicamos el 20% al comprar mas de 250 sacos 
		}
		else if (sacos > 200)
		{
			descuentoTotal = compra * 0.15; //aplicamos el 15% al comprar mas de 200 sacos 
		}
		else if (sacos > 100)
		{
			descuentoTotal = compra * 0.10; //aaplicamos el 10% al comprar mas de 100 sacos 
		}
		else 
		{
			descuentoTotal = 0; //aplicamos el 0% al comprar menos de 100 sacos 
		}	
	
	total = compra - descuentoTotal + (compra * 0.13); //se surmara el iva y se le restara el descuento 
	
	cout<<"El total a pagar es de: $"<<total<<endl//se dira cuanto es el total a pagar 
	<<"Gracias por preferirnos. Le estaremos esperando"; //se dara el mensaje de despedida 
	
	return 0;//Fin del programa 
} 
