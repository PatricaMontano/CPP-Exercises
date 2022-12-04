/*
Ejercicio 5: Escriba un programa
que lea de la entrada estándar un
carácter e indique en la salida
estándar si el carácter es una vocal
minúscula o no.
*/
#include<iostream> 
#include<math.h>
using namespace std;

int main(){
	char caracter;
	
	cout<<"Digite un caracter : ";
	cin>>caracter;
	
	switch(caracter){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u': cout<<"Es una vocal minuscula";
		break;
		default: cout<<"No es una vocal minuscula";
		break;
	}
	return 0;
}
