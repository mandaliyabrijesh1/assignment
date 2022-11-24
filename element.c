#include<stdio.h>

int main()

{
    int ele , flag = 0 , i;
    printf("Enter the value of desired element: ");
    scanf("%d" , &ele);
    int a[7] = {34 , 12 , 45, 9 , 78 , 26 , 10};
    for(i = 0 ; i < 7 ;i++)
    {
        if (a[i] == ele)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("Element is found at %d index position" , i);
    }
    else
    {
        printf("Desired element is not found");
    }
        return 0;
}