#include<stdio.h>
void main()
{
int a,b,c;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
if(a>b)
{
if(a>c)
printf("%d",a);
else
printf("%d",c);
}
else
if(c>b)
printf("%d",c);
else
printf("%d",b);

}
