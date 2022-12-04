 /*
	Ejercicio 15: Realice un programa que
	solicite al usuario que piense un número
	entero entre el 1 y el 100. El programa
	debe generar un numero aleatorio en ese
	mismo rango[1-100],e indicarle al usuario si
	el numero que digito es menor o mayor al
	numero aleatorio, así hasta que lo adivine.
	y por ultimo mostrarle el numero de intentos
	que le llevo.

*/

#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){
	int intentos=0, numeroUsuario, numeroAleaorio;
	cout<<"ADIVINA EL NUMERO [1-100]"<<endl;
	cout<<"---------------------------"<<endl;
	
	srand(time(NULL));
	numeroAleaorio = 1 + rand() %(100);
	
	do{
		intentos++;
		cout<<"Digite un numero del entre el 1 y el 100 : ";
		cin>>numeroUsuario;
		if(numeroUsuario>numeroAleaorio){
			cout<<"El numero que digito es mayor al numero a adivinar"<<endl;
		}else if(numeroUsuario<numeroAleaorio){
			cout<<"El numero que digito es menor al numero a adivinar"<<endl;
		}else if(numeroUsuario==numeroAleaorio){
			cout<<"Ganaste !!!"<<endl;
		}
		cout<<"---------------------------"<<endl;
	}while(numeroUsuario!=numeroAleaorio);
	
	cout<<"La cantidad de intentos que hizo hasta adivinar el numero es : "<<intentos<<endl;
	
	
	cout<<"\n";
	system("pause");
	return 0;
}
