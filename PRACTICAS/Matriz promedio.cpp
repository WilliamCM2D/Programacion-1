//
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
	
	
	int main(){
		float suma;
		srand(time(NULL));
		int matriz[2][2];
		for(int i=0;i<2;i++){
			for (int j=0;j<2;j++){
				matriz[i][j]=rand()%101;
				
				suma = suma + matriz[i][j];
				cout<<matriz[i][j]<<" ";
			}
			cout<<endl;
	}
		cout<<"el promedio es:"<<suma/4<<endl;
		return 0;
	}
