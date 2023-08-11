#include<stdio.h>

void main()
{
	FILE *ptr;
	
	int i,j;
	
	ptr = fopen("div_file.txt","w");
	
	if(ptr!=NULL)
	{
		printf("File created successfully...");
		for(i=1;i<=50;i++)
		{
			if(i%3==0 && i%5==0){
				char a[50];
				int len=sprintf(a,"%d\n",i);
				
				for(j=0;j<len;j++){
					fputc(a[j],ptr);
				}
			}
	    }
		
	}
	else
	{
		printf("File can't create...");
	}
		
}
