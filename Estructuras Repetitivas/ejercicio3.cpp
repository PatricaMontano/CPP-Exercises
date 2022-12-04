 /*
  	Ejercicio 3: Realice un programa
	que calcule y muestre en la salida
	estándar la suma de los cuadrados
	de los 10 primeros enteros
	mayores que cero.
*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int numero, contador=0;
	float resultado = 0;
	cout<<"Inserte 10 numeros mayores a 0 "<<endl;
	
	do{
		cout<<"Digite un numero : ";
		cin>>numero;
		if(numero>0){
			resultado = resultado + (numero*numero);
			contador++;
		}
		
	}while(contador<10);
	
	cout<<"\nLa suma de los cuadrados de los numeros mayores a  0 es : "<<resultado<<endl;
	
	cout<<"\n\n";
	system("pause");
	return 0;
}
