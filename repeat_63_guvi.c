#include <stdio.h>
int  count_str(char strin[100])
{
    int i=0,count=0;
    while(strin[i]!='\0')
    {	
    	if(strin[i]==' ')
        	 count++;
        	   i++;
    }
    return count+1;
        }
int main(void) {
    char strin[100];
     scanf("%[^\n]s",strin);
       printf(" number of word in \"%s\" is %d",strin,count_str(strin));
               
    return 0;
}
