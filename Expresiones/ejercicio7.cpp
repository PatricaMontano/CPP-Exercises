/* Ejercicio 7: La calificación final de un estudiante es el
   promedio de tres notas:
   
- La nota de prácticas que cuenta un 30% del total.
- La nota teórica que cuenta un 60%.
- La nota de participación que cuenta el 10% restante.

  Escriba un programa que lea las tres notas del alumno y
  escriba su nota final.
*/

#include<iostream>

using namespace std;

int main(){
	float nota1,nota2,nota3,resultado = 0;
	
	cout<<"Digite nota de practicas (30% del total): ";cin>>nota1;
	cout<<"Digite nota teorica (60% del total): ";cin>>nota2;
	cout<<"Digite nota de participacion (10% del total): ";cin>>nota3;
	
	
	resultado = (nota1*0.30)+(nota2*0.60)+(nota3*0.10);
	
	cout<<"\nLa nota final del alumno es : "<<resultado<<endl;
	
	return 0;
}
