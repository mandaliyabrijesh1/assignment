#include<stdio.h>

int main()

{
    int a[7]=
    {34,12,45,9,78,26,10};

    int max = a[0];

    for(int i=0;i<7;i++){
        if(a[i]>max){
            max = a[i];
        }
    }
    printf("Maximum value of the array is %d\n" , max);
    
    return 0;
}