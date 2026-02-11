// WAP to Print Multiples of 5 up to n 
#include <stdio.h>

int main() {
    int n, i;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Multiples of 5 up to %d:\n", n);
    for (i = 5; i <= n; i += 5) {
        printf("%d ", i);
    }

    return 0;
}
  
// WAP to Count Digits of a Number 
#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        count = 1;
    } else {
        while (num != 0) {
            num = num / 10;
            count++;
        }
    }

    printf("Total digits = %d", count);

    return 0;
}
