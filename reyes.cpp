#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;
int cuenta_letras(char *p_nombre){
    int cont=0;
    while(*(p_nombre+cont)!='\0'){
        cont++;    
    }
    return cont;
   
}

int main(){
    char *reyes[3];
    char nombre[10];
    int longitud;
    int cont;
    for(cont=0;cont<3;cont++){
        //Pedimos el nombre del rey mago
        cout<<"Dime el nombre del rey mago "<<cont<<": ";
        cin>>nombre;
        //Verificamos que lo hemos leido bien mostrandolo
        //por pantalla
        cout<<"\nHas introducido el nombre de "<<nombre;
        //Contamos cuantas letras tiene el nombre
        longitud=cuenta_letras(nombre);    
        //Lo deletreamos en vertical
        for(cont=0;cont<longitud;cont++){
            printf("\n%c",*(nombre+cont));
        }
        //reservamos memoria para el nombre
        reyes[cont]=(char *) malloc((longitud+1)*sizeof(char));
        printf("\nLongitud= %d",longitud);
        //Trasladamos la palabra letra a letra
        for(cont=0;cont<longitud;cont++){
            *(*reyes+cont)=nombre[cont];
        }
    }
    //Comprobación
    cout<<endl;
    cout<<"***********************************"<<endl;
    cout<<"*        The magic Kings           *"<<endl;
    cout<<"***********************************"<<endl;
    for(cont=0;cont<3;cont++){
        printf("%s\n",reyes[cont]);    
    }

    return 0;
}
