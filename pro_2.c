#include <stdio.h>
int a[10];
int fun(const void* a,const void *b)
{
   return *(int*)a-*(int*)b;
   }

int main(void) {
	int num,i=0,k;
	scanf("%d",&num);
	scanf("%d",&k);
	if(num<0)
	printf("0");
	else
	{
	while(num)
	{
		a[i++]=num%10;
		num/=10;
		
	}
	
	qsort(a,i,sizeof(int),fun);

    for(;k--;i--)
	{
		
	}
	for(k=0;k<i;k++)
	{
		printf("%d",a[k]);
	 }
	}
	// your code goes here
	return 0;
}
