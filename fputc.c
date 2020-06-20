#include<stdio.h>
#include<string.h>

//Writing Characters to Files
// fputc() = (character,filep);
//First parameter is a character and the second parameter is file pointer.

int main (){
	
	char article[30]="Science of Programming";
	int lenght=strlen(article);
	int i;
	
	
	FILE *filep=fopen("science.txt","w");
	
	if(filep==NULL){
		printf("The file could not be created.");
	}
	else{
		for(i=0;i<lenght;i++){
			printf("Printed character: %c\n",article[i]);
			fputc(article[i],filep);
		}
	}
	printf("The file was successfully printed.");
	
	fclose(filep);//We closed the file.
	   
	return 0;
}


