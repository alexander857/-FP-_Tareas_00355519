#include <iostream>
using namespace std;
int main(){
	int n,factorial=1;
	cout<<"Ingrese el numero para calcular su factorial"<<endl;
	cin>>n;
	for(int i=1;i<=n;i++){
		factorial *= i;
	}
	
	cout<<"El factorial de tu numero es: "<<factorial<<endl;
	
	
	
	
	return 0;
}
