#include<stdio.h>
/*Write a C program that takes a number as input and calculates its square and cube.*/
int main() {
    int a;
    printf("enter the num:");
    scanf("%d", &a);
    printf("square=%d", a*a);
    printf("cube=%d", a*a*a);
    return 0;
}