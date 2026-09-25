#include<stdio.h>
int main() {
    int a=10, b=12;
    char op;
    printf("enter operators(+,-,*,/):");
    scanf("%c", &op);
    switch(op) {
        case '+' :
            printf("sum: %d", a+b);
            break;
        case '-' :
            printf("sub: %d", a-b);
            break;
        case '*' :
            printf("mul: %d", a*b);
            break;
        case '/' :
            printf("div: %d", a/b);
            break;
        default :
            printf("invalid operator");
    }
    return 0;
}
