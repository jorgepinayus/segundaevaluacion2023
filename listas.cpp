#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int cuenta_letras(char *p_nombre[]){
	int longitud, cont=0;
	while(*(p_nombre + cont)!='\0'){
		longitud ++;
		cont ++;
	}
	return longitud;
}
		


int main(){
	char *reyes [3]; 
	char nombre[10];
	int longitud; int cont;
	cout<<"Dime el nombre del primer rey mago :) : ";
	cin>>nombre;
	cout<<"\nHas introducido a "<<nombre;
	longitud=cuenta_letras(nombre);
	for (cont=0; cont<=10;cont++){
		printf("\n%c",*(nombre+cont));
	}
	reyes[cont]=(char*)malloc ((longitud+1)*sizeof(char));
	printf("\nLongitud=%d", longitud);
	for (cont=0; cont<=10;cont++){
		*(*reyes+cont)=nombre[cont];
	}
		
	
	
	
	
	
	return 0;
}
