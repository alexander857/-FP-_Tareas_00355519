#include <iostream>
using namespace std;

int main(){
	int numeros[5][5], filas, columnas;
	
	cout<<"Numero de filas: "; cin>>filas;
	cout<<"Numero de columnas: ";cin>>columnas;
	
	//almacenando los datos en la matriz
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<"Digite un numero: ["<<i<<"]["<<j<<"]";
			cin>>numeros[i][j];
		}
	}
	
	//mostrando la matriz
	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<numeros[i][j];
		}
		cout<<"\n";
	}
	
	
	
	return 0;
}
