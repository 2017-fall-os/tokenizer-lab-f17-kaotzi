#include <stdio.h>
#include <stdlib.h>


int wordLength(char *start){

int words=0;
int count=0;
   while(start[count]!=0)
     {
	
  printf("char = %c words = %i count = %i\n",start[count],words, count);
      if(start[count]!=' ')
      {
           count++;
      }
	else{
		if(count!=0)
		{
           		words++;
           		//count++;
      		}
	}
   start++;
   }

 
return words;

}


char * copyString(char *inputString){
    int length = sizeof(inputString);
    int wl= wordLength(inputString);

    printf("length of word was:%i or %i\n",wl,length);
    char * copy = (char *)malloc(length+1);
    printf("malloced!\n");
    int index = 0;
    while(inputString[index]){
    copy[index] = inputString[index];
    index++;
    }
     printf("our word was: ");
     for(int i = 0; i < length; i++){
        printf("%c",copy[i]);
     }
}

int printIt(char *input){
 int index =0;
while(input[index]!=0)
	{
		printf("%c",input[index]);
		index++;
    	}
printf("\n");
}


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



int main()
{
    char string[] = "      ";
    //copyString(string);
	printIt(string);
	int count= wordCount1(string);
	printf("%i",count);

    
    printf("end found");
    return 0;
}
