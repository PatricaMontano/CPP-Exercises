 /*
	Ejercicio 9: Escriba un programa
	que calcule el valor de: 1*2*3*...*n
	(factorial de un número).
	Ejemplo: 5! = 5*4*3*2*1 = 120
*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int n,respuesta=1;
	
	cout<<"Digite el valor de n para factorial : ";
	cin>>n;
	
	for(int i=1;i<=n;i++){
		respuesta*=i;
		cout<<i<<"*";
	}
	
	cout<<"\nEl factorial de "<<n<<" es : "<<respuesta<<endl;
	
	
	cout<<"\n\n";
	system("pause");
	return 0;
}
