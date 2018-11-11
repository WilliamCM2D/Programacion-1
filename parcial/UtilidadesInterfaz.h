////////////////////////////////////////////
// Definición Bibliotecas y definiciones
//	q' utilizaremos en el código
///////////////////////////////////////////
#include <windows.h>
#include <conio.h>
//Definiciones de teclas
#define ARR 72//Valor ASCII para tecla flecha arriba.
#define ABJ 80//Valor ASCII para tecla flecha abajo.
#define DER 77//Valor ASCII para tecla flecha Derecha.
#define IZQ 75//Valor ASCII para tecla flecha Izquierda.
#define ENT 13//Valor ASCII para tecla Enter.
#define ESC 27//Valor ASCII para tecla Esc.

//Definiciones de configuración pantalla Salir
#define LIN_HOR_SALIR      205//Lineas Horizontales 
#define LIN_VER_SALIR      186//Lineas Vericales
#define ESQ_SUP_DER_SALIR  201//Esquina superior Derecha
#define ESQ_SUP_IZQ_SALIR  200//Esquina superior Izquierda
#define ESQ_INF_DER_SALIR  187//Esquina inferior Derecha
#define ESQ_INF_IZQ_SALIR  188//Esquina inferior Izquierda
#define COLOR_CAJA_SALIR   0x47//Color de la caja de la pantalla salir. 
#define OPC_SELEC_SALIR    0x4E//Color de la opción seleccionada en la pantalla salir.

////////////////////////////////////////////
//			Clase UtilidadesInterfaz
//Donde se implementara la lógica 
//necesaria para crear una interfaz con flechas.
///////////////////////////////////////////
class UtilidadesInterfaz{
protected:
	//Funcion para capturar la tacla digitada omitiendo el el Enter.
	int GetKey() {
		int Tecla=getch();
		if(Tecla==0xE0 || Tecla==0)
			Tecla=getch();
		return Tecla;
	}

	 //Método  para Establecer los Colores recibe un numero de 2 digitos
	//el primer digito estabece el color del background de la consola.
	//el segundo numero establece el color de la letra de la consola.
	void setColor(unsigned short color){
		//Funcion para cambiar el color de la consola
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color);
	}

	//Método  que me posiciona el foco de cursor de la consola dadas 2 coordenadas.
	void gotoxy(int x,int y){
		//Variable Coordenada que guarda las coordenadas donde voy a imprimir.
		COORD conCord;
		conCord.X=x;
		conCord.Y=y;
		//Método  posiciona el foco de cursor de la consola según  coordenadas especificadas.
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),conCord); 
	}

	//Método  para cambiar propiedades del cursor.
	void ocultaCursor(){
		//Variable para controlar atributos del cursor;
		CONSOLE_CURSOR_INFO myCursor;
		myCursor.dwSize = 25;
		myCursor.bVisible = FALSE;
		//Funcion para cambiar propiedades del cursor de la consola.
		SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE),&myCursor);
	}

	//Función que confirma la desición del Usuario de salir del programa.
	bool Salir(){
		system("color 0F");
		system("CLS");
		setColor(COLOR_CAJA_SALIR);
		//Dibujo las lineas horizontales de la caja.
		for(int i=19;i<59;i++){
			gotoxy(i,15);printf("%c",LIN_HOR_SALIR);
			gotoxy(i,5);printf("%c",LIN_HOR_SALIR);
		}

		//Dibujo las lineas verticales de la caja.
		for(int i=6;i<15;i++){
			gotoxy(18,i);printf("%c",LIN_VER_SALIR);
			gotoxy(59,i);printf("%c",LIN_VER_SALIR);
		}

		//Dibujo las esquinas de la caja
		gotoxy(18,5);printf("%c",ESQ_SUP_DER_SALIR);
		gotoxy(18,15);printf("%c",ESQ_SUP_IZQ_SALIR);
		gotoxy(59,5);printf("%c",ESQ_INF_DER_SALIR);
		gotoxy(59,15);printf("%c",ESQ_INF_IZQ_SALIR);

		//Dibujo el titulo de la caja.
		gotoxy(19,6); 
		printf("                                        \n");
		gotoxy(19,7); 
		printf(" Desea salir por completo del programa? \n");
		gotoxy(19,8); 
		printf("                                        \n");

		//Dibujo las opciones a esocger en la caja.
		int tecla = 0;//Tecla presionada, inicializada en 0 para primer caso.
		bool Opcion =true;//Variable que almacena el número de opción en el q se encuentra el Usuario.
		while(true){
			gotoxy(32,12);
			//Dibujamos las opciones a seleccionar
			setColor(COLOR_CAJA_SALIR);
			if(Opcion)
				setColor(OPC_SELEC_SALIR);
			printf("SI");
			gotoxy(42,12);
			setColor(COLOR_CAJA_SALIR);
			if(!Opcion)
				setColor(OPC_SELEC_SALIR);
			printf("NO");
			tecla=GetKey();//Leemos la tecla digitada.
			//En caso que la tecla digitada sea alguna de las aceptadas como acciones en el menú
			if(tecla==DER||tecla==IZQ||tecla==ENT){
				switch(tecla){
					case DER:Opcion=false;break;
					case IZQ:Opcion=true;break;
					case ENT:system("color 0F");system("CLS");return Opcion;
				}
			}
			Sleep(100);//Dormimos el proceso por 100 milisegundos.(Recomendable para liberar procesador)
		}
	}

	//Método para dibujar la portada inicial del Programa.
	void Portada(){
	//Dibujo las lineas horizontales de la caja para la portada
	for(int i=2;i<78;i++){
		if(i>9 && i<69){
			setColor(0x0A);
			gotoxy(i,2);printf("%c",31);
			gotoxy(i,21);printf("%c",30);
		}else{
			setColor(0x0D);
			gotoxy(i,2);printf("%c",205);
			gotoxy(i,21);printf("%c",205);		
		}
	}

	//Dibujo las lineas verticales de la caja para la portada
	for(int i=3;i<22;i++){
		if(i>4&&i<18){
			setColor(0x0A);
			gotoxy(2,i);printf("%c",16);
			gotoxy(77,i);printf("%c",17);
		}
		else{
			setColor(0x0D);
			gotoxy(2,i);printf("%c",186);
			gotoxy(77,i);printf("%c",186);
		}
	}

	//Dibujo las esquinas de la caja para la portada
	gotoxy(2,2);printf("%c",201);
	gotoxy(2,21);printf("%c",200);
	gotoxy(77,2);printf("%c",187);
	gotoxy(77,21);printf("%c",188);
	//Dibujo creditos de la Portada.
	setColor(0x0E);
	gotoxy(27,8);printf("Bienvenido ");
	gotoxy(25,12);printf(" Empresas Interprises S.A. de C.V. ");
	gotoxy(25,18);printf(" ");
	setColor(0x0F);
	printf("\n");
	gotoxy(20,23);system("PAUSE");
}

};
