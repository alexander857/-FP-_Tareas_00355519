#include<iostream>
using namespace std;

int main(){
	int filas, columnas;
	
	cout<<"Ingrese la cantidad de filas: ";cin>>filas;
	cout<<"Ingrese la cantidad de columnas: ";cin>>columnas;
	int matriz[filas][columnas];
	cout<<"Ingrese numeros enteros: "<<endl;
	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cin>>matriz[i][j];				
		}		
	}
	//mostrando matriz
	cout<<"MATRIZ"<<endl;
	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){			
				cout<<matriz[i][j]<<"|  ";												
		}
		cout<<endl;
	}
	//mostrando todos los elementos arriba de la diagonal principal de la mtriz
	cout<<"MATRIZ TRIANGULAR SUPERIOR"<<endl;
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			if(i<=j){
				cout<<matriz[i][j]<<"|  ";		
			}
							
		}
		cout<<endl;
	}
	
	//mostrando elementos debajo de la diagonal principal
	cout<<"MATRIZ TRIANGULAR INFERIOR"<<endl;
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			if(j<=i){
				cout<<matriz[i][j]<<"|  ";		
			}
							
		}
		cout<<endl;
	}
	
	
	
	
	return 0;
}
