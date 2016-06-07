#include <stdio.h>
#include<string.h>
int count_str(char strin[100])
{
    int i=0;
    
    while(strin[i]!='.')
          i++;
        if(i==strlen(strin))
			 return 0;
			 else
    			return i;
   
        }
int main(void) {
  char strin[100];
scanf("%[^\n]s",strin);

    int i=count_str(strin);
    if(i!=0)
    {
    	printf("extension is:");
   for(i=i+1;strin[i]!='\0';i++)
   {
   	printf("%c",strin[i]);
   } 
    }
    else
     printf("there is no extension in the entered word");
    return 0;
}
