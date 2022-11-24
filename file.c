#include<stdio.h>

int main()

{ 
    FILE *p;
    int a = 1000;
    p =
    fopen("sample.txt" , "a");
    fprintf(p,"\n%d" , a);
    fclose(p);
    printf("Data inserted successfully..!!");
    return 0;
}