#include <stdio.h>
#include<math.h>


float distancia(int p1[2], int p2[2]);
void cargar(int p1[2], int p2[2]);

int main(){
	
	int punto1[2];
	int punto2[2];
	float euclidea;
	
	cargar(punto1,punto2);
	euclidea = distancia(punto1,punto2);
	
	printf("La distancia es: %f\n",euclidea);
		
}

void cargar(int p1[2], int p2[2]){
	
	printf("Dame la x del punto 1: ");
	scanf("%d",&p1[0]);
	
	printf("Dame la y del punto 1: ");
	scanf("%d",&p1[1]);
	
	printf("Dame la x del punto 2: ");
	scanf("%d",&p2[0]);
	
	printf("Dame la y del punto 2: ");
	scanf("%d",&p2[1]);
}

float distancia(int p1[2], int p2[2]){
	
	float resta1;
	float resta2;
	float euclidea;
	
	resta1= p1[0]- p2[0];
	resta2= p1[1]- p2[1];
	
	euclidea= sqrt(pow(resta1,2)+pow(resta2,2));
	
	return euclidea;
	
}
