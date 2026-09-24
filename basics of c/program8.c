#include <stdio.h>
/*wap to chk if the marks of std is greater than 40 or not*/
int main() {
    int marks;
    printf("enter the marks of the student:");
    scanf("%d",&marks);
    printf("%d\n",marks>40);
    printf("%d\n",marks<40);
    printf("%d\n",marks==40);
    return 0;
}