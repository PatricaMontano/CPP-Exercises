/* Ejercicio 8:
   Escriba un programa que lea de la
   entrada estándar los dos catetos de un
   triángulo rectángulo y escriba en la
   salida estándar su hipotenusa.
*/

#include<iostream>
#include<math.h>
using namespace std;

int main(){
	float cateto1,cateto2,resultado = 0;
	
	cout<<"Digite el cateto 1 del triangulo: ";cin>>cateto1;
	cout<<"Digite el cateto 2 del triangulo: ";cin>>cateto2;
	
	
	resultado = sqrt(pow(cateto1,2)+pow(cateto2,2));
	
	cout.precision(2);
	cout<<"\nLa hipotenusa del triangulo es: "<<resultado<<endl;
	
	return 0;
}
