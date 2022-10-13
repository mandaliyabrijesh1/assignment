#include<stdio.h>

int main()

{
    int a = 5 , b = 6;

    printf("%d\n" , a < 5 || b > 7);

    printf("%d\n" , a < 6 || b > 7);

    printf("%d\n" , a < 5 || b > 7);

    printf("%d\n" , a > 4 || b < 5);

    return 0;

}