/* Ejercicio 4:
     Ejecute el programa del ejercicio
     anterior con entradas erróneas y
  observe los resultados. Por ejemplo,
   introduzca un dato de tipo carácter
     cuando se espera un dato de tipo
                       entero.
*/

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
