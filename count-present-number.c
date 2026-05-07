#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter number: ");
    scanf("%d", &num);

    // Handle 0 separately
    if (num == 0) {
        count = 1;
    }

    while (num > 0) {
        num = num / 10;
        count++;
    }

    printf("Total digits: %d\n", count);

    return 0;
}
