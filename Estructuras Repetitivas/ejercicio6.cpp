 /*
	Ejercicio 6: 
	Escriba un programa que calcule x^y,
	donde tanto x como y son enteros
	positivos, sin utilizar la función pow.
*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int x,y,respuesta=1;
	
	cout<<"CALCULAR x^y"<<endl;
	cout<<"-----------------------------------"<<endl;
	
	cout<<"Inoduzca x : ";
	cin>>x;
	cout<<"Inoduzca y : ";
	cin>>y;
	
	for(int i=1;i<=y;i++){
		respuesta = respuesta * x;
	}
	
	cout<<x<<"^"<<y<<" = "<<respuesta<<endl;
	
	cout<<"\n\n";
	system("pause");
	return 0;
}
