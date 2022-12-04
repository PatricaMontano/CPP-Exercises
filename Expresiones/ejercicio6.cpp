/* Ejercicio 5: 
   Escriba un programa que lea la nota
   final de cuatro alumnos y calcule la
   nota final media de los cuatro alumnos.
*/

#include<iostream>

using namespace std;

int main(){
	float alumno1,alumno2,alumno3,alumno4,resultado = 0;
	
	cout<<"Digite nota final del Alumno 1: ";cin>>alumno1;
	cout<<"Digite nota final del Alumno 2: ";cin>>alumno2;
	cout<<"Digite nota final del Alumno 3: ";cin>>alumno3;
	cout<<"Digite nota final del Alumno 4: ";cin>>alumno4;
	
	resultado = (alumno1+alumno2+alumno3+alumno4)/4;
	
	cout<<"\nLa nota final media de los cuatro alumnos es : "<<resultado<<endl;
	
	return 0;
}
