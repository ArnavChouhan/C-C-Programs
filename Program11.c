// WAP to Print All Odd Numbers up to n 
#include <stdio.h>

int main() {
    int n, i;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Odd numbers up to %d:\n", n);
    for (i = 1; i <= n; i += 2) {
        printf("%d ", i);
    }

    return 0;
}
 
// WAP to Find the Smallest Among n Numbers 
#include <stdio.h>

int main() {
    int n, i;
    int num, min;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    scanf("%d", &num);
    min = num;

    for (i = 2; i <= n; i++) {
        scanf("%d", &num);
        if (num < min) {
            min = num;
        }
    }

    printf("Smallest number = %d", min);

    return 0;
}
