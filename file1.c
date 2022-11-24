#include<stdio.h>

int main()

{ 
    FILE *p;
    p =
    fopen("index.txt" , "r");
    int a;
    fscanf(p , "%d" ,&a);
    printf("The value of a is %d" , a);
    fclose(p);
    return 0;
}