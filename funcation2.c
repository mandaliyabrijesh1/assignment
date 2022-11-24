#include<stdio.h>

/*void Addition(int a , int b){
    printf("Addition of %d and %d is %d\n" , a , b , a+b);
}

void Subtraction(int a , int b){
    printf("Subtractoin of %d and %d is %d\n" , a , b , a-b);
}

void Multiplication(int a , int b){
    printf("Multiplication of %d and %d is %d\n" , a , b , a*b);
}

void Division(int a , int b){
    printf("Division of %d and %d is %d\n" , a , b , a/b);
}*/

void fact(int n){
    int fact=1,i;
    for(i=n;i>=1;i--){
        fact *= i;
    }
    printf(" Factorial of %d is %d\n",n,fact);
}

int main()

{
    
    //Addition(15 , 1);
    //subtraction(15 , 1);
    //multiplication(15 , 2);
    //Division(30 , 2);
    //Division(15 , 2);
    fact(5);

    
    return 0;
}