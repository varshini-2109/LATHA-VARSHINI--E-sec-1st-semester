#include<stdio.h>
int main()
{
  int a;
  scanf("%d",&a);
  if(a%5==0 && a%10==0)
  {
    printf("A is divisible by 5 and 10");
  }
  else
  {
   printf("A is not divisible");
  }
  return 0;
}
