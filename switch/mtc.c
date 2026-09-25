#include<stdio.h>
int main() {
    int ticket, price, quantity;
    printf("enter the ticket choice:");
    scanf("%c", &ticket);
    switch(ticket) {
        case 'r' :
            price=250;
            printf("enter the quantity:");
            scanf("%d", &quantity);
            printf("total price: %d", price*quantity);
            break;
        case 'p' :
            price=500;
            printf("enter the quantity:");
            scanf("%d", &quantity);
            printf("total price:%d", price*quantity);
            break;
        case 'v':
            price=1000;
            printf("enetr the quantity:");
            scanf("%d", &quantity);
            printf("total price:%d", price*quantity);   
            break;
        default :
            printf("invalid ticket choice");
    
    }
    return 0;
}