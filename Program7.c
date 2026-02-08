// WAP to Check Palindrome Number 
#include <stdio.h>

int main() {
    int num, original, rev = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }

    if (original == rev)
        printf("Palindrome number");
    else
        printf("Not a palindrome");

    return 0;
}
 
// WAP to Print First n Natural Numbers 
#include <stdio.h>

int main() {
    int n, i;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("First %d natural numbers:\n", n);
    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    return 0;
}
