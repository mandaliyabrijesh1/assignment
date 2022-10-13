#include<stdio.h>

int main()

{

    int  Sunday , Monday , Tuesday , wednesday , Thursday , Friday , Saturday; 
    int option;

    printf("Today is Sunday\n");

    printf("Today is Monday\n");

    printf("Today is Tuesday\n");

    printf("Today is Wednesday\n");

    printf("Today is Thursday\n");

    printf("Today is Friday\n");

    printf("Today is Saturday\n");

   printf("Enter your choice: ");

   scanf("%d" , &option);

   switch(option)

   {
case 1:
   printf("Sunday\n");
   break;

case 2:
   printf("Monday\n");
   break;

case 3:
   printf("Tuesday\n");
   break;

case 4:
   printf("Wednesday\n");
   break;

case 5:
   printf("Thursday\n");
   break;

case 6:
   printf("Friday\n");
   break;

case 7:
   printf("Saturday\n");
   break;

defult:
   printf(" please enter valid option..!!");
   break;

   }
   return 0;
}