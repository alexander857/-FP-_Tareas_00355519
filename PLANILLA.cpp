#include<iostream>
#include<math.h>
using namespace std;

float FuncionMensual(){   //destro de esta funcion estan los procesos para calcular los descuentos mensuales
	float sueldo, isss, afp, prestamo, renta,hex,anticipo,h;  //declaramos variables tipo float por los decimales
	char name[30];
	cout<<"Ingresa tu nombre"<<endl;
	cin>>name;
	cout<<"Ingrese su sueldo"<<endl;
    cin>>sueldo;
    cout<<"Tiene algun prestamo?: "<<endl;
    cin>>prestamo;
    cout<<"Tiene algun anticipo?"<<endl;
    cin>>anticipo;
    cout<<"Tiene horas extras?"<<endl;
    cin>>h;
	
	if(sueldo<=472){
		float sp;
	    hex = h*3;  //aqui se multiplican las horas extras por los $3 a los q se paga la hora
	    sueldo += hex;  //aqui se le suma lo de las horas extras al sueldo para calcularle al total todos los descuentos
		isss = sueldo*0.03;
		afp = sueldo*0.0725;
		sp = ((((sueldo-isss)-afp)-prestamo)-anticipo);  //aqui se le restan todos los descuentos al sueldo
		cout<<"Hola "<< name<<", sus descuentos son los siguientes: "<<endl;
		cout<<"ISSS: $"<<isss<<endl;
		cout<<"AFP: $"<<afp<<endl;
		cout<<"Prestamo: $"<<prestamo<<endl;
		cout<<"Anticipo: $"<<anticipo<<endl;
		cout<<"Horas extras: "<<h<<endl;
		cout<<"Por las Horas extras: $"<<hex<<endl;
		cout<<"Sueldo a pagar: $"<<sp<<endl;
	}
	else if(sueldo<=895.24){
		float sp, renta;
		hex = h*3;
	    sueldo += hex;
		isss = sueldo*0.03;
		afp = sueldo*0.0725;
		renta = ((((sueldo-isss)-afp)-472)*0.1)+17.67;
		sp = (((((sueldo-isss)-afp)-renta)-prestamo)-anticipo);
		cout<<"Hola "<< name<<", sus descuentos son los siguientes: "<<endl;
		cout<<"ISSS: $"<<isss<<endl;
		cout<<"AFP: $"<<afp<<endl;
		cout<<"RENTA: $"<<renta<<endl;
		cout<<"Prestamo: $"<<prestamo<<endl;
		cout<<"Anticipo: $"<<anticipo<<endl;
		cout<<"Horas extras: "<<h<<endl;
		cout<<"Por las Horas extras: $"<<hex<<endl;
		cout<<"Sueldo a pagar: $"<<sp<<endl;
	}
	else if(sueldo<=1000){
		float sp, renta;
		hex = h*3;
	    sueldo += hex;
		isss = sueldo*0.03;
		afp = sueldo*0.0725;
		renta = ((((sueldo-isss)-afp)-895.24)*0.2)+60;
		sp = (((((sueldo-isss)-afp)-renta)-prestamo)-anticipo);
		cout<<"Hola "<< name<<", sus descuentos son los siguientes: "<<endl;
		cout<<"ISSS: $"<<isss<<endl;
		cout<<"AFP: $"<<afp<<endl;
		cout<<"RENTA: $"<<renta<<endl;
		cout<<"Prestamo: $"<<prestamo<<endl;
		cout<<"Anticipo: $"<<anticipo<<endl;
		cout<<"Horas extras: "<<h<<endl;
		cout<<"Por las Horas extras: $"<<hex<<endl;
		cout<<"Sueldo a pagar: $"<<sp<<endl;
	}
		else if(sueldo<=2038.10){
			float sp;
			 hex = h*3;
	    sueldo += hex;
		isss = 1000*0.03;
		afp = sueldo*0.0725;
		renta = ((((sueldo-isss)-afp)-895.24)*0.2)+60;
		sp = (((((sueldo-isss)-afp)-renta)-prestamo)-anticipo);
		cout<<"Hola "<< name<<", sus descuentos son los siguientes: "<<endl;
		cout<<"ISSS: $"<<isss<<endl;
		cout<<"AFP: $"<<afp<<endl;
		cout<<"RENTA: $"<<renta<<endl;
		cout<<"Prestamo: $"<<prestamo<<endl;
		cout<<"Anticipo: $"<<anticipo<<endl;
		cout<<"Horas extras: "<<h<<endl;
		cout<<"Por las Horas extras: $"<<hex<<endl;
		cout<<"Sueldo a pagar: $"<<sp<<endl;
}
   	else if(sueldo>=2038.11 && sueldo < 6500){
		float sp, renta;
		 hex = h*3;
	    sueldo += hex;
		isss = 1000*0.03;
		afp = sueldo*0.0725;
		renta = ((((sueldo-isss)-afp)-2038.10)*0.3)+288.57;
		sp = (((((sueldo-isss)-afp)-renta)-prestamo)-anticipo);
		cout<<"Hola "<< name<<", sus descuentos son los siguientes: "<<endl;
		cout<<"ISSS: $"<<isss<<endl;
		cout<<"AFP: $"<<afp<<endl;
		cout<<"RENTA: $"<<renta<<endl;
		cout<<"Prestamo: $"<<prestamo<<endl;
		cout<<"Anticipo: $"<<anticipo<<endl;
		cout<<"Horas extras: "<<h<<endl;
		cout<<"Por las Horas extras: $"<<hex<<endl;
		cout<<"Sueldo a pagar: $"<<sp<<endl;
		
}
	   else if(sueldo>=6500){
	   		float sp, renta;
	   		 hex = h*3;
	    sueldo += hex;
		isss = 1000*0.03;
		afp = 6500*0.0725;
		renta = ((((sueldo-isss)-afp)-2038.10)*0.3)+288.57;
		sp = (((((sueldo-isss)-afp)-renta)-prestamo)-anticipo);
		cout<<"Hola "<< name<<", sus descuentos son los siguientes: "<<endl;
		cout<<"ISSS: $"<<isss<<endl;
		cout<<"AFP: $"<<afp<<endl;
		cout<<"RENTA: $"<<renta<<endl;
		cout<<"Prestamo: $"<<prestamo<<endl;
		cout<<"Anticipo: $"<<anticipo<<endl;
		cout<<"Horas extras: "<<h<<endl;
		cout<<"Por las Horas extras: $"<<hex<<endl;
		cout<<"Sueldo a pagar: $"<<sp<<endl;
	   	
	   }
}



float FuncionQuincenal(){  //dentro de esta funcion estan los procesos para realizar los descuentos quincenales
	float sueldo, isss, afp, prestamo, renta,hex,anticipo,h;
	char name[30];
	cout<<"Ingresa tu nombre"<<endl;
	cin>>name;
	cout<<"Ingrese su sueldo"<<endl;
    cin>>sueldo;
    cout<<"Tiene algun prestamo?: "<<endl;
    cin>>prestamo;
    cout<<"Tiene algun anticipo?"<<endl;
    cin>>anticipo;
    cout<<"Tiene horas extras?"<<endl;
    cin>>h;
	
	if(sueldo<=236){
		float sp;
	    hex = h*3;
	    sueldo += hex;
		isss = sueldo*0.03;
		afp = sueldo*0.0725;
		sp = ((((sueldo-isss)-afp)-prestamo)-anticipo);
		cout<<"Hola "<< name<<", sus descuentos son los siguientes: "<<endl;
		cout<<"ISSS: $"<<isss<<endl;
		cout<<"AFP: $"<<afp<<endl;
		cout<<"Prestamo: $"<<prestamo<<endl;
		cout<<"Anticipo: $"<<anticipo<<endl;
		cout<<"Horas extras: "<<h<<endl;
		cout<<"Por las Horas extras: $"<<hex<<endl;
		cout<<"Sueldo a pagar: $"<<sp<<endl;
	}
	else if(sueldo<=447.62){
		float sp, renta;
		hex = h*3;
	    sueldo += hex;
		isss = sueldo*0.03;
		afp = sueldo*0.0725;
		renta = ((((sueldo-isss)-afp)-236)*0.1)+8.83;
		sp = (((((sueldo-isss)-afp)-renta)-prestamo)-anticipo);
		cout<<"Hola "<< name<<", sus descuentos son los siguientes: "<<endl;
		cout<<"ISSS: $"<<isss<<endl;
		cout<<"AFP: $"<<afp<<endl;
		cout<<"RENTA: $"<<renta<<endl;
		cout<<"Prestamo: $"<<prestamo<<endl;
		cout<<"Anticipo: $"<<anticipo<<endl;
		cout<<"Horas extras: "<<h<<endl;
		cout<<"Por las Horas extras: $"<<hex<<endl;
		cout<<"Sueldo a pagar: $"<<sp<<endl;
	}
	else if(sueldo<=500){
		float sp, renta;
		hex = h*3;
	    sueldo += hex;
		isss = sueldo*0.03;
		afp = sueldo*0.0725;
		renta = ((((sueldo-isss)-afp)-447.62)*0.2)+30;
		sp = (((((sueldo-isss)-afp)-renta)-prestamo)-anticipo);
		cout<<"Hola "<< name<<", sus descuentos son los siguientes: "<<endl;
		cout<<"ISSS: $"<<isss<<endl;
		cout<<"AFP: $"<<afp<<endl;
		cout<<"RENTA: $"<<renta<<endl;
		cout<<"Prestamo: $"<<prestamo<<endl;
		cout<<"Anticipo: $"<<anticipo<<endl;
		cout<<"Horas extras: "<<h<<endl;
		cout<<"Por las Horas extras: $"<<hex<<endl;
		cout<<"Sueldo a pagar: $"<<sp<<endl;
	}
		else if(sueldo<=1019.05){
			float sp;
			 hex = h*3;
	    sueldo += hex;
		isss = 500*0.03;
		afp = sueldo*0.0725;
		renta = ((((sueldo-isss)-afp)-447.62)*0.2)+30;
		sp = (((((sueldo-isss)-afp)-renta)-prestamo)-anticipo);
		cout<<"Hola "<< name<<", sus descuentos son los siguientes: "<<endl;
		cout<<"ISSS: $"<<isss<<endl;
		cout<<"AFP: $"<<afp<<endl;
		cout<<"RENTA: $"<<renta<<endl;
		cout<<"Prestamo: $"<<prestamo<<endl;
		cout<<"Anticipo: $"<<anticipo<<endl;
		cout<<"Horas extras: "<<h<<endl;
		cout<<"Por las Horas extras: $"<<hex<<endl;
		cout<<"Sueldo a pagar: $"<<sp<<endl;
}
   	else if(sueldo>=1019.06 && sueldo < 3250){
		float sp, renta;
		 hex = h*3;
	    sueldo += hex;
		isss = 500*0.03;
		afp = sueldo*0.0725;
		renta = ((((sueldo-isss)-afp)-1019.05)*0.3)+144.28;
		sp = (((((sueldo-isss)-afp)-renta)-prestamo)-anticipo);
		cout<<"Hola "<< name<<", sus descuentos son los siguientes: "<<endl;
		cout<<"ISSS: $"<<isss<<endl;
		cout<<"AFP: $"<<afp<<endl;
		cout<<"RENTA: $"<<renta<<endl;
		cout<<"Prestamo: $"<<prestamo<<endl;
		cout<<"Anticipo: $"<<anticipo<<endl;
		cout<<"Horas extras: "<<h<<endl;
		cout<<"Por las Horas extras: $"<<hex<<endl;
		cout<<"Sueldo a pagar: $"<<sp<<endl;
		
}
	   else if(sueldo>=3250){
	   		float sp, renta;
	   		 hex = h*3;
	    sueldo += hex;
		isss = 500*0.03;
		afp = 3250*0.0725;
		renta = ((((sueldo-isss)-afp)-1019.05)*0.3)+144.28;
		sp = (((((sueldo-isss)-afp)-renta)-prestamo)-anticipo);
		cout<<"Hola "<< name<<", sus descuentos son los siguientes: "<<endl;
		cout<<"ISSS: $"<<isss<<endl;
		cout<<"AFP: $"<<afp<<endl;
		cout<<"RENTA: $"<<renta<<endl;
		cout<<"Prestamo: $"<<prestamo<<endl;
		cout<<"Anticipo: $"<<anticipo<<endl;
		cout<<"Horas extras: "<<h<<endl;
		cout<<"Por las Horas extras: $"<<hex<<endl;
		cout<<"Sueldo a pagar: $"<<sp<<endl;
	   	
	   }
}



float FuncionSemanal(){  //dentro de esta funcion estan los procesos para los descuentos semanales
	float sueldo, isss, afp, prestamo, renta,hex,anticipo,h;
	char name[30];
	cout<<"Ingresa tu nombre"<<endl;
	cin>>name;
	cout<<"Ingrese su sueldo"<<endl;
    cin>>sueldo;
    cout<<"Tiene algun prestamo?: "<<endl;
    cin>>prestamo;
    cout<<"Tiene algun anticipo?"<<endl;
    cin>>anticipo;
    cout<<"Tiene horas extras?"<<endl;
    cin>>h;
	
	if(sueldo<=118){
		float sp;
	    hex = h*3;
	    sueldo += hex;
		isss = sueldo*0.03;
		afp = sueldo*0.0725;
		sp = ((((sueldo-isss)-afp)-prestamo)-anticipo);
		cout<<"Hola "<< name<<", sus descuentos son los siguientes: "<<endl;
		cout<<"ISSS: $"<<isss<<endl;
		cout<<"AFP: $"<<afp<<endl;
		cout<<"Prestamo: $"<<prestamo<<endl;
		cout<<"Anticipo: $"<<anticipo<<endl;
		cout<<"Horas extras: "<<h<<endl;
		cout<<"Por las Horas extras: $"<<hex<<endl;
		cout<<"Sueldo a pagar: $"<<sp<<endl;
	}
	else if(sueldo<=223.81){
		float sp, renta;
		hex = h*3;
	    sueldo += hex;
		isss = sueldo*0.03;
		afp = sueldo*0.0725;
		renta = ((((sueldo-isss)-afp)-118)*0.1)+4.42;
		sp = (((((sueldo-isss)-afp)-renta)-prestamo)-anticipo);
		cout<<"Hola "<< name<<", sus descuentos son los siguientes: "<<endl;
		cout<<"ISSS: $"<<isss<<endl;
		cout<<"AFP: $"<<afp<<endl;
		cout<<"RENTA: $"<<renta<<endl;
		cout<<"Prestamo: $"<<prestamo<<endl;
		cout<<"Anticipo: $"<<anticipo<<endl;
		cout<<"Horas extras: "<<h<<endl;
		cout<<"Por las Horas extras: $"<<hex<<endl;
		cout<<"Sueldo a pagar: $"<<sp<<endl;
	}
	else if(sueldo<=233.33){
		float sp, renta;
		hex = h*3;
	    sueldo += hex;
		isss = sueldo*0.03;
		afp = sueldo*0.0725;
		renta = ((((sueldo-isss)-afp)-223.81)*0.2)+15;
		sp = (((((sueldo-isss)-afp)-renta)-prestamo)-anticipo);
		cout<<"Hola "<< name<<", sus descuentos son los siguientes: "<<endl;
	cout<<"ISSS: $"<<isss<<endl;
		cout<<"AFP: $"<<afp<<endl;
		cout<<"RENTA: $"<<renta<<endl;
		cout<<"Prestamo: $"<<prestamo<<endl;
		cout<<"Anticipo: $"<<anticipo<<endl;
		cout<<"Horas extras: "<<h<<endl;
		cout<<"Por las Horas extras: $"<<hex<<endl;
		cout<<"Sueldo a pagar: $"<<sp<<endl;
	}
		else if(sueldo<=509.52){
			float sp;
			 hex = h*3;
	    sueldo += hex;
		isss = 233.33*0.03;
		afp = sueldo*0.0725;
		renta = ((((sueldo-isss)-afp)-223.81)*0.2)+15;
		sp = (((((sueldo-isss)-afp)-renta)-prestamo)-anticipo);
		cout<<"Hola "<< name<<", sus descuentos son los siguientes: "<<endl;
		cout<<"ISSS: $"<<isss<<endl;
		cout<<"AFP: $"<<afp<<endl;
		cout<<"RENTA: $"<<renta<<endl;
		cout<<"Prestamo: $"<<prestamo<<endl;
		cout<<"Anticipo: $"<<anticipo<<endl;
		cout<<"Horas extras: "<<h<<endl;
		cout<<"Por las Horas extras: $"<<hex<<endl;
		cout<<"Sueldo a pagar: $"<<sp<<endl;
}
   	else if(sueldo>=509.53 && sueldo < 1516.67){
		float sp, renta;
		 hex = h*3;
	    sueldo += hex;
		isss = 233.33*0.03;
		afp = sueldo*0.0725;
		renta = ((((sueldo-isss)-afp)-509.52)*0.3)+72.14;
		sp = (((((sueldo-isss)-afp)-renta)-prestamo)-anticipo);
		cout<<"Hola "<< name<<", sus descuentos son los siguientes: "<<endl;
		cout<<"ISSS: $"<<isss<<endl;
		cout<<"AFP: $"<<afp<<endl;
		cout<<"RENTA: $"<<renta<<endl;
		cout<<"Prestamo: $"<<prestamo<<endl;
		cout<<"Anticipo: $"<<anticipo<<endl;
		cout<<"Horas extras: "<<h<<endl;
		cout<<"Por las Horas extras: $"<<hex<<endl;
		cout<<"Sueldo a pagar: $"<<sp<<endl;
		
}
	   else if(sueldo>=1516.67){
	   		float sp, renta;
	   		 hex = h*3;
	    sueldo += hex;
		isss = 233.33*0.03;
		afp = 1516.67*0.0725;
		renta = ((((sueldo-isss)-afp)-509.52)*0.3)+72.14;
		sp = (((((sueldo-isss)-afp)-renta)-prestamo)-anticipo);
		cout<<"Hola "<< name<<", sus descuentos son los siguientes: "<<endl;
		cout<<"ISSS: $"<<isss<<endl;
		cout<<"AFP: $"<<afp<<endl;
		cout<<"RENTA: $"<<renta<<endl;
		cout<<"Prestamo: $"<<prestamo<<endl;
		cout<<"Anticipo: $"<<anticipo<<endl;
		cout<<"Horas extras: "<<h<<endl;
		cout<<"Por las Horas extras: $"<<hex<<endl;
		cout<<"Sueldo a pagar: $"<<sp<<endl;
	   	
	   }
}


int main(){
	int n;
cout<<"Elija su forma de pago: #1 Mensual, #2 Quincenal, #3 Semanal"<<endl;
cin>>n;
switch(n){
	case 1:
	  FuncionMensual();
	  break;

    case 2: 
	  FuncionQuincenal();
	  break;

    case 3:
	  FuncionSemanal();
	  break;

    default:
	cout<<"El numero ingresado no existe"<<endl;
	break;
}	
return 0;	
}
