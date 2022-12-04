 /*
	Ejercicio 16:
	Realice un programa que calcule
	descomposición en factores primos de
	un número entero.
	Por ejemplo: 20 = 2*2*5.
*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int numero, numPrimo=2, contador=0;
	
	cout<<"Digite un numero: ";
	cin>>numero;
	
	cout<<numero<<" = ";
	
	while(numero!=1){
		if(numero%numPrimo==0){
			cout<<numPrimo<<"*";
			numero = numero/numPrimo;
		}else{
			do{
				numPrimo++;
			}while((numPrimo%2==0)||(numPrimo%3==0));
		}
	}
	
	
	
	
	cout<<"\nFin";
	
	
	cout<<"\n";
	system("pause");
	return 0;
}
