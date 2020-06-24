#include <iostream>
using namespace std;

void Numeros(int [], int);

int main(){
	
	int n;
	
	cout<<"¿Cuantos numeros desea escribir? ";
	cin>>n;
	
	int arreglo[n];
	Numeros(arreglo,n);

	return 0;
}

void Numeros(int arreglo[],int n){
	int contador=0, numero;
	
	for(int i=0;i<n;i++){
		cout<<"\nIngrese el numero para el espacio ["<<i<<"] : ";
		cin>>arreglo[i];
	}
	
	cout<<"Digite el numero que desea buscar en el arreglo: ";
	cin>>numero;
	
	for(int i=0;i<n;i++){
		if(numero==arreglo[i]){
			contador++;
		}
	}
	cout<<"\nHay un total de: "<<contador<<" numeros "<<numero<<" en su arreglo";
	
}
