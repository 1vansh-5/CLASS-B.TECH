#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter first numbers: ");
    scanf("%d", &a);
    printf("Enter second numbers: ");
    scanf("%d", &b);
    printf("Enter three numbers: ");
    scanf("%d", &c);
    if (a >= b && a >= c)
        printf("Greatest = %d\n", a);
    else if (b >= a && b >= c)
        printf("Greatest = %d\n", b);
    else
        printf("Greatest = %d\n", c);
    return 0;
}
