#include<stdio.h>
int main()
{
  int a;
  scanf("%d",&a);
  
  if(a>=1 && a<=100)
  {
    printf("A is in the range of 1 to 100");
  }
  else
  {
    printf("A is not in the range of 1 to 100");
  }
  return 0;
}
