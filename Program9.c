// WAP to Print Numbers from n to 1 
#include <stdio.h>

int main() {
    int n, i;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--) {
        printf("%d ", i);
    }

    return 0;
}
   
// WAP to Print Cubes of First n Numbers
#include <stdio.h>

int main() {
    int n, i;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Cubes:\n");
    for (i = 1; i <= n; i++) {
        printf("%d ", i*i*i);
    }

    return 0;
}
