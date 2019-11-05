#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"FACEBOOK"<<endl;
	cout<<"1"<<endl;
	cout<<"2"<<endl;
	cout<<"3"<<endl;
	cout<<"4"<<endl;
	cout<<"5"<<endl;
	cin>>n;
	
	switch(n){
		case 1: cout<<"Error de credenciales"<<endl;
		break;
		case 2: cout<<"Error de credenciales"<<endl;
		break;
		case 3: cout<<"Error de credenciales"<<endl;
		break;
		case 4: cout<<"Su conexion no es la adecuada"<<endl;
		break;
		case 5: cout<<"Su cuenta no existe"<<endl;
		break;
		default: cout<<"El numero ingresado no existe"<<endl;
		}
	
	
	return 0;
}
