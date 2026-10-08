#include<stdio.h>
int main()
{
  int a;
  printf("Enter an integer:");
  scanf("%d",&a);
  
  printf("%d\n",a++);//3
  printf("%d\n",++a);//5
  printf("%d\n",a--);//5
  printf("%d",--a);//3
  return 0;
}
