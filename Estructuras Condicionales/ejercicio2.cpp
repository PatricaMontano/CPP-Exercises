/*2. Escriba un programa que Lea tres n�meros y determine cu�l de ellos es
el mayor. */

#include<iostream> 

using namespace std;

int main(){
	int n1,n2,n3;
	
	cout<<"Digite 3 numeros : ";
	cin>>n1>>n2>>n3;
	
	if((n1>=n2) && (n1>=n3)){
		cout<<"\nEl mayor es: "<<n1<<endl;
	}
	else if((n2>=n1) && (n2>=n3)){
		cout<<"\nEl mayor es: "<<n2<<endl;
	}
	else{
		cout<<"\nEl mayor es: "<<n3<<endl;
	}
	return 0;
}
