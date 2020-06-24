#include <stdio.h>

int main(void)
{
    int a, b, i, max, min;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    max = a;
    min = b;
    if (a < b) {
        max = b;
        min = a;
    }
    i = min;
    while (i > 1) {
        if (a % i == 0 && b % i == 0) {
            break;
        } else
            i--;
    }
    if (min == 0)
        i = max;
    printf("Greatest common divisior: %d", i);
    return 0;
}
