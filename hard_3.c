#include <stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  for(i=0;i<n;i++)
  {
        if(i==a[i])
          printf("%d equals its  index %d\n",a[i],i);
  }
  
  
    return 0;
}
