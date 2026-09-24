#include<stdio.h>
int main() {
    int a;
    printf("enter a 3 digit num:");
    scanf("%d",&a);
    printf("sum of digits=%d", a/100 + (a%100)/10 + a%10);
    return 0;
}