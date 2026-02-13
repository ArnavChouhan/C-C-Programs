// WAP to Print First n Even Numbers 
#include <stdio.h>

int main() {
    int n, i;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("First %d even numbers:\n", n);
    for (i = 1; i <= n; i++) {
        printf("%d ", 2 * i);
    }

    return 0;
}

// WAP to Find the Sum of Squares of First n Numbers  
#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum = sum + (i * i);
    }

    printf("Sum of squares = %d", sum);

    return 0;
}
 