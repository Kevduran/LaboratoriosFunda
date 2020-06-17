#include <iostream>
using namespace std;

bool Bisiesto(int); 

int main(){
	int fecha;
	bool resultado;
	
	cout<<"Digite que año quiere comprobar: ";
	cin>>fecha;
	
	resultado=Bisiesto(fecha);
	
	if(resultado==true){
		cout<<"\nSu año es Bisiesto";
	}else if(resultado==false){
		cout<<"\nSu año no es Bisiesto";
	}
	
	return 0;
}

bool Bisiesto(int ano){
	
	if(ano%400==0){
		return true;
	}
	else if((ano%4==0)&&(ano%100!=0)){
		return true;
	}else{
		return false;
	}
}
