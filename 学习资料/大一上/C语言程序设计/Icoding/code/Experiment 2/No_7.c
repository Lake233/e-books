#include <stdio.h>

int main(void)
{
    int n, i;
    printf("Enter a integer: ");
    scanf("%d", &n);
    if (n < 4) {
        printf("Error!\n");
    } else {
        for (i = 2; i * i <= n; i += 2) {
            printf("%d\n", i * i);
        }
    }
    return 0;
}
