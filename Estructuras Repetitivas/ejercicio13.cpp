 /*
	Ejercicio 13: Hacer un programa
	que realice la serie Fibonacci
	Fibonacci -> 1,1,2,3,5,8,13,...,n
*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int n,suma=0,x=0,y=1,z;
	
	cout<<"Digite el valor de n para la serie de Fibonacci: ";
	cin>>n;
	
	cout<<"1 ";
	for(int i=1;i<n;i++){
		z = x + y;
		cout<<z<<" ";
		x = y;
		y = z;
		suma=suma+z;
	}
	
	cout<<"\nLa suma de Fibonacci de n="<<n<<" es : "<<suma<<endl;
	
	
	cout<<"\n";
	system("pause");
	return 0;
}
