#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *iptr;	/***integer type pointer declaration***/
	char *cptr;	/***character type pointer declaration***/
	float *fptr;	/***float type pointer declaration***/
	iptr = (int*)malloc(sizeof(int));	/***memory allocation to integer type pointer***/
	cptr = (char*)malloc(sizeof(char)+1);	/***memory allocation to character type pointer***/
	fptr = (float*)malloc(sizeof(float));	/***memory allocation to float type pointer***/
	
	/*****data input by user in allocated memory*****/
	printf("Enter value in integer type pointer location : \n");
	scanf("%d",iptr);
	printf("Enter value in character type pointer location : \n");
	scanf("%s",cptr);
	printf("Enter value in float type pointer location : \n");
	scanf("%f",fptr);

	/*****Display data inputted by user in allocated memory*****/
	printf("Value in integer type pointer is %d, character type pointer is %s and float type pointer is %f\n",*iptr,cptr,*fptr);

	/*****Display address of allocated memory*****/
	printf("Address value of integer type pointer is %p, character type pointer is %p and float type pointer is %p\n",iptr,cptr,fptr);
	free(iptr);
	free(cptr);
	free(fptr);
	return 0;
}


