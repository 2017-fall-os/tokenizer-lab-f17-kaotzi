#include <stdio.h>
#include <stdlib.h>
#include "stringanizer.h"

int main()
{
    char string[] = "123456  5  6   ";
    char *tok1= copyString(string);
	printIt(string);
	printIt(tok1);
	//int count= wordCount1(string);
	//int letters= letterCount(string);
	//printf("the count of words is: %i and the letter count is: %i",count,letters);

    
    printf("end found");
    return 0;
}
