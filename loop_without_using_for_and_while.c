#include<stdio.h>
void main()
{
int a=0;
label:
if(a<5)
printf("Hello");
a++;
goto label;
}
