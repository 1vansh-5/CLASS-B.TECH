# C Programming Lab Programs

### 1. Print "Hello World"
```c
#include <stdio.h>
int main() {
    printf("Hello World\n");
    return 0;
}
```

### 2. Print name, roll number, and branch
```c
#include <stdio.h>
int main() {
    printf("Name: John Doe\n");
    printf("Roll Number: 21\n");
    printf("Branch: Computer Science\n");
    return 0;
}
```

### 3. Input two integers and find their sum
```c
#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("Sum = %d\n", a + b);
    return 0;
}
```

### 4. Difference between two numbers
```c
#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Difference = %d\n", a - b);
    return 0;
}
```

### 5. Product of two numbers
```c
#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Product = %d\n", a * b);
    return 0;
}
```

### 6. Quotient and remainder
```c
#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Quotient = %d\n", a / b);
    printf("Remainder = %d\n", a % b);
    return 0;
}
```

### 7. Average of three numbers
```c
#include <stdio.h>
int main() {
    float a, b, c, avg;
    printf("Enter three numbers: ");
    scanf("%f %f %f", &a, &b, &c);
    avg = (a + b + c) / 3;
    printf("Average = %.2f\n", avg);
    return 0;
}
```

### 8. Area and circumference of a circle
```c
#include <stdio.h>
#define PI 3.14159
int main() {
    float r, area, circumference;
    printf("Enter radius: ");
    scanf("%f", &r);
    area = PI * r * r;
    circumference = 2 * PI * r;
    printf("Area = %.2f\n", area);
    printf("Circumference = %.2f\n", circumference);
    return 0;
}
```

### 9. Area and perimeter of a rectangle
```c
#include <stdio.h>
int main() {
    float length, width, area, perimeter;
    printf("Enter length and width: ");
    scanf("%f %f", &length, &width);
    area = length * width;
    perimeter = 2 * (length + width);
    printf("Area = %.2f\n", area);
    printf("Perimeter = %.2f\n", perimeter);
    return 0;
}
```

### 10. Area of a triangle
```c
#include <stdio.h>
int main() {
    float base, height, area;
    printf("Enter base and height: ");
    scanf("%f %f", &base, &height);
    area = 0.5 * base * height;
    printf("Area = %.2f\n", area);
    return 0;
}
```

### 11. Celsius to Fahrenheit
```c
#include <stdio.h>
int main() {
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9.0 / 5.0) + 32;
    printf("Fahrenheit = %.2f\n", fahrenheit);
    return 0;
}
```

### 12. Fahrenheit to Celsius
```c
#include <stdio.h>
int main() {
    float fahrenheit, celsius;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) * 5.0 / 9.0;
    printf("Celsius = %.2f\n", celsius);
    return 0;
}
```

### 13. Simple interest
```c
#include <stdio.h>
int main() {
    float principal, rate, time, si;
    printf("Enter principal, rate, and time: ");
    scanf("%f %f %f", &principal, &rate, &time);
    si = (principal * rate * time) / 100;
    printf("Simple Interest = %.2f\n", si);
    return 0;
}
```

### 14. Total and percentage of five subjects
```c
#include <stdio.h>
int main() {
    float s1, s2, s3, s4, s5, total, percentage;
    printf("Enter marks of 5 subjects: ");
    scanf("%f %f %f %f %f", &s1, &s2, &s3, &s4, &s5);
    total = s1 + s2 + s3 + s4 + s5;
    percentage = total / 5;
    printf("Total = %.2f\n", total);
    printf("Percentage = %.2f\n", percentage);
    return 0;
}
```

### 15. Swap two numbers using a third variable
```c
#include <stdio.h>
int main() {
    int a, b, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}
```

### 16. Swap two numbers without using a third variable
```c
#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}
```

### 17. Square and cube of a number
```c
#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Square = %d\n", n * n);
    printf("Cube = %d\n", n * n * n);
    return 0;
}
```

### 18. Convert days into years, weeks, and days
```c
#include <stdio.h>
int main() {
    int totalDays, years, weeks, days;
    printf("Enter total days: ");
    scanf("%d", &totalDays);
    years = totalDays / 365;
    weeks = (totalDays % 365) / 7;
    days = (totalDays % 365) % 7;
    printf("Years = %d, Weeks = %d, Days = %d\n", years, weeks, days);
    return 0;
}
```

### 19. Convert seconds into hours, minutes, and seconds
```c
#include <stdio.h>
int main() {
    int totalSeconds, hours, minutes, seconds;
    printf("Enter total seconds: ");
    scanf("%d", &totalSeconds);
    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;
    printf("Hours = %d, Minutes = %d, Seconds = %d\n", hours, minutes, seconds);
    return 0;
}
```

### 20. Check whether a number is positive, negative, or zero
```c
#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n > 0)
        printf("Positive\n");
    else if (n < 0)
        printf("Negative\n");
    else
        printf("Zero\n");
    return 0;
}
```

### 21. Check whether a number is even or odd
```c
#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");
    return 0;
}
```

### 22. Find the greater of two numbers
```c
#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if (a > b)
        printf("Greater number = %d\n", a);
    else if (b > a)
        printf("Greater number = %d\n", b);
    else
        printf("Both numbers are equal\n");
    return 0;
}
```

### 23. Find the greatest among three numbers
```c
#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a >= b && a >= c)
        printf("Greatest = %d\n", a);
    else if (b >= a && b >= c)
        printf("Greatest = %d\n", b);
    else
        printf("Greatest = %d\n", c);
    return 0;
}
```

### 24. Find the smallest among three numbers
```c
#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a <= b && a <= c)
        printf("Smallest = %d\n", a);
    else if (b <= a && b <= c)
        printf("Smallest = %d\n", b);
    else
        printf("Smallest = %d\n", c);
    return 0;
}
```

### 25. Check whether a number is divisible by 5 and 11
```c
#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n % 5 == 0 && n % 11 == 0)
        printf("Divisible by both 5 and 11\n");
    else
        printf("Not divisible by both 5 and 11\n");
    return 0;
}
```

### 26. Check whether a year is a leap year
```c
#include <stdio.h>
int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        printf("%d is a Leap Year\n", year);
    else
        printf("%d is not a Leap Year\n", year);
    return 0;
}
```

### 27. Check whether a character is a vowel or consonant
```c
#include <stdio.h>
int main() {
    char ch;
    printf("Enter an alphabet: ");
    scanf("%c", &ch);
    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
        ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        printf("Vowel\n");
    else
        printf("Consonant\n");
    return 0;
}
```

### 28. Check whether a character is an alphabet, digit, or special character
```c
#include <stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        printf("Alphabet\n");
    else if (ch >= '0' && ch <= '9')
        printf("Digit\n");
    else
        printf("Special Character\n");
    return 0;
}
```

### 29. Check whether a number is one-digit, two-digit, or three-digit
```c
#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n < 0) n = -n;
    if (n <= 9)
        printf("One-digit number\n");
    else if (n <= 99)
        printf("Two-digit number\n");
    else if (n <= 999)
        printf("Three-digit number\n");
    else
        printf("More than three digits\n");
    return 0;
}
```

### 30. Check whether a student has passed or failed based on marks
```c
#include <stdio.h>
int main() {
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);
    if (marks >= 40)
        printf("Passed\n");
    else
        printf("Failed\n");
    return 0;
}
```

### 31. Calculate a student's grade based on percentage
```c
#include <stdio.h>
int main() {
    float percentage;
    printf("Enter percentage: ");
    scanf("%f", &percentage);
    if (percentage >= 90)
        printf("Grade: A\n");
    else if (percentage >= 75)
        printf("Grade: B\n");
    else if (percentage >= 60)
        printf("Grade: C\n");
    else if (percentage >= 40)
        printf("Grade: D\n");
    else
        printf("Grade: F\n");
    return 0;
}
```

### 32. Find whether a person is eligible for voting
```c
#include <stdio.h>
int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age >= 18)
        printf("Eligible for voting\n");
    else
        printf("Not eligible for voting\n");
    return 0;
}
```

### 33. Find the absolute value of a number
```c
#include <stdio.h>
int main() {
    int n, absolute;
    printf("Enter a number: ");
    scanf("%d", &n);
    absolute = (n < 0) ? -n : n;
    printf("Absolute value = %d\n", absolute);
    return 0;
}
```

### 34. Find the greatest of four numbers
```c
#include <stdio.h>
int main() {
    int a, b, c, d, greatest;
    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    greatest = a;
    if (b > greatest) greatest = b;
    if (c > greatest) greatest = c;
    if (d > greatest) greatest = d;
    printf("Greatest number = %d\n", greatest);
    return 0;
}
```
