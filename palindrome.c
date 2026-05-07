#include <stdio.h>

int main() {

    int num, digit, reverse = 0;

    printf("Enter number: ");
    scanf("%d", &num);

    int original = num;

    if (num < 0) {
        printf("Not palindrome\n");
        return 0;
    }

    while (num > 0) {

        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    if (reverse == original) {
        printf("Palindrome\n");
    }
    else {
        printf("Not palindrome\n");
    }

    return 0;
}
