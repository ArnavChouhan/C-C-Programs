// WAP to Find Sum of n Numbers 
#include <stdio.h>

int main() {
    int n, i, sum = 0, num;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (i = 1; i <= n; i++) {
        scanf("%d", &num);
        sum = sum + num;
    }

    printf("Sum of numbers = %d", sum);

    return 0;
}

// WAP to Find Largest Number Among n Numbers 
#include <stdio.h>

int main() {
    int n, i;
    int num, max;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    scanf("%d", &num);
    max = num;

    for (i = 2; i <= n; i++) {
        scanf("%d", &num);
        if (num > max) {
            max = num;
        }
    }

    printf("Largest number = %d", max);

    return 0;
}
