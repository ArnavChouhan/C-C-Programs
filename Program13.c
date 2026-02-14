// WAP to Print First n Multiples of a Given Number 
#include <stdio.h>

int main() {
    int n, i, num;

    printf("Enter the number: ");
    scanf("%d", &num);

    printf("Enter how many multiples: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%d ", num * i);
    }

    return 0;
}
  
// WAP to Find Power of a Number (without using pow function) 
#include <stdio.h>

int main() {
    int base, exp, i;
    long long result = 1;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exp);

    for (i = 1; i <= exp; i++) {
        result = result * base;
    }

    printf("Result = %lld", result);

    return 0;
}
