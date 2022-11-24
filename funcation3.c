#include<stdio.h>

int Addition(){
    int a , b ;
    printf("Enter the value of a:");
    scanf("%d" , &a);

    printf("Enter the value of b:");
    scanf("%d" , &b);

    return a+b;
}

int main()

{
    int s = Addition();

    printf("%d" , s+10);
    
    return 0;
}