#include<stdio.h>
#include<string.h>

int main()
{
    int l;
    char s[20] = "hello";
    l = strlen(s);
    for(int i=1-1;i>=0;i--)
    {
        printf("%c",s[i]);
    }
    strrev(s);
    printf("%s" , s);
    return 0;

    }