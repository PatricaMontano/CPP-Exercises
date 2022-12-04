 /*
	Ejercicio 7: Escriba un programa
	que calcule el valor de :
	1+2+3+...+n
*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int n,suma=0;
	
	cout<<"Digite el numero de elementos : ";
	cin>>n;
	
	for(int i=1;i<=n;i++){
		suma+=i;
		cout<<i<<"+";
	}
	
	cout<<"\nLa suma de n numeros es : "<<suma<<endl;
	
	
	cout<<"\n\n";
	system("pause");
	return 0;
}
