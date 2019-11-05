#include<iostream>
using namespace std;

int main(){
	float c, suma=0, prom;
	
	cout<<"Ingrese cantidad de numeros a guardar "<<endl;
	cin>>c;
	
	int cantNumeros = c;
	float numeros[cantNumeros];  //declaracion
	
	for(int i=0; i< cantNumeros; i++){   //i viene de index
	//	numeros[i] = i+1;
	cout<<"Ingrese el dato "<<(i+1)<<endl;
	cin>>numeros[i];
	}
	//mostrar lo que tiene el areglo
	cout<<"Los numeros ingresados son: "<<endl;
	for (int i=0; i<cantNumeros; i++){		
	cout<<numeros[i]<<endl;	
	}
	cout<<"El promedio de los datos es: "<<endl;
	for (int i=0; i<cantNumeros; i++){
	suma=numeros[i]+suma;		
	}
	prom = suma/c;
	cout<<prom<<endl;
	
	return 0;
}
