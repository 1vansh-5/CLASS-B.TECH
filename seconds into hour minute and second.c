#include <stdio.h>
int main() {
    int ts, h, min, seconds;
    printf("Enter total seconds: ");
    scanf("%d", &ts);
    h = ts / 3600;
    min = (ts % 3600) / 60;
    seconds = ts % 60;
    printf("Hours = %d, Minutes = %d, Seconds = %d\n", h, min, seconds);
    return 0;
}
