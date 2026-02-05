// WAP to Print Table of a Number 
#include <stdio.h>

int main() {
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Table of %d:\n", num);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}


// WAP to Count Positive, Negative and Zero Numbers  
#include <stdio.h>

int main() {
    int n, i, num;
    int pos = 0, neg = 0, zero = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (i = 1; i <= n; i++) {
        scanf("%d", &num);

        if (num > 0)
            pos++;
        else if (num < 0)
            neg++;
        else
            zero++;
    }

    printf("Positive = %d\n", pos);
    printf("Negative = %d\n", neg);
    printf("Zero = %d\n", zero);

    return 0;
}
