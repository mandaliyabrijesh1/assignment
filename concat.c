#include<stdio.h>

int main()

{
    char s1[30] = "tops";

    char s2[20] = "tech";

    int l1 = strlen(s1);

    int l2 = strlen(s2);

    for(int i = 0;i<=11+12;i++)
    {
        // s1[l1+i] = s2[i];
         s1[i] = s2[i];
    }
    // printf("Concated string is %s" , s1); //concat

     printf("Copied string is %s" , s1); //copy

    return 0;
}