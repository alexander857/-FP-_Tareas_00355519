#include<iostream>

using namespace std;

int main(){
	int k;
	float X[5], Y[5], suma=0, suma1=0, prom=0;
	
	cout<<"Ingrese un entero: ";cin>>k;
	cout<<"\n";
	cout<<"Ingrese datos para X"<<endl;
	for(int i=0;i<k;i++){
		cout<<"Dato "<<i+1<<" de X: ";cin>>X[i];
	}
	cout<<"\n";
	cout<<"Ingrese datos para Y"<<endl;
	cout<<"\n";
	for (int j=0;j<k;j++){
		cout<<"Dato "<<j+1<<" de Y: ";cin>>Y[j];
	}
	
	//promedio ponderado
	for(int i=0;i<k;i++){
		for(int j=0;j<k;j++){
			suma=suma+X[i]*Y[j];
			suma1=suma1+Y[j];	
		}
	}
	
	prom = suma/suma1;
	
	cout<<"\n";
	cout<<"Arreglo de X:"<<endl;
	for(int i=0;i<k;i++){
		cout<<X[i]<<" ";
	}
	cout<<"\n";
	cout<<"Arreglo de Y:"<<endl;
	
	for (int j=0;j<k;j++){
		cout<<Y[j]<<" ";
	}
	
	cout<<"\n";
	cout<<"El promedio ponderado es: "<<prom<<endl;
	
	return 0;
}
