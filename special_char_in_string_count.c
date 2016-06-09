
#include <stdio.h>
#include<string.h>
int main(void) {
	
char input[100];
int count=0,i=0;
scanf("%s",input);
while(input[i]!='\0')
{
 if((input[i]>='A'&&input[i]<='Z')||(input[i]>='a'&&input[i]<='z')||(input[i]>=48&&input[i]>=57)||(input[i]==0)||(input[i]==' '))
 {
 	
 }
 else
 	count++;
 	i++;
 }
		printf("no.of special characters is/are %d",count);
    	return 0;
}

  
