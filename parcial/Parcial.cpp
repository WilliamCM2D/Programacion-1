/*william Alexander Chavez Marquez 
Numero de carnet CM18064
Fecha de entrega 10/11/2018
*/ 
#include <iostream>
#include <windows.h>
#include "stdafx.h"
#include "UtilidadesInterfaz.h"

using namespace std;

//Limpia la pantalla
void l(){
	system ("cls");
}

//Detiene el programa
void c(){
	system ("pause");
}

 //Structura de la variable datos
struct datos {
 	//Variable para guardar todos los datos
 int dato;

 datos *s;

 }*p,*aux,*u;

int dat;
int y;
void insertar (int dat);
void ll ();
int li ();
void borrar ();


class interfaz : UtilidadesInterfaz
{
public:
	//Constructor
	interfaz(){}

	//Destructor
	~interfaz(){}

	//validación 
	void MenuPrincpal(){
		ocultaCursor();//Ocultamos el cursor
		Portada();
		int TC = 0;//Inicializada en 0
		int numOp =1;//almacena el número 
		bool cerrarApp = false; //comprobar si debe cerrarse la aplicación.



		//Ciclo Principal de la Interfaz
		while(!cerrarApp){


			//Menú.
			//fue con ayuda
			system("CLS");//Limpiamos la Consola.
			//Primer Columna de Opciones
			gotoxy(5,5);

			if(numOp==1)
				cout<<"==>";
			cout<<"Agrega Numero 1"<<endl<<endl;
			gotoxy(5,7);

			if(numOp==2)
				cout<<"==>";
			cout<<"Llamar Numero 2"<<endl<<endl;
			gotoxy(5,9);

			if(numOp==3)
				cout<<"==>";
			cout<<"Listas de Numeros agregados 3"<<endl<<endl;
			gotoxy(5,11);

			if(numOp==4)
				cout<<"==>";
			cout<<"Borrar Numero de la lista 4"<<endl<<endl;
			gotoxy(5,13);



			//Imprimimos Opción de Salir
			gotoxy(1,19);

			cout<<"ESC/Salir";

			//pie de la pantalla.

			gotoxy(0,21);

			cout<<"Utilice las teclas Arriba y Abajo presione Enter para selecionar     ";
			cout<<"                                                                                    ";

			tecla=GetKey();//Leemos la tecla digitada.

			//En caso que la tecla digitada sea alguna de las aceptadas como acciones en el menú
			if(TC==ARR||TC==ABJ||TC==ESC||TC==ENT){
				//tecla arriba se resta uno al número opción.
				if(TC==ARR)
					numOpcion--;
				//tecla abajo se suma uno al número opción.
				if(TC==ABJ)
					numOpcion++;
				//tecla Esc llama a la función Salir.
				if(TC==ESC){
					cerrarApp = Salir();
				}
				//tecla ENT realizamos la acción para la opción seleccionada.
				if(TC==ENT){
					//Switch para controlar a que opción entrar 
					switch (numOpcion){
					case 1:{
				system("CLS");//Limpiamos la Consola.

cout<<"Ingrese dato: "<<endl;

 	cin>>y;

 	insertar(y);
 l();
 	cout<<"\nDato insertado!!"<<endl;

 	c();
						break;}
						system("CLS");//Limpiamos la Consola.
					case 2:ll();{

						break;}
						system("CLS");//Limpiamos la Consola.
					case 3:li(); {

						break;}
						system("CLS");//Limpiamos la Consola.
					case 4:borrar();{

						break;}

						}
					}
				}
			else

			//la Opción seleccionada se encuentre dentro del rango
			if(numOpcion==0)
				numOpcion=4;
			if(numOpcion==5)
				numOpcion=1;
			Sleep(100);
	 	}
		}

};
//para insertar 
void insertar (int dat)
{

aux=new(datos);

aux->dato=dat;

if(u)
{

u->s=aux;

aux->s=NULL;

u=aux;
}

else
{

p=u=aux;
}
}
//para llamar
void ll()
{

	l();

if(p)
{

aux=p;

cout<<"\nLlamando a " <<p->dato<<endl;

char soundfile[] = "sonido de turno.wav";
				PlaySound (soundfile, NULL, SND_FILENAME);

}

else
{

cout<<"\n No hay datos"<<endl;

}

c();
}
//hacer una lista con los numeros que tenemos 
int li()
{

	l();

int j = 1;
int r = 0;
if(!u)
{
//mensaje 
cout<<"\n No hay datos en la cola"<<endl;
c();

}

aux=p;

cout<<"\n en la cola"<<endl;

while(aux)
{

cout<<j++<<") "<<aux->dato<<endl;
aux=aux->s;
c();
}


}
//borrar numeros
void borrar()
{
	l();

if(p)
{

aux=p;

cout<<"\nElimino a " <<p->dato<<endl;

p=aux->s;

delete(aux);

}

else
{

cout<<"\n No hay datos para eliminar"<<endl;

}

c();
}

int _tmain(int argc, _TCHAR* argv[]){
	interfaz inter;//ObjetoInterfaz
	inter.MenuPrincpal();//Metodo tecla Princial de la Interfaz.
	return 0;
}
