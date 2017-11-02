#include<stdio.h>
void main()
{
int a,sum=0;
scanf("%d",&a);
while(a!=0)
{
sum=a+sum;
a--;
}
printf("%d",&sum);
}
