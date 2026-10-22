#include <stdio.h>

int main(void) {
    int n;
    int pass;
    printf("enter the value of pass:");
    scanf("%d", &pass);

    for (int i = 1; i <= 7; i++) {
        printf("Enter a secret number: ");

        if (scanf("%d", &n) != 1) {
            return 1;
        }

        if (n < 1 || n > 100) {
            printf("Invalid guess. Try again.\n");
            i--;
            continue;
        }

        if (n > pass) {
            printf("The number is greater than the secret number.\n");
        } else if (n < pass) {
            printf("The number is less than the secret number.\n");
        } else {
            printf("Congratulations, you guessed the number!\n");
            return 0;
        }

        printf("Attempts left: %d\n", 7 - i);
    }

    printf("All guesses were incorrect. The secret number was %d.\n", pass);
    return 0;
}
