#include<stdio.h>
#include<math.h>
#define PI 3.1416
int main()

{
float x;
float y;
float z;
float angle1 ;
float angle2 ;

float rad;


printf("Please input angle1 value \n");
scanf("%f", &angle1);
printf("Please input angle2 value \n");
scanf("%f", &angle2);
printf("Your result  is: \n");

rad = PI/180;
x = cos(angle1*rad);
y = sin(angle2*rad);
z = y/x;
//printf("%d", x);
//printf("%d", y);
printf("%f", z);

return(0);
}
