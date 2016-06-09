#include <stdio.h>

int main(void) {

	 
	 int array[10],i;
	 
	 printf("enter 10 elements of the array\n");
	  for(i=0;i<10;i++)
	   scanf("%d",&array[i]);
	   int max=0,min=0;
	   for( int j=0;j<10;j++)
	   {
	   	
	   	for(i=0;i<10;i++)
	   	{
	   		if(array[max]<array[i])
	   		max=i;
	   	 		else if(array[min]>array[i])
	   				min=i;
	   					else{}
 	   	
	   	}
	   }

	printf("greatest element among 10 values in the array:%d\n",array[max]);
	return 0;
}

  
