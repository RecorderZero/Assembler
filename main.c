#include <stdio.h>

#include "OPTable.h"

int main(void)
{
	//Readfile: Determine wherether the file can be found or not. 
	FILE *fptr;
	char filename[100];
	printf("Enter your filename: ");
	scanf("%s",filename);
	fptr = fopen(filename,"r");
	if(fptr)
	{
		printf("File opening.\n");
	}
	else
	{
		printf("File can't be found in this directory.\n");
		return 1;
	}
	//open file
	return 0;
}
