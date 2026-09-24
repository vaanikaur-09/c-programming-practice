#include<stdio.h>
int main() {
    int marks;
    printf ("enter marks of a std:");
    scanf("%d",&marks);
    if (marks>30){
        printf("pass");
    } else{
        printf("fail");
    }
    return 0;
}