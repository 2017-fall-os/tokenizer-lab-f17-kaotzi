#include <stdio.h>
#include <stdlib.h>
//this is header stuff
int letterCount(char *);


//this is a method to copy strings inpired by Ana Garcia
char * copyString(char *string){
    	int length = letterCount(string);
	//printf("length of string is currently set to: %i",length);
	char * copy = (char *)malloc(length+1);
	printf("malloced!\n");
    	int index = 0;
    	while(string[index]){
    		copy[index] = string[index];
    		index++;
		if(string[index]==' ')
		{
			return copy;//protects from accidental overwritting outside of words scope. 
		}
    	}
	return copy;
}


//simple print command to get a full string printed to the screen
int printIt(char *input){
 	int index =0;
	printf("\nyour single word was: ");
	while(input[index]!=0)
	{
		printf("%c",input[index]);
		index++;
    	}
	printf("\n");
}

//counts the different words to be tokenized
int wordCount1(char *input){
	int index =0;
 	int count=0;
 	int words=0;
	while(input[index]!='\0')
	{
		if(input[index]==' ')
			{
				count=0;
		}else{
			if(count==0)
				{
					words++;
				}		
			count++;
		}
	index++;
    	}
	return words;
}

//this returns the count of letters used in a single word. NOTE must start with a none space symbol
int letterCount(char *input){
 	int index =0;
 	int count=0;
	while(input[index]!='\0')
	{
		if(input[index]==' ')
		{
			return count;
		}else{
			count++;
		}
	index++;
    	}
	return count;
}

//the main deal
int main()
{
    //char string[] = "123456  5  6   ";
    char *activeWord=copyString(string);
    
	printIt(string);
	printIt(activeWord);
	

    
    //printf("end found");
    return 0;
}
