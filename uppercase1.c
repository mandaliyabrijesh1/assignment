#include<stdio.h>
#include<string.h>

int main()

{
    char s[20] = "Hello World";
    strupr(s);
    strlwr(s);
    printf("%s",s);
    return 0;
}