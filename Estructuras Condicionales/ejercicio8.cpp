/*
 Ejercicio 8:
  	Escribe un programa que lea de la entrada
	est�ndar tres n�meros. Despu�s
	debe leer un cuarto n�mero e indicar si el
	n�mero coincide con alguno de los
	introducidos con anterioridad.
*/
#include<iostream> 
using namespace std;

int main(){
	int n1,n2,n3,n4;
	
	cout<<"Digite 3 numeros : ";
	cin>>n1>>n2>>n3;
	cout<<"\nDigite el cuarto numero : ";
	cin>>n4;
	
	
	if((n4==n1) || (n4==n2) || (n4==n3)){
		cout<<"El cuarto numero coincide con uno de los 3 que ingreso primero";
	}else{
		cout<<"NO coincide el cuarto numero";
	}
	return 0;
}
