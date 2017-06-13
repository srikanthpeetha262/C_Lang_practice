/*
######################################################################
Author: Srikanth Peetha
About: Reading data from a text file and printing it on th screen
- program was written using the software Dev-C++
######################################################################
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp_read;
	int i;
	char name[10];
	
	fp_read = fopen("qwerty.txt","r");
	
	if (fp_read == NULL)
	{
		printf("\nfile cannot be opened");
	}
	
	else
	{
		printf("\nthe contents of the file are:");
		fscanf(fp_read, "%s", name);
		
		while (!feof(fp_read))
		{
			printf("\n%s", name);
			fscanf(fp_read, "%s", name);
		}
	}

	return 0;

}

