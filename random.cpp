#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main(){
	long semilla;
	semilla=time(0);
	srand(semilla);
	cout<<"Un n�mero al azar: "<<rand();
	
	
	return 0;
}
