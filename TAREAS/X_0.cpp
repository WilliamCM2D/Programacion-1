//William Alexander Chavez Marquez CM18064
#include <iostream> //ingreso y salida de datos
#include <windows.h> //efectos de la consola
#include <iomanip> //incluye la precision de decimales

using namespace std;

string t[3][3]; //variable global para facilidad al codificar;


int cl(int clear); //verifica que el campo ingresado sea correcto
void l(); //limpia la pantalla
void vr();
char changeT(char turn);
char ganar(char turn);



int main() //funcion principal
{
	/////////////////////////////////////////
	int continuar = 1;
	bool win = false;
	char turn = 'O';
	int coordx;
	int coordy;
	
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			t[i][j] = " _ ";	
		}		
	}
	cout << "Bienvenido a X0" << endl;
	
	do
	{
	cout<<"\n     ###### X0 ####### \n"<<endl;
	cout << "	 			 0	   	 1 		 2 " << endl;
	cout << "			_________________________________________________" << endl;
	for(int i = 0; i < 3; i++)
	{
		cout << "   			|  ";
		for(int j = 0; j < 3; j++)
		{
			cout << "	" << t[i][j]<< "	";	
		}
		cout << "|  " << i << endl;
		cout << "   			|                                               |" << endl;	
	}
	cout << "			-------------------------------------------------  Y" << endl;
	/////////////////////////////////////////////
	
	turn = changeT(turn);//cambio de turnos 
	//señala de quien es el turno 
	cout << "turno del jugador " << turn << ": " << endl;
	do
	{
	//cordenadas x
	cout << "Ingrese la coordenada x: ";
	cin >> coordx;
	coordx = cl(coordx);
	}while(coordx < 0 || coordx > 2);
	
	do
	{
	//cordenadas y
	cout << "Ingrese la coordenada y: ";
	cin >> coordy;
	coordy = cl(coordy);
	}while(coordy < 0 || coordy > 2);
	
	//verificacion si esta ocupado 
	if(turn == 'X')
	{
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			if(i == coordy && j == coordx)
			{
				if(t[i][j] != " _ ")
				{
					//mensaje de cordenada no valida 
				cout << "Intente otra coordenada" << endl;
				system("pause");
				turn = 'O';
				}
				else
				{
				t[i][j] = " X ";
				}
			}	
		}
	}
	}
	else if(turn == 'O')
	{
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			if(i == coordy && j == coordx)
			{
				if(t[i][j] != " _ ")
				{
				//mensajes de cansillas ocupadas
				cout << "Esa casilla ya esta ocupada" << endl;
				system("pause");
				turn = 'X';
				}
				else
				{
				t[i][j] = " O ";
				}	
			}	
		}
	}
	}
	//decidir al ganador 
for(int i = 0; i < 3; i++)
{
	for(int j = 0; j < 3; j++)
	{
	
	if(t[i][0] ==  t[i][1] && t[i][0] == t[i][2] 
		&& t[i][0] != " _ " && t[i][1] != " _ " && t[i][2] != " _ ")
	{
		win = true;
		ganar(turn);
		
	}
	else if(t[0][i] ==  t[1][i] && t[0][i] == t[2][i] 
		&& t[0][i] != " _ " && t[1][i] != " _ " && t[2][i] != " _ ")
	{
		win = true;
		ganar(turn);
	}
	
	else if( (t[0][0] ==  t[1][1] && t[0][0] == t[2][2] && t[0][0] != " _ ")
				|| (t[0][2] == t[1][1] && t[0][2] == t[2][0] && t[0][2] != " _ ") )
	{
		win = true;
		ganar(turn);
	}
	}
}
//limpia la pantalla
l();
			
}while(win == false);}		
//funcion nula 
void l()
{
	system("cls");
}
//funcion de limpieza 
int cl(int clear)
{
	if (cin.fail())
    	{
			cin.clear(); // limpia la variable
        	cin.ignore(); // borra espacios y caracteres
        	cout << "Ingrese un numero valido." << endl;
        	system("pause"); // pausa el programa
        	clear = -1;
    	}
    return clear;//fin de la funcion 
}
//funcion para el cambio turno 
char changeT(char turn)
{
	if (turn=='X')
	{turn = 'O';}
	else {turn='X';}
	return turn;
}

char ganar(char turn)
//Da el ganador si es el jugador de X o el de 0 
{
	l();
			cout<<"\n      #--#--#--# X0 #--#--#--# \n"<<endl;
			cout << "	 			 0	   	 1 		 2 " << endl;
			cout << "			_________________________________________________" << endl;
			for(int i = 0; i < 3; i++)
			{
				cout << "   			||  ";
				for(int j = 0; j < 3; j++)
			{
				cout << "	" << t[i][j]<< "	";	
			}
				cout << "||  " << i << endl;
				cout << "   			||                                               ||" << endl;	
			}
				cout << "			-------------------------------------------------  Y" << endl;
		
		cout << "El jugador " << turn << " gana." << endl;		
		
		system("pause");
}

