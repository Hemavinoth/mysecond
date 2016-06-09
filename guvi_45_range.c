#include <stdio.h>
#define range 1000
int main(void) {
    
	int input,i;
	while(1)
	{
	 scanf("%d",&input);
	  if(input>range)
	  {
	  	printf("ERROR!!!!!\n%d is not in range of %d\n enter a valid input\n",input,range);
	  	continue;
	  	
	  }
	  else
	  {
	    printf("entered value with in the range ,no error");
	    break;
	}
	}
	
	return 0;
}
