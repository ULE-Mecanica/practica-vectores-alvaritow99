/*Hacer programa que me cargue dos vectores de 5 elementos con una función y 
mediante otra función me compare los dos vectores para ver si son iguales o no (elemento a elemento).*/


#include <stdio.h>

#define TAM 5

void carga(int vector[TAM]);
void compara(int v1[TAM],int v2[TAM]);

int main(){
	
	int vector1[TAM];
	int vector2[TAM];
	
	carga(vector1);
	carga(vector2);
	
	compara(vector1,vector2);
	
}

void carga(int vector[TAM]){
	
	int i;
	
	for(i=0; i<TAM; i++){
			
	printf("Dame el %d numero del vector.\n",(i+1));
	scanf("%d",&vector[i]);
		
	}	
	
}

void compara(int v1[TAM],int v2[TAM]){
	
	int i;
	int contador=0;
	
	for(i=0; i<TAM; i++){
		
		if(v1[i]==v2[i]){
			
			contador++;
		}
	}

	if(contador==TAM){
		
		printf("Los vectores son iguales.\n");
	
	}else{
		
		printf("Los vectores son diferentes.\n");
		
	}

	
}
