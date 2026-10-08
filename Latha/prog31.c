#include<stdio.h>
int main()
{
  int m1,m2,m3,m4,m5,total;
  float average;
  scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
  total=m1+m2+m3+m4+m5;
  printf("Total:%d\n",m1+m2+m3+m4+m5);
  average=total/5;
  printf("Average:%.2f",average);
  return 0;
}
  
