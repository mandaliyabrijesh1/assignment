#include<stdio.h>

int Addition(int a , int b){
    return a+b;
}

int main()

{
    int s = Addition(5 , 6);
    
    printf("%d" , s+10);

    return 0;
}