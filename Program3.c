// WAP to Count Even and Odd Numbers from n Numbers  

#include <stdio.h>

int main() {
    int n, i, num;
    int even = 0, odd = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (i = 1; i <= n; i++) {
        scanf("%d", &num);

        if (num % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even numbers = %d\n", even);
    printf("Odd numbers = %d", odd);

    return 0;
}

// WAP to Find Average of n Numbers  

#include <stdio.h>

int main() {
    int n, i, num;
    float sum = 0, avg;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (i = 1; i <= n; i++) {
        scanf("%d", &num);
        sum = sum + num;
    }

    avg = sum / n;

    printf("Average = %.2f", avg);

    return 0;
}
  
