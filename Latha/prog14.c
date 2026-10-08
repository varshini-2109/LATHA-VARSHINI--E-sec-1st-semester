#include<stdio.h>
int main()
{
  int a,b,sum,difference,quotient,reminder;
    printf("Enter two integers:");
    scanf("%d %d",&a,&b);
 
 sum=a+b;
    printf("Sum:%d\n",sum);
 
 difference=a-b;
    printf("Difference:%d\n",difference);
 
 quotient=a/b;
    printf("Quotient:%d\n",quotient);
 
 reminder=a%b;
    printf("Reminder:%d\n",reminder);
 return 0;
 }
