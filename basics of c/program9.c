#include<stdio.h>
/*Take a person's age and print the result of:*/
int main() {
    int age;
    printf("enter the age of the person:");
    scanf("%d",&age);
    printf("%d\n", age>=18 && age<=60);
    return 0;
}