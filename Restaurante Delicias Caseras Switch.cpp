#include<iostream>
using namespace std;

int main(){
	int m, n, p, o;
	
	cout<<"BIENVENIDO AL RESTAURANTE DELICIAS CASERAS"<<endl;
	cout<<"QUE DESEA?"<<endl;
	cout<<"1 Desayunos"<<endl;
	cout<<"2 Almuerzos"<<endl;
	cout<<"3 Cenas"<<endl;
	cout<<"4 Postres"<<endl;
	cout<<"5 Antojos"<<endl;
	cout<<"6 Salir"<<endl;
	
	cin>>m;

	switch(m){
		case 1:
			cout<<"QUE DESEA DE DESAYUNO?"<<endl; //lo que va a querer de desayuno
			cout<<"1 Huevos estrellados"<<endl;
			cout<<"2 Platano frito"<<endl;
			cin>>n;
			switch(n){
				case 1: 
				cout<<"ELIJA SU BEBIDA"<<endl; //elija su bebida si fue huevos
			    cout<<"1 Cafe"<<endl;
			    cout<<"2 Leche"<<endl;
			    cin>>p;
			    switch(p){
			    	case 1:
			    		cout<<"Su desayudo es Huevos estrellado y cafe $3.50"<<endl;
			    		cout<<"Esta de acuerdo con su orden? 1 SI 2 CANCELAR"<<endl;
			    		cin>>o;
			    		switch(o){
			    			case 1: cout<<"Gracias por comprar en Restaurante Delicias Caseras!"<<endl;
			    			break;
			    			case 2: cout<<"Ok. Le esperamos pronto!"<<endl;
			    			break;
						}
			    		break;
			    	case 2:
						cout<<"Su desayudo es Huevos estrellado y leche $3.75"<<endl;
						cout<<"Esta de acuerdo con su orden? 1 SI 2 CANCELAR"<<endl;
						cin>>o;
			    		switch(o){
			    			case 1: cout<<"Gracias por comprar en Restaurante Delicias Caseras!"<<endl;
			    			break;
			    			case 2: cout<<"Ok. Le esperamos pronto!"<<endl;
			    			break;
						}
						break;
						default: cout<<"El valor que ha ingresado es invalido"<<endl;
		cin.ignore();
					
				}
			    break;
			    case 2:
			    cout<<"ELIJA SU BEBIDA"<<endl; // si fue platano frito elija su bebida
			    cout<<"1 Cafe"<<endl;
			    cout<<"2 Leche"<<endl;
			    cin>>p;
			    switch(p){
			    	case 1:
			    		cout<<"Su desayudo es Platano frito y cafe $2.50"<<endl;
			    		cout<<"Esta de acuerdo con su orden? 1 SI 2 CANCELAR"<<endl;
			    		cin>>o;
			    		switch(o){
			    			case 1: cout<<"Gracias por comprar en Restaurante Delicias Caseras!"<<endl;
			    			break;
			    			case 2: cout<<"Ok. Le esperamos pronto!"<<endl;
			    			break;
						}
			    		break;
			    	case 2:
						cout<<"Su desayudo es Platano frito y leche $2.75"<<endl;
						cout<<"Esta de acuerdo con su orden? 1 SI 2 CANCELAR"<<endl;
						cin>>o;
			    		switch(o){
			    			case 1: cout<<"Gracias por comprar en Restaurante Delicias Caseras!"<<endl;
			    			break;
			    			case 2: cout<<"Ok. Le esperamos pronto!"<<endl;
			    			break;
						}
						break;
						default: cout<<"El valor que ha ingresado es invalido"<<endl;
		cin.ignore();
				}
			    break;
			    default: cout<<"El valor que ha ingresado es invalido"<<endl;
		cin.ignore();
			}
		break;	
		case 2:
			cout<<"QUE DESEA ALMORZAR?"<<endl;  //que quiere almorzar
			cout<<"1 Pollo empanisado"<<endl;
			cout<<"2 Carne asada"<<endl;
			cin>>n;
			switch(n){
				case 1: 
				cout<<"ELIJA SU BEBIDA"<<endl; //elejir bebida si fue pollo
			    cout<<"1 Refresco"<<endl;
			    cout<<"2 Cocacola"<<endl;
			    cin>>p;
			    switch(p){
			    	case 1:
			    		cout<<"Su Almuerzo es Pollo empanizado y Refresco $3.90"<<endl;
			    		cout<<"Esta de acuerdo con su orden? 1 SI 2 CANCELAR"<<endl;
			    		cin>>o;
			    		switch(o){
			    			case 1: cout<<"Gracias por comprar en Restaurante Delicias Caseras!"<<endl;
			    			break;
			    			case 2: cout<<"Ok. Le esperamos pronto!"<<endl;
			    			break;
						}
			    		break;
			    	case 2:
						cout<<"Su Almuerzo es Pollo empanizado y Cocacola $4.05"<<endl;
						cout<<"Esta de acuerdo con su orden? 1 SI 2 CANCELAR"<<endl;
						cin>>o;
			    		switch(o){
			    			case 1: cout<<"Gracias por comprar en Restaurante Delicias Caseras!"<<endl;
			    			break;
			    			case 2: cout<<"Ok. Le esperamos pronto!"<<endl;
			    			break;
						}
						break;
						default: cout<<"El valor que ha ingresado es invalido"<<endl;
		cin.ignore();
				}
			    break;
			    case 2:
			    cout<<"ELIJA SU BEBIDA"<<endl;  //elejir bebida si fue carne
			    cout<<"1 Refresco"<<endl;
			    cout<<"2 Cocacola"<<endl;
			    cin>>p;
			    switch(p){
			    	case 1:
			    		cout<<"Su Almuerzo es Carne asada y Refresco $3.80"<<endl;
			    		cout<<"Esta de acuerdo con su orden? 1 SI 2 CANCELAR"<<endl;
			    		cin>>o;
			    		switch(o){
			    			case 1: cout<<"Gracias por comprar en Restaurante Delicias Caseras!"<<endl;
			    			break;
			    			case 2: cout<<"Ok. Le esperamos pronto!"<<endl;
			    			break;
						}
			    		break;
			    	case 2:
						cout<<"Su Almuerzo es Carne asada y Cocacola $4.00"<<endl;
						cout<<"Esta de acuerdo con su orden? 1 SI 2 CANCELAR"<<endl;
						cin>>o;
			    		switch(o){
			    			case 1: cout<<"Gracias por comprar en Restaurante Delicias Caseras!"<<endl;
			    			break;
			    			case 2: cout<<"Ok. Le esperamos pronto!"<<endl;
			    			break;
						}
						break;
						default: cout<<"El valor que ha ingresado es invalido"<<endl;
		cin.ignore();
				}
			    break;
				default: cout<<"El valor que ha ingresado es invalido"<<endl;
		cin.ignore();	}
		break;	
		case 3:
			cout<<"QUE DESEA CENAR?"<<endl; //que desea cenar
			cout<<"1 Pupusas"<<endl;
			cout<<"2 Carne asada"<<endl;
			cin>>n;
			switch(n){
				case 1: 
				cout<<"ELIJA SU BEBIDA"<<endl; //elejir bebida si fue pupusas
			    cout<<"1 Cafe"<<endl;
			    cout<<"2 Refresco"<<endl;
			    cin>>p;
			    switch(p){
			    	case 1:
			    		cout<<"Su Cena es Pupusas y Cafe"<<endl;
			    		cout<<"Esta de acuerdo con su orden? 1 SI 2 CANCELAR"<<endl;
			    		cin>>o;
			    		switch(o){
			    			case 1: cout<<"Gracias por comprar en Restaurante Delicias Caseras!"<<endl;
			    			break;
			    			case 2: cout<<"Ok. Le esperamos pronto!"<<endl;
			    			break;
						}
			    		break;
			    	case 2:
						cout<<"Su Cena es Pupusas y Refresco"<<endl;
						cout<<"Esta de acuerdo con su orden? 1 SI 2 CANCELAR"<<endl;
						cin>>o;
			    		switch(o){
			    			case 1: cout<<"Gracias por comprar en Restaurante Delicias Caseras!"<<endl;
			    			break;
			    			case 2: cout<<"Ok. Le esperamos pronto!"<<endl;
			    			break;
						}
						break;
						default: cout<<"El valor que ha ingresado es invalido"<<endl;
		cin.ignore();
				}
			    break;
			    case 2:
			    cout<<"ELIJA SU BEBIDA"<<endl; //elejir bebida si fue carne
			    cout<<"1 Refresco"<<endl;
			    cout<<"2 Cafe"<<endl;
			    cin>>p;
			    switch(p){
			    	case 1:
			    		cout<<"Su Cena es Carne asada y Refresco $3.80"<<endl;
			    		cout<<"Esta de acuerdo con su orden? 1 SI 2 CANCELAR"<<endl;
			    		cin>>o;
			    		switch(o){
			    			case 1: cout<<"Gracias por comprar en Restaurante Delicias Caseras!"<<endl;
			    			break;
			    			case 2: cout<<"Ok. Le esperamos pronto!"<<endl;
			    			break;
						}
			    		break;
			    	case 2:
						cout<<"Su Cena es Carne asada y Cafe $4.00"<<endl;
						cout<<"Esta de acuerdo con su orden? 1 SI 2 CANCELAR"<<endl;
						cin>>o;
			    		switch(o){
			    			case 1: cout<<"Gracias por comprar en Restaurante Delicias Caseras!"<<endl;
			    			break;
			    			case 2: cout<<"Ok. Le esperamos pronto!"<<endl;
			    			break;
						}
						break;
						default: cout<<"El valor que ha ingresado es invalido"<<endl;
		cin.ignore();
				}
			    break;
				default: cout<<"El valor que ha ingresado es invalido"<<endl;
		cin.ignore();	}
		break;
		case 4:
			cout<<"QUE DESEA DE POSTRE?"<<endl; //que desea de postre
			cout<<"1 Pastel"<<endl;
			cout<<"2 Pan dulce"<<endl;
			cin>>n;
			switch(n){
				case 1: 
				cout<<"ELIJA SU BEBIDA"<<endl; //elejir bebida si fue pastel
			    cout<<"1 Cafe"<<endl;
			    cout<<"2 Cafe con leche"<<endl;
			    cin>>p;
			    switch(p){
			    	case 1:
			    		cout<<"Su Postre es Pastel y Cafe $1.80"<<endl;
			    		cout<<"Esta de acuerdo con su orden? 1 SI 2 CANCELAR"<<endl;
			    		cin>>o;
			    		switch(o){
			    			case 1: cout<<"Gracias por comprar en Restaurante Delicias Caseras!"<<endl;
			    			break;
			    			case 2: cout<<"Ok. Le esperamos pronto!"<<endl;
			    			break;
						}
			    		break;
			    	case 2:
						cout<<"Su Postre es Pastel y Cafe con leche $2.00"<<endl;
						cout<<"Esta de acuerdo con su orden? 1 SI 2 CANCELAR"<<endl;
						cin>>o;
			    		switch(o){
			    			case 1: cout<<"Gracias por comprar en Restaurante Delicias Caseras!"<<endl;
			    			break;
			    			case 2: cout<<"Ok. Le esperamos pronto!"<<endl;
			    			break;
						}
						break;
						default: cout<<"El valor que ha ingresado es invalido"<<endl;
		cin.ignore();
				}
			    break;
			    case 2:
			    cout<<"ELIJA SU BEBIDA"<<endl; //elejir bebida si fue pan dulce
			    cout<<"1 Cafe"<<endl;
			    cout<<"2 Cafe con leche"<<endl; 
			    cin>>p;
			    switch(p){
			    	case 1:
			    		cout<<"Su Postre es Pan dulce y Cafe $1.00"<<endl;
			    		cout<<"Esta de acuerdo con su orden? 1 SI 2 CANCELAR"<<endl;
			    		cin>>o;
			    		switch(o){
			    			case 1: cout<<"Gracias por comprar en Restaurante Delicias Caseras!"<<endl;
			    			break;
			    			case 2: cout<<"Ok. Le esperamos pronto!"<<endl;
			    			break;
						}
			    		break;
			    	case 2:
						cout<<"Su Postre es Pan dulce y Cafe con leche $1.50"<<endl;
						cout<<"Esta de acuerdo con su orden? 1 SI 2 CANCELAR"<<endl;
						cin>>o;
			    		switch(o){
			    			case 1: cout<<"Gracias por comprar en Restaurante Delicias Caseras!"<<endl;
			    			break;
			    			case 2: cout<<"Ok. Le esperamos pronto!"<<endl;
			    			break;
						}
						break;
						default: cout<<"El valor que ha ingresado es invalido"<<endl;
		cin.ignore();
				}
			    break;
				default: cout<<"El valor que ha ingresado es invalido"<<endl;
		cin.ignore();}	
		break;
		case 5:
			cout<<"QUE DESEA DE ANTOJO"<<endl;  //que desea de antojo
			cout<<"1 Pastelitos"<<endl;
			cout<<"2 Quesadilla"<<endl;
			cin>>n;
			switch(n){
				case 1: 
				cout<<"ELIJA SU BEBIDA"<<endl; //elejir bebida si fue pastelitos
			    cout<<"1 Cafe"<<endl;
			    cout<<"2 Refresco"<<endl;
			    cin>>p;
			    switch(p){
			    	case 1:
			    		cout<<"Su Antojo es Pastelitos y Cafe $1.80"<<endl;
			    		cout<<"Esta de acuerdo con su orden? 1 SI 2 CANCELAR"<<endl;
			    		cin>>o;
			    		switch(o){
			    			case 1: cout<<"Gracias por comprar en Restaurante Delicias Caseras!"<<endl;
			    			break;
			    			case 2: cout<<"Ok. Le esperamos pronto!"<<endl;
			    			break;
						}
			    		break;
			    	case 2:
						cout<<"Su Antojo es Pastelitos y Refresco $2.00"<<endl;
						cout<<"Esta de acuerdo con su orden? 1 SI 2 CANCELAR"<<endl;
						cin>>o;
			    		switch(o){
			    			case 1: cout<<"Gracias por comprar en Restaurante Delicias Caseras!"<<endl;
			    			break;
			    			case 2: cout<<"Ok. Le esperamos pronto!"<<endl;
			    			break;
						}
						break;
						default: cout<<"El valor que ha ingresado es invalido"<<endl;
		cin.ignore();
				}
			    break;
			    case 2:
			    cout<<"ELIJA SU BEBIDA"<<endl; //elejir bebida si fue Quesadilla
			    cout<<"1 Cafe"<<endl;
			    cout<<"2 Cafe con leche"<<endl;
			    cin>>p;
			    switch(p){
			    	case 1:
			    		cout<<"Su Antojo es Quesadilla y Cafe $2.80"<<endl;
			    		cout<<"Esta de acuerdo con su orden? 1 SI 2 CANCELAR"<<endl;
			    		cin>>o;
			    		switch(o){
			    			case 1: cout<<"Gracias por comprar en Restaurante Delicias Caseras!"<<endl;
			    			break;
			    			case 2: cout<<"Ok. Le esperamos pronto!"<<endl;
			    			break;
						}
			    		break;
			    	case 2:
						cout<<"Su Su antojo es Quesadilla y Refresco $2.00"<<endl;
						cout<<"Esta de acuerdo con su orden? 1 SI 2 CANCELAR"<<endl;
						cin>>o;
			    		switch(o){
			    			case 1: cout<<"Gracias por comprar en Restaurante Delicias Caseras!"<<endl;
			    			break;
			    			case 2: cout<<"Ok. Le esperamos pronto!"<<endl;
			    			break;
						}
						break;
						default: cout<<"El valor que ha ingresado es invalido"<<endl;
		cin.ignore();
				}
			    break;
				default: cout<<"El valor que ha ingresado es invalido"<<endl;
		cin.ignore();}	
		break;	
		case 6:
			cout<<"Adios. Le esperamos pronto!"<<endl;
		break;
		default: cout<<"El valor que ha ingresado es invalido"<<endl;
		cin.ignore();
	}		
	
			
	return 0;
}

