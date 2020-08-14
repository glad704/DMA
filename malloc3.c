#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *ptr,*p;
	static int i;
	int NI;
	printf("Enter the NI size : \n");
	scanf("%d",&NI);
	printf("Address occupied by PTR pointer is: %p\n",ptr);
	ptr = (int*)malloc(NI*sizeof(int));
	p=ptr;
	printf("Address occupied by PTR pointer is: %p\n",ptr);
	for(i=0;i<NI;i++)
	{
		printf("Enter the BID device number in allocated memory : \n");
		scanf("%d",ptr);
		ptr++;
	}
	printf("Address occupied by PTR pointer is: %p\n",ptr);
	ptr=p;
	for(i=0;i<NI;i++)
	{
		printf("Entered BID device in allocated DMA is : %d\n",*ptr);
		ptr++;
	}
	printf("Address occupied by PTR pointer is: %p\n",ptr);
	free(p);
	return 0;
}
