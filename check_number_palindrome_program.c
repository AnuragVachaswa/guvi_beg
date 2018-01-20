#include<stdio.h>
int main()
{
int i,j,key,l=0;
scanf("%d",&key);
i=key;
while(i>0)
{
j=i%10;
l=l*10+j;
i=i/10;
}
if(l==key)
printf("yes");
else
printf("no");

return 0;
}
