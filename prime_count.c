#include <stdio.h>
int main(void) {
	int num1,num2,count=0;
	int i,flag=0,j;
	scanf("%d %d",&num1,&num2);
	if( num1 <0 &&num2<0)
	printf("0");
	else
	{
	for(j=num1;j<num2;j++)
	{
	for(i=2;i<=j/2;i++)
	{
		if(j%i==0)
		{
			 flag=1;
			 break;
		}
	}
	if(flag!=1)
	   count++;
	   	flag=0;
	   	
	}
	printf("%d",count);
	}
		return 0;
}
