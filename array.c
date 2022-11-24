#include<stdio.h>

int main()

{

    int a[5];
    for(int i = 0; i < 5;i++)
    {
        printf("Enter the value of %d index position:" , i);

        scanf("%d" , &a[i]);
    }

        //int a[] = {10,20,30,40,50};

        printf("\n Your array is \n");

        for(int i=0;i<5;i++)
        {
            printf("%d" , a[i]);
        }
    
    return 0;
}