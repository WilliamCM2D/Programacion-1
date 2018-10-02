/*una empresa necesita calcular la produccion diaria de bebidas y los insumos requeridos para la elaboracion de refresco de acuerdo a la siguiente tabla 
 			agua 	azucar
	soda 	500ml	800g
	jugo	600ml	700g
ingresar la produccion diaria y muestre en pantalla los insumos requeridos */
//Programador: William Alexander Chavez Marquez CM18064
//libreias utilizadas
#include <iostream> 
#include <windows.h> 
#include <iomanip>
//Inicio del programdor
using namespace std;

int cl(int clear); //verifica que los datos sean correctos
void l(); //limpia la pantalla
//Funcion primaria
int main()
{

	int s; //soda producida a diario
	int j; //jugo producida a diario
	int producto; //Menu 
	int TotalAgua; //Agua que se usara
	int TotalAzucar; //Azucar que se usara
	int continuar = 1; //permite repetir el proceso
	
while(continuar = 1)//El proceso se repetira 
{	
	do //verificar que los datos esten bien
	{
	cout << "Seleccione producto (3 = soda, 2 = jugo, 1 = salir)" << endl;
	//crea como una especie de menu
	cin >> producto;
	cl(producto);//verificacion
	} while(producto < 1 || producto > 3);
	
	//Crea tres opciones 
	switch(producto)
	{
		//al seleccionar soda con el numero 3 entrara al siguiente caso
		case 3:
			do //verificacion de ingreso de datos correctos
			{
			
			cout << "Ingrese la produccion de soda del dia: ";
			cin >> s;
			cl(s);//verificacion
			
			} while(s < 1);
			
			TotalAgua = 600 * s; //Agua necesaria
			TotalAzucar = 700 * s; //Azucar necesaria
			
			cout << "El total de produccion de soda es de: " << s << " Unidades"  << endl;
			break; //fin del caso
		
		//al seleccionar jugo con el numero 2 entrara al siguiente caso
		case 2:
			do //verificacion
			{

			cout << "Ingrese la produccion de jugo del dia: ";
			cin >> j;
			cl(j);//verificacion
			
			} while(j < 1);
			
			TotalAgua = 600 * j; //Agua necesaria
			TotalAzucar = 700 * j; //Azucar necesaria
			cout << "El total de produccion de jugo es de: " << j << " Unidades" << endl;
			break; //fin del caso
		
		//al seleccionar salir con el numero uno entrara al siguiente caso
		case 1:
			//Mensaje de despedida
			cout << "Tenga lindo dia." << endl;
			system("pause");
			return 0;//termina el programa
	}
	
	//Resultado
	cout << "El total de agua requerida es de: " << TotalAgua << " ml" << endl; 
	cout << "El total de azucar requerida es de: " << TotalAzucar << " ml"<< endl;
	system("pause");
	l();
	
	do //verifica que no de ningun error al ingresar el datos
	{
	//menu para repetir el programa
	cout << "Repetir el proceso? (1 = Si, 2 = No)" << endl;
	cin >> continuar;
	cl(continuar);
	
	} while(continuar < 1 || continuar > 2);
	
	if (continuar == 2)
	{
		cout << "Tenga un lindo dia." << endl;
		return 0;
	}
}
}

void l()
{
	system("cls");
}
//funcion para limpieza de variables
int cl(int clear)
{
	if (cin.fail() || clear <= 0)
    	{
			cin.clear(); // limpia la variable
        	cin.ignore();
        	cout << "Ingrese un numero valido." << endl;
        	system("pause");
        	
    	}
    l();
    return clear;
}
