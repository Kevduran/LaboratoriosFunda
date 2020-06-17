#include <iostream>
using namespace std;

void SegundoMas(int,int,int);

int main(){
	int horas, min, seg;
	
	cout<<"Digite las horas: ";
	cin>>horas;
	cout<<"Digite los minutos: ";
	cin>>min;
	cout<<"Digite los segundos: ";
	cin>>seg;
	
	cout<<"\n\tAgregandole un segundo"<<endl;
	SegundoMas(horas,min,seg);
	
	return 0;
}

void SegundoMas(int horas, int minutos, int segundos){

	
	if((horas<24)&&(minutos<60)&&(segundos<60)){
		segundos++;
		if(segundos==60){
			segundos=00;
			minutos++;
			if (minutos==60){
				minutos=00;
				horas++;
				if(horas==24){
					horas=00;
				}
			}
		}
		cout<<"La horas es: "<<horas<<":"<<minutos<<":"<<segundos;
	}else{
		cout<<"Alguno de los elementos no es aceptado";
	}
	

	
}
