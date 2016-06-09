#include <stdio.h>

int main(void) {
	int a,b;
	int *ptr_a=&a,*ptr_b=&b;
	printf("enter two numbers:\n");
	   scanf("%d %d",ptr_a,ptr_b);
	    printf("sum of two numbers:");
	      printf("%d",*ptr_a+*ptr_b);
	
	return 0;
}
