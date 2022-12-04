 /*
  	Ejercicio 4:
  	Escriba un programa que tome cada 4 horas
	la temperatura exterior,
	leyéndola durante un período de 24 horas. Es
	decir, debe leer 6 temperaturas.
	Calcule la temperatura media del día, la
	temperatura más alta y la más baja.
*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	float temperatura = 0, tempAlta=0,tempBaja=9999999,media=0;
	
	cout<<"TEMPERATURAS DEL DIA"<<endl;
	cout<<"-----------------------------------"<<endl;
	
	for(int i=0;i<=24;i++){
		if(i%4==0){
			cout<<"Hora:"<<i<<":00"<<endl;
			cout<<"Digite la temperatura de esta hora"<<endl;
			cin>>temperatura;
			cout<<"-----------------------------------"<<endl;
			
			media = media + temperatura;
			
			if(temperatura>tempAlta){
				tempAlta=temperatura;
			}
			
			if(temperatura<tempBaja){
				tempBaja=temperatura;
			}
			
		}else{
			cout<<"Hora:"<<i<<":00"<<endl;
			cout<<"-----------------------------------"<<endl;
		}
	}
	
	cout<<"La temperatura Media es : "<<media/6<<endl;
	cout<<"La temperatura mas Alta es : "<<tempAlta<<endl;
	cout<<"La temperatura mas Baja es : "<<tempBaja<<endl;
	
	
	
	cout<<"\n\n";
	system("pause");
	return 0;
}
