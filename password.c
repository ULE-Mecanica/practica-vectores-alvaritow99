#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void inicializa(char letras[26]);

int main(int argc, char* argv[]){

	
	srand(time(NULL));
	
	char caracteres[26];
	char datos[9];
	
	inicializa(caracteres);
	
	int i;
	
	for(i=0; i<8; i++){
		
		int aleatorio = rand()%26;
		
		datos [i]= caracteres[aleatorio];
	}
	
	datos[8]='\0';
	
	printf("%s",datos);
	
	
	
}

void inicializa(char letras[26]){
	
	int i;
	for(i=0; i<26; i++){
		
		letras[i]=i+97;
			
	}
	

}
