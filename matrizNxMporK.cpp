#include <iostream>
using namespace std;

int main(){
	int numeros[5][5], filas, columnas,k;
	
	cout<<"Numero de filas: "; cin>>filas;
	cout<<"Numero de columnas: ";cin>>columnas;
	cout<<"Ingrese un entero: ";cin>>k;
	
	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<"Digite un numero: ["<<i<<"]["<<j<<"]";
			cin>>numeros[i][j];
		}
	}
	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			numeros[i][j]*k;
		}
	}
	
	cout<<"Matriz: "<<endl;
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<numeros[i][j]<<" ";			
		}
		cout<<"\n";
	}
	
	cout<<"Producto: "<<endl;
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<numeros[i][j]*k<<" ";
		}
		cout<<"\n";
	}
	
	
	
	return 0;
}
