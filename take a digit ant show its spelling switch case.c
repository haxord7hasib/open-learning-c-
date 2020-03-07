#include <stdio.h>
#include <math.h>
//take a digit ant show its spelling switch case

int main()
{
int digit;
scanf("%d", & digit);

switch(digit)
{
case 0:
printf("zero");
break;
case 1:
printf("one");
break;
case 2:
printf("two");
break;
case 3:
printf("Three");
break;

default:
printf("Invalid");
break;
}
return 0;
}
