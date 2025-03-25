#include <iostream>
using namespace std;
// punteros con asignacion de memoria dinamica;
// new = reservar un espacio en memoria 
// delete [] = liberar la memoria

main(){
	int fil = 0, col=0,**pm_notas;
	cout<<"Ingrese la cantidad de Estudiantes: ";
	cin>>fil;
	cout<<"Ingrese la cantidad de Notas por estudiante: ";
	cin>>col;
	
	pm_notas = new int *[fil];
	for(int i=0;i<fil;i++){
		pm_notas [i]= new int[col];
	}
	for(int i=0;i<fil;i++){
		cout<<"__________Estudiante____________"<<i<<endl;
		for(int ii=0;ii<col;ii++){
			cout<<"Nota:"<<ii<<" : ";
			cin>>*(*(pm_notas+i)+ii);
		}
		cout<<"______________________"<<endl;
	}
	cout<<"------------ Mostar Notas -------------"<<endl;
		
	for(int i=0;i<fil;i++){
		
		for(int ii=0;ii<col;ii++){
			cout<<*(*(pm_notas+i)+ii)<<endl;
		}
	cout<<"___________________________________________"<<endl;
	}
	
	for(int i=0;i<fil;i++){
		delete [] pm_notas[i];
	}
	delete [] pm_notas;
	system("pause");
}
