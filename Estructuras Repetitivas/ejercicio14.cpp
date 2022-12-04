 /*
	Ejercicio 14:
	En una clase de 5 alumnos se han realizado tres exámenes y
	se requiere determinar el número de:
	a) Alumnos que aprobaron todos los exámenes.
	b) Alumnos que aprobaron al menos un examen.
	c) Alumnos que aprobaron únicamente el último examen.
	Realice un programa que permita la lectura
	datos y el cálculo de las estadísticas.
*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	float examen1, examen2,examen3;
	int aprobadosTodos=0,aprobadosUno=0,aprobadosUltimo=0;
	
	for(int i=1;i<=5;i++){
		cout<<"Alumno "<<i<<" Digite la nota del primer examen :";
		cin>>examen1;
		cout<<"Alumno "<<i<<" Digite la nota del segundo examen : ";
		cin>>examen2;
		cout<<"Alumno "<<i<<" Digite la nota del tercer examen :";
		cin>>examen3;
		cout<<"-----------------------------------------------------"<<endl;
		
		if((examen1>=7)&&(examen2>=7)&&(examen3>=7)){
			aprobadosTodos++;
		}
		
		if((examen1>=7)||(examen2>=7)||(examen3>=7)){
			aprobadosUno++;
		}
		if((examen1<7)&&(examen2<7)&&(examen3>=7)){
			aprobadosUltimo++;
		}
		
		
		
	}
	
	cout<<"\nAlumnos que aprobaron todos los examenes son : "<<aprobadosTodos<<endl;
	cout<<"Alumnos que aprobaron al menos un examen son : "<<aprobadosUno<<endl;
	cout<<"Alumnos que aprobaron unicamente el ultimo examen son : "<<aprobadosUltimo<<endl;
	
	
	cout<<"\n";
	system("pause");
	return 0;
}
