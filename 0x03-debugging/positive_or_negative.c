#include <stdio.h>

void positive_or_negative(int num) {
    if (num >= 0) {
        printf("%d is a positive number.\n", num);
    } else {
        printf("%d is a negative number.\n", num);
    }
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    positive_or_negative(num);

    return 0;
}

