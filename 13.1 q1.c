#include<stdio.h>

void main()
{
	FILE *pR,*pW;
	
	char n;
	
	pR = fopen("file_1.txt","r");
	
	if(pR != NULL)
	{
		printf("File opened successfully...");
	}
	else
	{
		printf("File can't open...'");
		
	}
	
	pW = fopen("new_1.c","w");
	
	if(pW != NULL)
	{
		printf("File created successfully...");
	}
	else
	{
		printf("File can't create...");
		
	}
	
	n = fgetc(pR);
	while(n != EOF)
	{
		fprintf(pW,"%c",n);
		n = fgetc(pR);
	}
	
}
