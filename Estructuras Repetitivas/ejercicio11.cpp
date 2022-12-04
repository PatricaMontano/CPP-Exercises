 /*
	Ejercicio 11: Escriba un programa
	que calcule el valor de:
	2^1+2^2+2^3+...+2^n
*/

#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main(){
	int n,suma=0,elevado;
	
	cout<<"Digite el valor de (2^1+2^n) n : ";
	cin>>n;
	
	for(int i=1;i<=n;i++){
		elevado = pow(2,i);
		cout<<"2^"<<i<<"+";
		suma+=elevado;
	}
	
	cout<<"\nLa suma de (2^1+2^n) "<<n<<" es : "<<suma<<endl;
	
	
	cout<<"\n";
	system("pause");
	return 0;
}
