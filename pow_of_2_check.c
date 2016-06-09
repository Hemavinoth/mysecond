#include <stdio.h>
int main(void) {

	int input,i;
	 scanf("%d",&input);
	for(i=1;i<=input;i=i*2)
			{
			  
				if(i==input)
				{
					printf("%d is the power of 2",input);
					break;
				}
			}
			if(i!=input)
			  printf("%d is not the power of 2",input);
			
	
	
	
	return 0;
}
