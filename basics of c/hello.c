#include<stdio.h>
/*wap to perform arithmetic operations on two numbers*/
int main() {
    int a,b;
    printf("enter two numbers:");
    scanf("%d %d",&a,&b);
    printf("sum=%d",a+b);
    printf("diff=%d",a-b);
    printf("product=%d",a*b);
    printf("quotient=%d",a/b);
    return 0;
}
