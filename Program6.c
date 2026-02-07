// WAP to Check Prime Number 
#include <stdio.h>

int main() {
    int n, i, flag = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }

    if (n == 1)
        printf("Not prime");
    else if (flag == 0)
        printf("Prime number");
    else
        printf("Not prime");

    return 0;
}

// WAP to Count Digits in a Number  
#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        num = num / 10;
        count++;
    }

    printf("Total digits = %d", count);

    return 0;
}
