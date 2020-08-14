#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	static int n;		/***integer type variable declaration for size of DMA at run time***/
	char *cptr;	/***character type pointer decalaration to hold address of dynamically allocated memory***/

	printf("Enter the size of memory to hold character: \n");
	scanf("%d",&n);

	/*****Memory allocation to pointer and type casting of address*****/
	cptr = (char*)malloc(n*sizeof(char)+1);

	printf("Input the text in the allocated memory :\n");
	scanf("%s",cptr);

	/*****Display the inputted text*****/
	printf("Inputted text is %s\n",cptr);
	free(cptr);
	return 0;
}
