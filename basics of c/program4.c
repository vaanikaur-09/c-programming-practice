#include<stdio.h>
/*wap to swap two numbers using a temporary variable*/
int main() {
    int a,b,c;
    printf("enter the value of two numbers:");
    scanf("%d %d ", &a, &b);
    c=a;
    a=b;
    b=c;
    printf("after swapping the value of a=%d and b=%d", a,b);
    return 0;
}