#include <iostream>

using namespace std;
//prototipos
void PedirDatos(int);
void CalcularSalarios();
void MostrarDatos();
//Variables Globales
int num_empleados,horas[50],horas_extras[50];
float Stotal[50], Sreal[50];

int main(){

	cout<<"¿Cuantos empleados desea ingresar? "<<endl;//pedir el numero de empleados
	cin>>num_empleados;
	PedirDatos(num_empleados);
	CalcularSalarios();
	MostrarDatos();//las 3 funciones
	
	return 0;
}

void PedirDatos(int numero){//Se almacenan los datos en las variables globales
	
	for(int i=0;i<numero;i++){
		cout<<"Empleado "<<i+1<<endl;
		cout<<"¿Cuantas horas ha trabajado? ";
		cin>>horas[i];
		cout<<"¿Cuantas horas EXTRAS ha trabajado? ";
		cin>>horas_extras[i];
		cout<<"\n";
	}
}

void CalcularSalarios(){//Calcula los datos con lo rellenado en la funcion anterior
	
	for(int i=0;i<num_empleados;i++){
		Stotal[i]=(horas[i]*1.75)+(horas_extras[i]*2.50);//obtenemos el total
		if(Stotal[i]>500){
			Sreal[i]=Stotal[i]-((Stotal[i]*0.04)+(Stotal[i]*0.0625)+(Stotal[i]*0.1));//obtenemos el total real >500
		}
		else{
			Sreal[i]=Stotal[i]-((Stotal[i]*0.04)+(Stotal[i]*0.0625));//el total real de 500 o menor
		}
	}
}

void MostrarDatos(){
	cout<<"\tRESULTADOS"<<endl;//se muestran todos los datos guardados 
	for(int i=0;i<num_empleados;i++){
		cout<<"Empleado "<<i+1<<endl;
		cout<<"Tiene un sueldo total de: "<<Stotal[i]<<endl;
		cout<<"Su salario real (con descuentos) es de: "<<Sreal[i]<<endl;
		cout<<"\n";
	}
	
}
