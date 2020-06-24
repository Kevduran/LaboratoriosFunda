#include <iostream>

using namespace std;

void PedirDatos(int[],int[],int);//arreglo1 - arreglo2 - longitud de ambos
void Sumar(int[],int [],int,int[]); // arreglo1 - arreglo2 - longitud de los 3 arreglos - arreglo final
void MostrarDatos(int [],int);//arreglo final - longitud del arreglo

int main(){
	int n;
	
	cout<<"Digite la longitud de los arreglos: ";
	cin>>n;//se pide la longitud para mandarla a las funciones
	
	int arreglo1[n],arreglo2[n],arreglof[n];//se inicializan los arreglos con su respectiva longitud
	
	PedirDatos(arreglo1,arreglo2,n);//Pide los datos
	Sumar(arreglo1,arreglo2,n,arreglof);//luego almacenados pasan a sumarse
	MostrarDatos(arreglof,n);//muestra el resultado
	
	return 0;
}

void PedirDatos(int arreglo1[],int arreglo2[],int n){
	
	cout<<"\nPRIMER ARREGLO"<<endl;
	for(int i=0;i<n;i++){
		cout<<"\nDigite el numero para la posicion ["<<i<<"] :";
		cin>>arreglo1[i];
	}
	
	cout<<"\nSEGUNDO ARREGLO"<<endl;
	for(int i=0;i<n;i++){
		cout<<"\nDigite el numero para la posicion ["<<i<<"] :";
		cin>>arreglo2[i];
	}
	
}
void Sumar(int arreglo1[],int arreglo2[],int n, int arreglof[]){
	
	for(int i=0;i<n;i++){
		arreglof[i]=arreglo1[i]+arreglo2[i];
	}
}
void MostrarDatos(int arreglof[], int n){
	
	for(int i=0;i<n;i++){
		cout<<"La suma de las posiciones ["<<i<<"] es: "<<arreglof[i]<<endl;
	}
	
}
