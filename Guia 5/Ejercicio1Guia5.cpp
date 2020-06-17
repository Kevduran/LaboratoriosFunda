#include <iostream>
#include <conio.h>
using namespace std;

int MCD(int, int);

int main(){
	int num1, num2;
	
	cout<<"Digite el primer numero: ";
	cin>>num1;
	cout<<"Digite el segundo numero: ";
	cin>>num2;
	
	cout<<"El MCD es: "<<MCD(num1,num2);
	
	return 0;
}

int MCD(int num1, int num2){
	int dividendo=0, divisor=0, aux=0;
	if (num1==num2){
		dividendo=num1;
	}
	else{
		if (num1>num2){
			dividendo=num1;
			divisor=num2;
			while(divisor!=0){
				aux=dividendo%divisor;
				dividendo=divisor;
				divisor=aux;
			}
		}
		else{
			dividendo=num2;
			divisor=num1;
			while(divisor!=0){
				aux=dividendo%divisor;
				dividendo=divisor;
				divisor=aux;
			}
		}
	}

	return dividendo;
}
