#include <iostream>
using namespace std;

main(){

	int inicio = 0,fin=0,res=0;
	
	cout<<"ingrese tabla inicial: ";
	cin>>inicio;
	cout<<"ingrese tabla final: ";
	cin>>fin;
	
	for(int rango=inicio;rango<=fin;rango++){
	cout<<"Tabla del "<<rango<<endl;
		for(int i=1;i<=10;i++){
		res = rango * i;
		cout<<rango<<" x "<< i <<" = "<<res<<endl;
		}
	}
	
	
	

	system("pause");
}
