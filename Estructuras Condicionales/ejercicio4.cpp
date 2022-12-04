/*
Ejercicio 4:
Comprobar si un número digitado por el
   usuario es positivo o negativo.
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
	}else if(n1>0){
		cout<<"El numero es positivo"<<endl;
	}else{
		cout<<"El numero es negativo"<<endl;
	}
	return 0;
}
