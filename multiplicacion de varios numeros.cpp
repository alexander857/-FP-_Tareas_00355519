#include<iostream>
using namespace std;

int main(){
	int n,m,producto=1;
	cout<<"Ingrese la cantidad de numeros a multiplicar"<<endl;
	cin>>n;
	
	for(int i=1;i<=n;i++){
		cout<<"Ingrese el valor "<<i<<endl;
		cin>>m;
		producto*=m;
	}
	
	
	cout<<"El producto de los digitos ingresados es: "<<producto<<endl;
	
	
	return 0;
}
