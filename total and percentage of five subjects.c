#include <stdio.h>
int main() {
    float s1, s2, s3, s4, s5, total, percentage;
    printf("Enter marks of 1st subjects: ");
    scanf("%f", &s1);
    printf("Enter marks of 2nd subjects: ");
    scanf("%f", &s2);
    printf("Enter marks of 3rd subjects: ");
    scanf("%f", &s3);
    printf("Enter marks of 4th subjects: ");
    scanf("%f", &s4);
    printf("Enter marks of 5th subjects: ");
    scanf("%f", &s5);
    total = s1 + s2 + s3 + s4 + s5;
    percentage = total / 5;
    printf("Total = %.2f\n", total);
    printf("Percentage = %.2f\n", percentage);
    return 0;
}
