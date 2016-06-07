#include <stdio.h>
int  count_str(char strin[100])
{
    int i=0;
    while(strin[i]!='\0')
      i++;
    return i;
        }
int main(void) {
   char strin[100];
      scanf("%[^\n]s",strin);
       printf(" number of characters in \"%s\" is %d",strin,count_str(strin));
                
    return 0;
}
