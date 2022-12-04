 /*
	Ejercicio 10:
	Escriba un programa que calcule el
	valor de: 1!+2!+3!+...+n!
	(suma de factoriales).
*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int n,factorial=1,suma=0;
	
	cout<<"Digite el valor de n para la suma de factoriales : ";
	cin>>n;
	
	for(int i=1;i<=n;i++){
		factorial*=i;
		cout<<i<<"!+";
		suma+=factorial;
	}
	
	cout<<"\nLa suma de factoriales de "<<n<<" es : "<<suma<<endl;
	
	
	cout<<"\n";
	system("pause");
	return 0;
}
