 /*
	Ejercicio 12:
	Hacer un programa que calcule el
	resultado de la siguiente expresion:
	1-2+3-4+5-6...n
*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int n,suma=0,signo=1;
	
	cout<<"Digite el valor de n : ";
	cin>>n;
	
	for(int i=1;i<=n;i++){
		cout<<i<<"*("<<signo<<")+";
		suma= suma + (i*signo);
		signo*=-1;
	}
	
	cout<<"\nLa suma de 1-2+3-4+5-6...n  n="<<n<<" es : "<<suma<<endl;
	
	
	cout<<"\n";
	system("pause");
	return 0;
}
