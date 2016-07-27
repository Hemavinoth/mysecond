#include <stdio.h>
 int main(void) {
  int sum=1,n,i;
   printf("enter the number\n");
    scanf("%d",&n);
    if(n<0)
    printf("negative ");
    return 0;
    if(n==0||n==1)
    printf("1\t");
    else
    {
     for(i=1;i<=n;i++)
     {
     	
     	sum*=i;
     
     }
     	printf("%d\t",sum);
    }
	return 0;
}
