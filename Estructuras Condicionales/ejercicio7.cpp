/*
 Ejercicio 7: Escriba un programa
que solicite una edad (un entero) e
indique en la salida estándar si la
edad introducida está en el rango
[18-25].
*/
#include<iostream> 
#include<math.h>
using namespace std;

int main(){
	int edad;
	
	cout<<"Digite una edad : ";
	cin>>edad;
	
	if((edad>17) && (edad<26)){
		cout<<"La edad esta en el rango entre 18-25";
	}else{
		cout<<"La edad NO esta en el rango de 18-25";	
	}
	return 0;
}
