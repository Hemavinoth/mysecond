#include <stdio.h>
#include<math.h>

int main(void) {
	char str[30];
	 scanf("%s",str);
	 int n=strlen(str),i=n-1;
	
	  
	    while(i>=0)
	    {
	    	printf("%c",str[i]);
	    	i--;
	    }
	  
	return 0;
}
