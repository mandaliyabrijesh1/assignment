#include<stdio.h>
#include<string.h>

int main()

{
    char s1[20] = "tops";
    char s2[20] = "tech";

    strcat(s1 , s2);
    printf("%s" , s1);

    // strcpy(s1 , s2);
    // printf("%s" , s1);
    

    return 0;
}