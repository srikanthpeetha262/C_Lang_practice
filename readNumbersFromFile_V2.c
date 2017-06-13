/*
##########################################################################
Author: Srikanth Peetha; [@srikanthpeetha262]
About: Reading integer numbers from a file and printing it on the screen
- program was written using the software Dev-C++
##########################################################################
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp_read;
	int i = 0;
	int name[10];
	
	fp_read = fopen("qwerty.txt","r");
	
	if (fp_read == NULL)
	{
		printf("\nfile cannot be opened");
	}
	
	else
	{
		while (!feof(fp_read))
		{
			fscanf(fp_read, "%d", &name[i]);
			printf("array value %d: %d \n",i, name[i]);
			i++;
		}
		fclose(fp_read);
	}

	return 0;

}

