#include <stdio.h>
#include<string.h>
int main(void) {
	int n;
	 printf("number of words ");
	 	scanf("%d",&n);
	 		int i,count=0,length_range;
	 		char input[n][100];
	 		 for(i=0;i<n;i++)
	 		 {
	 		 	scanf("%s",input[i]);
	 		 }
		 printf("enter the input2,length range\n");
		  scanf("%d",&length_range);
	    	 for(i=0;i<n;i++)
	 		 	if(strlen(input[i])==length_range)
 						count++;
 	printf("%d",count);
    	return 0;
}

  
