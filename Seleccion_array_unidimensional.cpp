#include <iostream>
using namespace std;

main(){
	string semana[7]={"Lunes","Martes","Miercoles","jueves","Viernes","Sabado","Domingo"}; 
	
	semana[3] = "Jueves";
	for (int i=0;i<7;i++){
		cout<<semana[i]<<endl;
	}

	
	
	system ("pause");
}
