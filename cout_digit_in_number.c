#include<stdio.h>
void main()
{
int a,i=0;
scanf("%d",&a);
while(a>0)
{i++;
a=a/10;
}
printf("%d",i);
}
