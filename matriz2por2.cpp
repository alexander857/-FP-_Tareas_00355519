#include<iostream>

using namespace std;

int main(){
	int matriz[2][2];
	
	cout<<"Ingrese numeros enteros "<<endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
		
			cin>>matriz[i][j];
		}
	}
	
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout<<matriz[i][j];
	}
	cout<<"\n";
}


	return 0;
}
