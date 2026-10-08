#include<stdio.h>
int main()
{
 int a,weeks,days;
 printf("Enter number of days:");
 scanf("%d",&a);
 weeks=a/7;
 days=a%7;
 printf("Weeks:%d\n",weeks);
 printf("Days:%d",days);
 return 0;
}
