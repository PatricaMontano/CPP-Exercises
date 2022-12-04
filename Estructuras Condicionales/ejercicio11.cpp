/*
   Ejercicio 11: Hacer un programa
   que simule un cajero automático
   un saldo inicial de 1000 con
   Dólares.


*/
#include<iostream> 
using namespace std;

int main(){
	int saldo_inicial=1000,opc;
	float extra,saldo=0,retiro;
	
	cout<<"Bienvenido:: Cajero Automatico BP ;=) ";
	cout<<"\tBienvenido a su Cajero Virtual"<<endl;
	cout<<"1. Ingresar dinero en la cuenta"<<endl;
	cout<<"2. Retirar dinero en la cuenta"<<endl;
	cout<<"3. Salir"<<endl;
	cin>>opc;
	
	switch(opc){
		case 1:
			cout<<"Digite la cantidad de dinero a ingresar: ";
			cin>>extra;
			saldo=saldo_inicial+extra;
			cout<<"Dinero en cuenta: "<<saldo<<endl;
		break;
		case 2:
			cout<<"Digite la cantidad de dinero a retirar: ";
			cin>>retiro;
			if(retiro>saldo_inicial){
				cout<<"No tiene ese cantidad de dinero";
			}else{
				saldo = saldo_inicial - retiro;
				cout<<"Dinero en cuenta: "<<saldo<<endl;
			}
			
		break;
		case 3:
			
		break;
		
		default:
		break;
	}
	
	
	
	return 0;
}
