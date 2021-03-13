#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENG 100

int countingWords(char cadena[]){
	int contador = 0;
	int i = 0;
        int largo = strlen(cadena);
     
        
	for( i = 0; i < largo ; i++){
     
		if(cadena[i] == ' ' && cadena[i+1] != ' '){
                contador ++;
        }
            
        
   	}
   
   return contador;
}

int moveToWord(char cadena[], int wordNum){
	
	int num = countingWords(cadena);
	int position = 0;
	int countWord = 0;
	
	if(wordNum < num || wordNum >= 0){
	
		for(int i=0; i<strlen(cadena) && countWord!=wordNum; i++){
			if(cadena[i]==' '){
				position++;
			}else if(cadena[i-1]==' ' && cadena[i]!=' '){
				countWord++;
				position++;
			}else{
				position++;
			}

		}
		
		if(position!=0) position--;
		
	
	}else{
		exit(1);
	}
	
	return position;
	
}


int wordLength(char cadena[], int start){

	int cont = 0;

	for(int i=start;i<strlen(cadena);i++){
		if(cadena[i]!=' '){
			cont++;
		}else 
			break;
	}
	
	return cont;

}


int main(){

	char str[MAX_LENG];
	printf("Introduce una cadena:\n");
	scanf("%[^\n]",str);
	int words = countingWords(str); words++;
	int index[words];
	int length = strlen(str);
	int count = 0, actualWord = 0;
	int bestLength = 0, bestWord = 0;
	int lastLength = 20;

	
	for(int j=0; j<words; j++){
	
		for(int i=0; i<length; i++){
		
			if(str[i]!=' '){
				count++;
			}else if(str[i-1]!=' ' && str[i]==' '){
				count = 0;
				actualWord++;
			}
			
			if(count >= bestLength && count <= lastLength && index[actualWord] != 1){
				bestLength = count;
				bestWord = actualWord;
			}
		}
	
		index[bestWord]=1;
		int position = moveToWord(str, bestWord);
		int wLength = wordLength(str, position);
			
		char word[MAX_LENG] = "";
		
		for(int i = 0; i<wLength; i++, position++){
			word[i] = str[position];
		}
		
		printf("%s\n", word);
		
		lastLength = bestLength;
		count = 0;
		bestLength = 0;
		actualWord = 0;
		bestWord = 0;
	}
	
	return 0;
}



