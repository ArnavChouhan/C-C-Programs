// Write a Program to print  N Number
#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (i = 1; i <= n; i++) {
        int num;
        scanf("%d", &num);
        printf("%d ", num);
    }

    return 0;
}




// Write a Program  to print N Number  in Reverse Order 
#include <stdio.h>

int main() {
    int n, i;
    int arr[100];

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Numbers in reverse order:\n");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}
