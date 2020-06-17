#include <iostream>
using namespace std;

void DiaSiguiente(int dia, int mes, int ano);

int main(){
	int dia, mes, ano;
	
	cout<<"Digite el dia: ";cin>>dia;
	cout<<"Digite el mes: ";cin>>mes;
	cout<<"Digite el año: ";cin>>ano;
	
	DiaSiguiente(dia,mes,ano);
	
	return 0;
}
void DiaSiguiente(int dd, int mm, int aa){
	char band='F';
	
	if(aa%400==0){//Verifica si es Bisiesto el año
		band='V';
	}else if((aa%4==0)&&(aa%100!=0)){
		band='V';
	}
	
	if(((dd>31)||(dd==0))||((mm>12||(mm==0))||(aa==0))){//Errores generales
		cout<<"ERROR"<<endl;
		cout<<"Error de digitacion";	
	}else if(((dd>28)&&(mm==2)&&(band=='F'))||((dd>29)&&(mm==2)&&(band=='V'))){//Errores especificos a febrero
		cout<<"ERROR"<<endl;
		cout<<"Error de digitacion";
	}else{
		if(band=='V'){
			dd++;
			if((mm==1)||(mm==3)||(mm==5)||(mm==7)||(mm==8)||(mm==10)||(mm==12)){//meses con 31 dias
				if(dd>31){
					dd=1;
					mm++;
					if(mm>12){
						mm=1;
						aa++;
					}
				}
			}else if((mm==4)||(mm==6)||(mm==9)||(mm==11)){//meses con 30 dias
				if(dd>30){
					dd=1;
					mm++;
				}
			}else if(mm==2){//febrero en año Bisiesto
				if(dd>29){
					dd=1;
					mm++;
				}
			}
		}else{
			dd++;
			if((mm==1)||(mm==3)||(mm==5)||(mm==7)||(mm==8)||(mm==10)||(mm==12)){//meses con 31 dias
				if(dd>31){
					dd=1;
					mm++;
					if(mm>12){
						mm=1;
						aa++;
					}
				}
			}else if((mm==4)||(mm==6)||(mm==9)||(mm==11)){//meses con 30 dias
				if(dd>30){
					dd=1;
					mm++;
				}
			}else if(mm==2){//febrero no es bisiesto
				if(dd>28){
					dd=1;
					mm++;
				}
			}
		}
	cout<<"El dia siguiente es: "<<dd<<"/"<<mm<<"/"<<aa<<endl;
	}

}
