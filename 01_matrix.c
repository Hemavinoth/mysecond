#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	scanf("%d",&n);
	if(n<=0)
	printf("0");
	else
	{
	int a[n][n],b[n][n],i,j,k,flag=0;
	printf("enter 0 and 1s ");
	  for(i=0;i<n;i++)
	  {
	  	 for(j=0;j<n;j++)
	  	  {
	  	  
	  	     	scanf("%d",&a[i][j]);
	  	  }
	  }
	  
	  for(i=0;i<n;i++)
	  {
	  	 for(j=0;j<n;j++)
	  	  {
	  	
	  	if(a[i][j]==0)
	  	  	{ 
	  	    	
	  	  	     for(k=0;k<n;k++)
	  	  	     {
	  	  	     	 b[i][k]=0;
	  	  	     	 	
	  	  	     	 b[k][j]=0;
	  	  	     
	  	  	     	 } 
	  	  	     break;
	  	  	     }
	  	  	else
	  	  	b[i][j]=a[i][j];
	  	  	  	  }
	  	  	  	  
	  }  
	
	for(i=0;i<n;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
		{
			printf("%d ",b[i][j]);
		}
		
	}
	
	}	
	return 0;
}
