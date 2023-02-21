#include <iostream>
using namespace std;
int main(){
	int respuesta;
	cout<<"*************"<<endl;
	cout<<"    menu    "<<endl;
	cout<<"*************"<<endl;
	cout<<"1. MENU"<<endl;
	cout<<"2. Despedirme"<<endl;
	cout<<"3. SALIR"<<endl;
	cout<<"Elige 1 opcion (1, 2 o 3): ";
	cin>>respuesta;
	switch (respuesta){
		case 1:
			cout<<"*************"<<endl;
			cout<<"    menu    "<<endl;
			cout<<"*************"<<endl;
			cout<<"1. MENU"<<endl;
			cout<<"2. Despedirme"<<endl;
			cout<<"3. SALIR"<<endl;
			cout<<"Elige 1 opcion (1, 2 o 3): ";
			break;
		
		case 2:
			cout<<"Estas despedido";
			break;
		case 3:
			
			break;
		default:
			cout<<"No has elegido ninguna opción valida"<<endl;
		 break;
	}
}
