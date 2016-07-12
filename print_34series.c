#include <stdio.h>
int print_34(int n)
{
	if(n==0)
	 return -1;
	 
	if(n%2==0)
	printf("3");
	if(n%2!=0)
	printf("4");
    
	print_34(n>>2);

}

int main()
{
    int n,l;
    printf("enter the num");
    scanf("%d",&n);
    if(n<=0)
     printf("0");
     else
     {
     	l=print_34(n+1);
     }
     
    
    
        return 0;
}

   

