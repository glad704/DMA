#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a,*ptr,i,*p,sum=0;
	printf("Enter the element of array size : \n");
	scanf("%d",&a);
	ptr = (int*)malloc(a*sizeof(int));
	p=ptr;
	if(ptr==NULL)
	{
		printf("Error!! Memory not allocated\n");
	}
	printf("Current pointer location by ptr is: %p\n",ptr);
	printf("Current pointer location by p is: %p\n",p);
	for(i=0;i<a;i++)
	{
		printf("Enter the value of %dth element in array : \n",i+1);
		scanf("%d",ptr);
		ptr++;
	}
	ptr=p;
	printf("Display the elements of array : \n");
	for(i=0;i<a;i++)
	{
		printf("%d\n",*p);
		p++;
	}
	printf("Current pointer location by ptr is: %p\n",ptr);
	printf("Current pointer location by p is: %p\n",p);
	p=ptr;
	for(i=0;i<a;i++)
	{
		sum=sum+(*ptr);
		ptr++;
	}
	printf("Summation of array value is : %d\n",sum);
	
	return 0;
}
