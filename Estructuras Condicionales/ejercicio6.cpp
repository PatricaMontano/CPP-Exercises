/*6. Escriba un programa que Lea de la entrada est�ndar un car�cter e indique
en la salida est�ndar si el car�cter es una vocal min�scula, es una vocal
may�scula o no es una vocal.
*/
#include<iostream> 
#include<math.h>
using namespace std;

int main(){
	char caracter;
	
	cout<<"Digite un caracter : ";
	cin>>caracter;
	
	switch(caracter){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u': cout<<"Es una vocal minuscula";
		break;
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U': cout<<"Es una vocal mayuscula";
		break;
		default: cout<<"No es una vocal";
		break;
	}
	return 0;
}
