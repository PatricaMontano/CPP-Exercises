/*
   Ejercicio 12:
   Hacer un menú que considere las
   siguientes opciones:
   Caso 1: Cubo de un número
   Caso 2: Número par o impar
   Case 3: salir.
*/
#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int opc;
	float numero,resultado;
	
	cout<<"Bienvenido"<<endl;
	cout<<"1. Cubo de un numero"<<endl;
	cout<<"2. Numero par o impar"<<endl;
	cout<<"3. Salir"<<endl;
	cin>>opc;
	
	switch(opc){
		case 1:
			cout<<"Introduzca un numero: ";
			cin>>numero;
			resultado = pow(numero,3); 
			cout<<"El cubo del numero "<<numero<<" es : "<<resultado<<endl;
		break;
		case 2:
			cout<<"Introduzca un numero: ";
			cin>>numero;
			if(((int)numero)%2==0){
				cout<<"El numero "<<numero<<" es Par"<<endl;
			}else{
				cout<<"El numero "<<numero<<" es Impar"<<endl;
			}
			
		break;
		case 3:
			cout<<"Hasta luego !!!!!"<<endl;
		break;
		default:
		break;
	}
	
	
	
	
	return 0;
}
