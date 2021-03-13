#include <stdio.h>
#include <stdlib.h>

int main(){

	int sum=0, c=0, n=0, c2=0;
	FILE *myFile;
	
	myFile = fopen("in.txt", "r");
	
	if(myFile == NULL){
		printf("Error Reading File\n");
		exit(1);
	}
	
	while(!feof(myFile)){
	
        	fscanf(myFile, "%d", &c);
        	
        	printf("Sum of numbers %d and %d is ", sum, c);
      
      		c2 = sum;
      		
      		if( c==sum ) break;
      
      		c+=c2;
        	
        	sum = c;
        	
        	printf("%d\n", c);
	
	}
	
	printf("\nFinal sum is: %d\n", sum);
	
	fclose(myFile);
	
	return 0;
	
}
