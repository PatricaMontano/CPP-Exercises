/* Ejercicio 10:
   Escriba un programa que calcule las
   soluciones de una ecuación de
   segundo grado de la forma ax^2 + bx +c = 0,
   teniendo en cuenta que:
*/

#include<iostream>
#include<math.h>
using namespace std;

int main(){
	float a,b,c,resultadoP,resultadoN = 0;
	
	cout<<"Digite el valor de a : ";cin>>a;
	cout<<"Digite el valor de b : ";cin>>b;
	cout<<"Digite el valor de c : ";cin>>c;
	
	
	resultadoP = (-b+(sqrt(pow(b,2)-4*a*c)))/(2*a);
	resultadoN = (-b-(sqrt(pow(b,2)-4*a*c)))/(2*a);
	
	cout.precision(2);
	cout<<"\nLa solucion 1 de la ecuacion de segundo grado es : "<<resultadoP<<endl;
	cout<<"\nLa solucion 2 de la ecuacion de segundo grado es : "<<resultadoN<<endl;
	
	return 0;
}
