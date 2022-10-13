#include<stdio.h>

int main()

{
    int n = 73421 , rem , sum = 0 , r;

    r = n%10;

    while (n!=0)
    {
        rem = n%10;
        n = n/10;
    }

    printf("Sum is %d" , rem+r);

return 0;
}