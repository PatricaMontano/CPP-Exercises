 /*
	Ejercicio 8:
	Escriba un programa que calcule el
	valor de: 1+3+5+...+2n-1
*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int n,suma=0;
	
	cout<<"Digite el numero de elementos : ";
	cin>>n;
	
	for(int i=1;i<=2*n-1;i+=2){
		suma+=i;
		cout<<i<<"+";
	}
	
	cout<<"\nLa suma de n numeros +2n-1 es : "<<suma<<endl;
	
	
	cout<<"\n\n";
	system("pause");
	return 0;
}
