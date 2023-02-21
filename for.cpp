#include<iostream>
using namespace std;
int main(){
	int cont=1;
	int n_tabla;
	cout<<"Dime que tabla deseas: ";
	cin>>n_tabla;
	cout<<"****TABLA DEL "<<n_tabla<<"****"<<endl;
	for(cont=0; cont<=10; cont++){
		cout<<n_tabla<<" x "<<cont<<" = "<<n_tabla*cont<<endl;
		
	}
	return 0;
}
