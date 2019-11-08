#include<iostream>

using namespace std;

int main(){
	int k, X[5], Y[5];
	
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
	
	
	return 0;
}
