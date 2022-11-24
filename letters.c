#include<stdio.h>

int main()
{
    char s[20] = "Today is sunday";
    int l = 1;
    for(int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ' ')
        {
            // l++;
        }
        l++;
    }
    // printf("Number of letters present in the string is %d" , l);

    printf("Number of words present in the string is %d" , l);
}