#include<stdio.h>
int main() {
    float a,b;
    printf("enter two numbers:");
    scanf("%f %f", &a,&b);
    printf("avg of two nums=%.2f", (a+b)/2.0);/*%.2 means print up to 2 decimal places */
    return 0;
}