#include<iostream>
using namespace std;

int main(){
	int n,m, suma=0;
	cout<<"Ingrese la cantidad de valores a sumar: "<<endl;
	cin>>n;
	
	for(int i=1;i<=n;i++){
		cout<<"Ingrese digito "<<i<<endl;
		cin>>m;
		
		suma += m;
	}
	
	
	
	cout<<"La suma de los digitos ingresados es: "<<suma<<endl;
	
	
	return 0;
}
