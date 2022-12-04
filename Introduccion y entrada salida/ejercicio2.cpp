/* 2.Escribe un programa que lea de la entrada estándar el precio de un
 producto y muestre en la salida estándar el precio del producto al aplicarle el IVA. */

#include<iostream>

using namespace std;

int main(){
	float precio, iva;
	cout<<"Ingrese precio del producto: ";cin>>precio;
	cout<<"Ingrese iva del producto: ";cin>>iva;
	
	precio = precio+((precio*iva)/100);
	cout<<"\nEl precio del producto con IVA es: "<<precio<<endl;
	
	return 0;
}
