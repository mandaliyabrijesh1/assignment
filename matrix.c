#include<stdio.h>

int main()

{
    int a[3][3];
    int i , j ;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter the value of a[%d][%d] index position: ", i ,j);
            scanf("%d" , &a[i][j]);
        }
    }

    printf("\n Your matrix is \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t" , a[i][j]);
        }
        printf("\n");
    }
    printf("\n Transpose of the matrix is \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t" , a[j][i]);
        }
        printf("\n");
    }

    return 0;
}