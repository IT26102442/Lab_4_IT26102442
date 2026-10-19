#include <stdio.h>
int main (void)
{
int section1_mark,section2_mark,section3_mark;
float avg;

printf("Enter First Section Mark: ");
scanf("%d",&section1_mark);

printf("Enter Second Section Mark: ");
scanf("%d",&section2_mark);

printf("Enter Third section Mark: ");
scanf("%d",&section3_mark);

avg=(section1_mark+section2_mark+section3_mark)/3.0;

if ((section1_mark>=70) && (section2_mark>=70) && (section3_mark>=70) && (avg>=75))
{
printf("PASS");
}
else
{
printf("FAILL!!!");
}
return 0;
}
