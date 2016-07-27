#include <stdio.h>
#include<math.h>
int a[10];


void print(int n,int k1)
{
//	printf("n%d k%d",n,k1);


	  if(k1)
	  {
	  
	       print(n/2,--k1);
	    	 if(n%2==0||n==0)
	    	    printf("0");
	    	 else
	              printf("1");
	 }
	  
}
int main(void) {
	int num,i,k;
	scanf("%d",&k);
    
	if(num<0)
	printf("0");
	else
	{
	num=pow(2,k);
	
	for(i=0;i<num;i++)
    	{
    	print(i,k);
    	printf("p\n");
	}
	}
	return 0;
}
