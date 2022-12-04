/*
Ejercicio 3: Realice un programa
que lea un valor entero y determine
si se trata de un número par o
impar.
*/
#include<iostream> 
#include<math.h>
using namespace std;

int main(){
	int n1;
	
	cout<<"Digite un numero : ";
	cin>>n1;
	
	if(n1==0){
		cout<<"El numero es 0";
	}	
	else if(n1%2==0){
		cout<<"\nEl numero "<<n1<<" , es par "<<endl;
	}
	else{
		cout<<"\nEl numero "<<n1<<" , es impar "<<endl;
	}
	return 0;
}
