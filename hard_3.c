#include <stdio.h>

int main()
{
    int n,i;
    printf("enter the number of elements  array");
    scanf("%d",&n);
    if(n<=0)
     printf("0");
     else
     {
          int a[n];
          printf("enter the elements in the array");
          for(i=0;i<n;i++)
            scanf("%d",&a[i]);
              for(i=0;i<n;i++)
              {
                    if(i==a[i])
                      printf("%d equals its  index %d\n",a[i],i);
              }
     }
  
    return 0;
}
