#include<stdio.h>

int main()
{
    int n = 234567 , rem, odd=0 , even=0;

    while (n!=0)
    {
        rem = n%10;
        if(rem%2==0)
        {
            even = even+rem;
        }
        else
        {
            odd = odd + rem;
        }
        n = n/10;
    }
    printf(" Sum of even digit is %d\n" , even);

    printf(" Sum of odd digit is %d\n" , odd);

    return 0;
}