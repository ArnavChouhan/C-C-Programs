// WAP to Print Square of First n Numbers 
#include <stdio.h>

int main() {
    int n, i;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Squares of first %d numbers:\n", n);
    for (i = 1; i <= n; i++) {
        printf("%d ", i * i);
    }

    return 0;
}

// WAP to Find Sum of Digits of a Number  
#include <stdio.h>

int main() {
    int num, sum = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }

    printf("Sum of digits = %d", sum);

    return 0;
}
