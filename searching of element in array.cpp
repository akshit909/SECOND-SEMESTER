#include<stdio.h>
int main()
{
	int a[5],i,n,flag=0;
	printf("Enter the elements of array:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
		for(i=0;i<5;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("Enetr the element you want to search:\n");
	scanf("%d",&n);
    for(i=0;i<5;i++)
    {
    	if(a[i]==n)
    	{
    		flag=1;
    		break;
		}
	}
	if(flag==1)
	{
		printf("Element found");
	}
	else
	printf("Element not found"); 	
	}
	
	
