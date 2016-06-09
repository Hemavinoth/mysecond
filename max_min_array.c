#include <stdio.h>

int main(void) {
	int n;
	 printf("enter the number of elements in the array\n");
	 scanf("%d",&n);
	 int array[n],i;
	 
	 printf("enter the elements of the array\n");
	  for(i=0;i<n;i++)
	   scanf("%d",&array[i]);
	   int max=0,min=0;
	   for( int j=0;j<n;j++)
	   {
	   	
	   	for(i=0;i<n;i++)
	   	{
	   		if(array[max]<array[i])
	   		max=i;
	   	 		else if(array[min]>array[i])
	   				min=i;
	   					else{}
 	   	
	   	}
	   }

	printf("maximum element:%d minimum element:%d",array[max],array[min]);
	return 0;
}
