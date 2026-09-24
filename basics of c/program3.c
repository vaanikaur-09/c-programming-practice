#include<stdio.h>
/*wap to find the total and average marks of a student in three subjects*/
int main() {
    int a,b,c;
    printf("enter the marks of a student in three subjects:");
    scanf("%d %d %d", &a,&b,&c);
    printf("total marks=%d",a+b+c);
    printf("avg marks=%d",(a+b+c)/3);
    return 0;
}