#include<stdio.h>

int main()

{
    int a=10 , b=3;
    int option;
    printf(" Plese select the option 1 for Addition\n");

    printf(" Plese select the option 2 for Subtraction\n");

    printf(" Plese select the option 3 for Multiplication\n");

    printf(" Plese select the option 4 for Division\n");

    printf(" Enter your choice: ");

    scanf("%d" , &option);

    switch (option)

    {

        case 1:
    printf(" Addition of %d and %d is %d\n" , a , b , a + b);
    break;

        case 2:
    printf(" Subtracation of %d and %d is %d\n" , a , b , a - b);
    break;

        case 3:
    printf(" Multiplication of %d and %d is %d\n" , a , b , a * b);
    break;

        case 4:
    printf(" Division of %d and %d is %d\n" , a , b , a / b);
    break;

    default:
    printf(" Please enter valid option..!!");
    break;

    }

    return 0;   
}
