#include<stdio.h>

int main()

{
    float simpleIntrest = 10.45;
    printf("The value of a is %.3f\n" , simpleIntrest);

    int a = 10 , b =50;
    int c = a+b;
    printf(" Addition of %d and %d is %d\n" , a , b , a+b);

    int d = 10 ,e = 80;
    int f = a*b;
    printf("Multiplication of %d and %d is %d\n" , d , e , d*e);

    int g = 20 , h = 45;
    int i = g/h;
    printf("Division of %d and %d is %d\n" , g , h , g/h); 

    int j = 50 , k = 80;
    int l = j-k;
    printf("Subtracation of %d and %d is %d\n" , j , k , j-k);

    int m = 10 , n = 2;
    int o = m%n;
   printf("Moduls of %d and %d is %d\n" , m , n , m%n);

    return 0; 

}