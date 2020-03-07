#include <stdio.h>
#include <math.h>
//find armstrong number 

int main()
{
int x,y,z,temp,sum;
scanf("%d",&x);
temp=x;
while (x>0)
{
y=x%10;
z=y*y*y;
sum=sum+z;
x=x/10;

}
x=temp;
printf("%d",sum);





return 0;
}
