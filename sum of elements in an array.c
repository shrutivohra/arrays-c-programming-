#include<stdio.h>
int main()
{
  
int a[10];
  int sum=0;
  for(int i=0;i<10;i++)
  {
    scanf("%d\n",&a[i]);
   
  }
  for(int i=0;i<10;i++)
  {
    sum=sum+a[i];
    
  }
  printf("%d",sum);

    
    return 0;
}
