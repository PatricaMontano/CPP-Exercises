/* Ejercicio 5: Escriba un fragmento de
   programa que intercambie los valores
   de dos variables.
*/

#include<iostream>

using namespace std;

int main(){
	float a,b,aux;
	
	cout<<"Digite el valor de variable A: ";cin>>a;
	cout<<"Digite el valor de variable B: ";cin>>b;
	
	aux = a;
	
	a = b;
	b = aux;
	
	cout<<"\nLa variabla A ahora es: "<<a<<endl;
	cout<<"La variable B ahora es: "<<b<<endl;
	
	return 0;
}
