#include <stdio.h>
#include<string.h>
int main(void) {
	
	char string1[100],string_2[100];
	scanf("%s %s",string1,string_2);
       int i;
      if(strlen(string1)!=strlen(string_2))
          printf("%s  %s are not equal",string1,string_2);
        else
        {
        	int count=0;
           for(i=0;i<strlen(string1);i++)
           {
           	if(string1[i]==string_2[i])
           	  count++;
           }
        
        if(count==strlen(string1))
            printf("%s ,%s are equal",string1,string_2);
         else
           printf("%s, %s are not equal",string1,string_2);
           }
        
	return 0;
}
