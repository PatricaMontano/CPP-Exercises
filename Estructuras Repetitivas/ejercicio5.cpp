 /*
	Ejercicio 5: Escriba un programa que
	lea valores enteros hasta que se
	introduzca un valor en el rango [20-
	30] o se introduzca el valor 0. El
	programa debe entregar la suma de
	los valores mayores a 0 introducidos.
*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int valor,suma=0;
	
	cout<<"LEER VALORES"<<endl;
	cout<<"-----------------------------------"<<endl;
	
	do{
		cout<<"Introduzca un valor, diferente de 0, que no este en el rango [20-30]: ";
		cin>>valor;
		if(valor>0){
			suma += valor;
		}
	}while((valor != 0) && (valor<20 || valor>30));
	
	cout<<"La sumatoria de los valores ingresados es : "<<suma<<endl;
	
	cout<<"\n\n";
	system("pause");
	return 0;
}
