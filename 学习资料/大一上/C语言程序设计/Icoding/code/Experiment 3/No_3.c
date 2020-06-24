#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    long num;
    int count[10] = { 0 };
    int n;
    printf("Enter a number: ");
    scanf("%ld", &num);
    printf("Digit:       	0	1	2	3	4	5	6	7	8	9\n");
    printf("Occurrences:	");
    while (num > 0) {
        n = num % 10;
        count[n]++;
        num /= 10;
    }
    for (n = 0; n <= 9; n++) {
        printf("%d	", count[n]);
    }
    return 0;
}
