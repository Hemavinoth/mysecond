#include<stdio.h>
   int power(  int k)  {              //function that returns the its place like tenths/hundredths
                 int i=0,num=1;
                     for(i=1;i<k;i++)
                       num*=10;
                          //printf("returning from the power %d",num);
 return num;
 }

 int convert(int char_position,int length,char a[]) //function that coverts string into number 
 {
 int i,num1=0,k=length-char_position,j;   //k denotes number of digits in the number.
    for(i=char_position+1;i<=length;i++,k--)
     {
       if(k>0)
          num1+=(a[i]%48)*power(k);                       //converting string to a integer.
         }
        return num1;
 }

void main()
 {
 char a[100];
  int count=0,j;
    int length=0,i=0,char_position;
      scanf("%s",a);                 //reads the input_string
      while(a[i]!='\0')
      {
      if(a[i]>='a'&&a[i]<='z')
      {
     char_position=i;
      i++;
      }
        // printf("char postion;%d\n",char_position);
        while(a[i]>=48&&a[i]<=57)
        {
        i++;                                               //counting digits in numbers 

       }

       length=convert(char_position,i-1,a);            
       // printf("%d",length);
        for(j=0;j<length;j++)
           printf("%c",a[char_position]);

       }
        getch();
    }
