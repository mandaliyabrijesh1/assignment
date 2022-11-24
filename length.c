#include<stdio.h>

int main()

{
    int l=0,i;
    char s[40] = "My Name is Brijesh Mandaliya";
    for(i =0 ;s[i]!='\0';i++){
        l++;
    }
    printf("Length of the string is %d" , l);
    return 0;
}