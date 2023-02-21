#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
using namespace std;
int main(){
	long seed;
	int filas, col;
	int cont;
	int *matriz[3];
	seed=time(0);
	srand(seed);
	for(filas=0; filas<3; filas++){
		matriz[filas]=(int *) malloc(3*sizeof(int));
		for (col=0; col<3; col++){
			*(matriz+filas) + col= rand()%10;
		}
	}
	return 0;
}
