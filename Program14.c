// WAP to Print Fibonacci Series up to n Terms  
#include <stdio.h>

int main() {
    int n, i;
    int a = 0, b = 1, c;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series:\n");
    for (i = 1; i <= n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}
  
// WAP to Count How Many Numbers are Divisible by 3 (from n inputs)  
#include <stdio.h>

int main() {
    int n, i, num;
    int count = 0;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (i = 1; i <= n; i++) {
        scanf("%d", &num);
        if (num % 3 == 0) {
            count++;
        }
    }

    printf("Numbers divisible by 3 = %d", count);

    return 0;
}
