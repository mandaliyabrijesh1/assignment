#include<stdio.h>

int main()

{
    int i , j;
    int a[3][3] = {{1 , 2 , 3} , { 4 , 5 , 6} , { 7 , 8 , 9 }};
    printf("\n Matrix is \n");
    for(i = 0;i<3;i++)
    {
        for(j = 0; j<3;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    int sum = 0;
    for(i = 0;i<3;i++)
    {
        {
            for(j=0 ; j<3; j++)
            {
                if (i==j)
                {
                    sum = sum + a[i][j];
                }
            }
        }

    }
    printf("sum of the diagonal of the matrix is %d ",sum);

    return 0;
}