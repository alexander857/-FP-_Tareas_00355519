#include<iostream>

using namespace std;

int main(){
	int n, filas, columnas, opcion;
	float suma, prom, matriz[20][20];
	
	//dimensiones de la matriz
	cout<<"Ingres el numero de filas: "; cin>>filas;
	cout<<"Ingrese el numero de columnas: ";cin>>columnas;
	
	//llenando la matriz con las notas de los estudiantes
	cout<<"Ingrese valores a la matriz"<<endl;
	
	for(int i=1;i<=filas;i++){
		for(int j=1;j<=columnas;j++){
			cout<<"Ingrese nota "<<j<<" del estudiante ("<<i<<"): ";
			cin>>matriz[i][j];
		}		
	}
	
	//mostrando la matriz en pantalla
	for(int i=1;i<=filas;i++){
		for(int j=1;j<=columnas;j++){
			
			cout<<matriz[i][j]<<" |";
		}
		cout<<endl;		
	}
	
	//sacando el promedio de todos los estudiantes
	
		suma=0;
		for(int i=1;i<=filas;i++){
			for(int j=1;j<=columnas;j++){
				suma = suma+matriz[i][j];  //sumando cada uno de los valores de la matriz
			}
		}
		
		prom = suma/filas; //se divide entre las filas ya que representan el numero de estudiantes
		

		cout<<"Promedio de los estudiantes: "<<prom<<endl; //imprimiendo el promedio final
	
	//mostrando nuevamente la matriz
	for(int i=1;i<=filas;i++){
		for(int j=1;j<=columnas;j++){
			
			cout<<matriz[i][j]<<" |";
		}
		cout<<endl;		
	}
	
	cout<<"Desea promediar la nota de un estudiante en especifico?"<<endl;
	cout<<"1-Si 2-No"<<endl;
	cin>>opcion;  //pidiento la fila
	
	while(opcion<=2){
	
		if (opcion==1){
			cout<<"Ingrese la fila perteneciente al estudiante que desea: ";cin>>n;
			if (n>=1 && n<=filas){  //la fila que se elija tiene que estar entre la fila 0 hasta la elegida por el usuario
				suma=0;  //variable para almacenar la suma de los datos de esa fila
				for(int j=1;j<=columnas;j++){
					suma = suma+matriz[n][j];	 //introduciento la suma de esa fila en suma		
				}
				prom = suma/columnas; //el promedio hoy es entre columnas ya que representas el numero de notas
				cout<<"El promedio del estudiante elegido es: "<<prom<<endl;
			}
			else{
				cout<<"El dato ingresado no esta en la matriz"<<endl;
			}
			
			//mostrando nuevamente la matriz
			for(int i=1;i<=filas;i++){
				for(int j=1;j<=columnas;j++){
			
					cout<<matriz[i][j]<<" |";
				}
				cout<<endl;		
			}
		cout<<"Desea promediar la nota de un estudiante en especifico?"<<endl;
		cout<<"1-Si 2-No"<<endl;
		cin>>opcion;  //pidiento la fila
		}
		
		
		else{
			cout<<"Bueno, hasta luego!!"<<endl;
			break;
		}
		
}
	return 0;
}






