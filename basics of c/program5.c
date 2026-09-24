#include<stdio.h>
int main() {
    int a,b,c;
    printf("enter the marks of std in three subs:");
    scanf(" %d %d %d", &a, &b, &c);
    printf("total marks=%d", a+b+c);
    printf("average marks=%f", (a+b+c)/3.0);
    return 0;
}