#include <stdio.h>

int main()
{
    int n,i,j,flag=0;
    printf("enter the number of elements  array");
    scanf("%d",&n);
    if(n<=0)
     printf("0");
     else
     {
          int a[n];
          printf("enter the elements in the array");
          for(i=0;i<n;i++)
          {
            scanf("%d",&a[i]);
           
          }
          
              for(i=0;i<n;i++)
              {
              	for(j=i;j<n;j++)
              	{
              		 
              		 
              		if(a[i]+a[j]==0)
                     {
                        printf("%d %d\n",a[i],a[j]);
                         flag=1;
                       
                     }
                     
                }
              }
              if(flag==0)
              printf("there is no two  elements in the array give sum as zero");
     }
  
    return 0;
}

   

