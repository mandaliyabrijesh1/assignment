#include<stdio.h>

int main()

{

    int a[2][2] = {{1 , 2},{3 , 4}};
    int b[2][2] = {{12,42},{31,44}};

    int c[2][2];
    printf("\n Addition of the matrix is \n");

    for(int i = 0; i < 2;i++)

    {
        for(int j = 0 ; j < 2;j++)
    
    {
        c[i][j] = a[i][j] + b[i][j]; //Addition

        //c[i][j] = a[i][j] - b[i][j]; //Subtracation
        
        printf("%d\t",c[i][j]);
    }
    printf("\n");

    }
       return 0;
}