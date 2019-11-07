#include<iostream>

using namespace std;

int menu();
int menu2();
int desayuno();
int almuerzo();
int cena();
int bebidas();
int postres();

int main(){
	int op, i=0, j=0, desa=0, almu=0, cen=0, be=0, po=0;
	
	while(i<=4){
		i=menu();
		system("cls");
		if(i==1){

			while(j<4){
				j=menu2();
				system("cls");
				if(j==1){
					
					desa=desayuno();
					system("cls");
					break;
				}
				else if(j==2){
					
					almu=almuerzo();
					system("cls");
					break;
				}
				else if(j==3){
					
					cen=cena();
					system("cls");
					break;
				}
				else if(j==4){
					break;
				}
				
			}	
				
		}
		else if(i==2){
		
			be=bebidas();
			system("cls");
			
		}
		else if(i==3){
		
			po=postres();
			system("cls");
			
		}
		else if(i==4){
			//para los desayunos
			if(desa==1 && be==1 && po ==1){
				cout<<"Su orden: Huevos estrellados, una cocacola y un pastel. $5.00"<<endl;
				break;
			}
			else if(desa==1 && be==1 && po==2){
				cout<<"Su orden: Huevos estrellados, una cocacola y un flan. $4.00"<<endl;
				break;
			}
			else if(desa==1 && be==2 && po==1){
				cout<<"Su orden: Huevos estrellados, un cafe y un pastel. $5.00"<<endl;
				break;
			}
			else if(desa==1 && be==2 && po==2){
				cout<<"Su orden: Huevos estrellados, un cafe y un flan. $4.00"<<endl;
				break;
			}
			else if(desa==2 && be==1 && po==1){
				cout<<"Su orden: Platano frito, una cocacola y un pastel. $5.00"<<endl;
				break;
			}
			else if(desa==2 && be==1 && po==2){
				cout<<"Su orden: Platano frito, una cocacola y un flan. $4.00"<<endl;
				break;
			}
			else if(desa==2 && be==2 && po==1){
				cout<<"Su orden: Platano frito, un cafe y un pastel. $5.00"<<endl;
				break;
			}
			else if(desa==2 && be==2 && po==2){
				cout<<"Su orden: Platano frito, un cafe y un flan. $4.00"<<endl;
				break;
			}
			//para los almuerzos
			else if(almu==1 && be==1 && po==1){
				cout<<"Su orden: Carne asada, una cocacola y un pastel. $7.00"<<endl;
				break;
			}
			else if(almu==1 && be==1 && po==2){
				cout<<"Su orden: Carne asada, una cocacola y un flan. $6.00"<<endl;
				break;
			}
			else if(almu==1 && be==2 && po==1){
				cout<<"Su orden: Carne asada, un cafe y un pastel. $7.00"<<endl;
				break;
			}
			else if(almu==1 && be==2 && po==2){
				cout<<"Su orden: Carne asada, un cafe y un flan. $7.00"<<endl;
				break;
			}
			else if(almu==2 && be==1 && po==1){
				cout<<"Su orden: Pollo frito, una cocacola y un pastel. $7.00"<<endl;
				break;
			}
			else if(almu==2 && be==1 && po==2){
				cout<<"Su orden: Pollo frito, una cocacola y un flan. $7.00"<<endl;
				break;
			}
			else if(almu==2 && be==2 && po==1){
				cout<<"Su orden: Pollo frito, un cafe y un pastel. $6.00"<<endl;
				break;
			}
			else if(almu==2 && be==2 && po==2){
				cout<<"Su orden: Pollo frito, un cafe y un flan. $7.00"<<endl;
				break;
			}
			//para la cena
			else if(cen==1 && be==1 && po==1){
				cout<<"Su orden: Sopa de res, una cocacola y un pastel. $7.00"<<endl;
				break;
			}
			else if(cen==1 && be==1 && po==2){
				cout<<"Su orden: Sopa de res, una cocacola y un flan. $7.00"<<endl;
				break;
			}
			else if(cen==1 && be==2 && po==1){
				cout<<"Su orden: Sopa de res, un cafe y un pastel. $6.00"<<endl;
				break;
			}
			else if(cen==1 && be==2 && po==2){
				cout<<"Su orden: Sopa de res, un cafe y un flan. $7.00"<<endl;
				break;
			}
			else if(cen==2 && be==1 && po==1){
				cout<<"Su orden: Carne asada, una cocacola y un pastel. $7.00"<<endl;
				break;
			}
			else if(cen==2 && be==1 && po==2){
				cout<<"Su orden: Sopa de res, una cocacola y un flan. $6.00"<<endl;
				break;
			}
			else if(cen==2 && be==2 && po==1){
				cout<<"Su orden: Sopa de res, un cafe y un pastel. $6.00"<<endl;
				break;
			}
			else if(cen==2 && be==2 && po==2){
				cout<<"Su orden: Sopa de res, un cafe y un flan. $6.00"<<endl;
				break;
			}
			else{
				break;
			}
						
				
		}
		else{
			cout<<"Opcion no disponible"<<endl;
		}
	}
		
	
	return 0;
}

int menu(){
	int op;
	cout<<"BIENVENIDO AL RESTAURANTE DELICIAS CASERAS"<<endl;
	cout<<endl;
	cout<<"1-Que va a comer?\n2-Bebidas\n3-Postres\n4-Orden y total a pagar"<<endl;
	
	cout<<"Opcion: ";cin>>op;
	
	return op;
}

int menu2(){
	int opcion;
	cout<<"QUE DESEA?"<<endl;
	cout<<endl;
	cout<<"1 Desayunos"<<endl;
	cout<<"2 Almuerzos"<<endl;
	cout<<"3 Cenas"<<endl;
	cout<<"4 Salir"<<endl;
	cout<<"Opcion: ";cin>>opcion;
	
	return opcion;
}

int desayuno(){
	int opc;
	cout<<"1-Huevos estrellados\n2-Platano frito"<<endl;
	cin>>opc;
	
	return opc;
}

int almuerzo(){
	int alm;
	
	cout<<"1-Carne asada\n2-Pollo frito"<<endl;
	cin>>alm;
	
	return alm;
}

int cena(){
	int c;
	cout<<"1-Sopa de res\n2-Carne asada"<<endl;
	cin>>c;
	
	return c;
}

int bebidas(){
	int b;
	cout<<"1-Cocacola\n2-Cafe"<<endl;
	cin>>b;
	
	return b;
}

int postres(){
	int pos;
	cout<<"1-Pastel de chocolate\n2-Flan"<<endl;
	cin>>pos;
	
	return pos;
}
