/* Ejercicio 3: Realice un programa que lea de la entrada
estándar los siguientes datos de una persona:
      Edad: dato de tipo entero.
      Sexo: dato de tipo carácter.
      Altura en metros: dato de tipo real.
Tras leer los datos, el programa debe mostrarlos en la
salida estándar. */

#include<iostream>

using namespace std;

int main(){
	int edad;
	char sexo[10];
	float altura;
	
	cout<<"Introduzca su edad : ";
	cin >> edad;
	
	cout<<"Introduzca su Sexo, (Masculino) o (Femenino) : ";
	cin >> sexo;
	
	cout<<"Introduzca su altura (centimetros) : ";
	cin >> altura;
	
	cout<<"\nSu edad es: "<<edad<<", su genero es: "<<sexo<<", y su altura es: "<<altura;
	
	return 0;
}
