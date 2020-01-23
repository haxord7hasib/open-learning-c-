#include<stdio.h>
#include<math.h>
int main()

{

int day;
int week;
int month;
int year;
int reminder1;
int reminder2;
char nahid;



printf("Please Enter Day ");
scanf("%d" , & day );


    year = day/365;
    reminder1 = day%365;
    month = reminder1/30;
    reminder2 = reminder1%30;
    week = reminder2/7;
    day = reminder2 %7;

    printf("Year:\n");
    printf("%d\n",year);
    printf("Month:\n");
    printf("%d\n",month  );
    printf("WEEK:\n");
    printf("%d\n",week);
    printf("Day:\n");
    printf("%d\n",day );

    if( day>1)
    {
         printf("days");
    }
   else {
    printf("Nahid vai er marka ki ");
    scanf("%c" , & nahid);
    printf("%c", nahid );
   }



return(0);
}
