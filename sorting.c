#include<stdio.h>

int main()

{
    int a[7] = {34 , 12 , 45 , 9 , 78 , 26 , 10};
    int i , j , temp;
    for(i=0;i<7;i++){
        for(j=i+1;j<7;j++){
            if(a[i]<a[j]){
                temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        printf("%d ", a[i]);
    }
    return 0;
}