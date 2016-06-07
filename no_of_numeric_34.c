#include <stdio.h>
int count_str(char strin[100])
{
    int i=0,num=0;
    
    while(strin[i]!='\0')
    {
    	if(strin[i]>='0'&&strin[i]<='9')
              num++;
                   i++;
    }
    return num;
        }
int main(void) {
  char strin[100];
    scanf("%[^\n]s",strin);
        printf(" number of numeric characters in \"%s\" is %d",strin,count_str(strin));
                
    return 0;
}
