#include <stdio.h>

int main(void)
{
    int days, sday, count, i;
    printf("Enter number of days in month: ");
    scanf("%d", &days);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &sday);

    printf("一 二 三 四 五 六 日\n");

    for (count = 1; count <= (sday - 1) * 3; count++) {
        printf(" ");
    }

    for (i = 1; i <= days; i++) {
        printf("%2d ", i);
        if (sday == 7) {
            printf("\b\n");
            sday = 1;
            continue;
        }
        sday++;
    }
    return 0;
}
