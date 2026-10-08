#include<stdio.h>
int main()
{
  int a;
    scanf("%d",&a);
    printf("%d",a);
  float b;
    scanf("%f",&b);
    printf("%f");
  double c;
    scanf("%lf",&c);
    printf("%lf",c);
  char ch;
    scanf("%c",&ch);
    printf("%c",ch);
  char name[32];
    scanf("%[^\n]",&name);
  printf("%s",name);
 return 0;
 }


