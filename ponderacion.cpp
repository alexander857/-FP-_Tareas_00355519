#include<iostream>
using namespace std;

int main(){
	float n, mult=0, prom, ponderaciones, suma=0;
	
	cout<<"Ingrese cantidad de notas a ingresar "<<endl;
	cin>>n;
	
	int cantNotas = n;
	int ponderacion = n;
	float numeros[cantNotas]; 
	float num[ponderacion];
	
	for(int i=0; i< cantNotas && i<ponderacion; i++){  

	cout<<"Ingrese la nota "<<(i+1)<<endl;
	cin>>numeros[i];
	cout<<"Ingrese la ponderacion "<<(i+1)<<endl;
	cin>>num[i];
	
	ponderaciones = numeros[i]*num[i];
	suma = suma+ponderaciones;
	prom = suma;
	
	}
	cout<<"Su promedio final es: "<<prom<<endl;
	
/*	cout<<"Ponderaciones en el orden que ingreso sus notas: "<<endl;
	
	int numponderaciones = n;
	float num[numponderaciones]; 
	
	for(int a=0; a< numponderaciones; a++){  

	cout<<"Ingrese la ponderacion "<<(a+1)<<endl;
	cin>>num[a];
	}

	cout<<"Sus notas ingresadas son: "<<endl;
	for (int i=0; i<cantNotas; i++){		
	cout<<numeros[i]<<endl;	
	}
	
	cout<<"Sus ponderaciones ingresadas son: "<<endl;
	for (int a=0; a<numponderaciones; a++){		
	cout<<num[a]<<endl;	
	}
	
	for(int i=0;i<cantNotas;i++){
		for (int a=0;a<numponderaciones;a++){
		cout<<numeros[i]*num[a]<<endl;	
		}
		
}
*/	
	
	return 0;
}
