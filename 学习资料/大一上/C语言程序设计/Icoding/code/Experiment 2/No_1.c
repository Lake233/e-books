#include <stdio.h>
#include <stdlib.h>
#define FACTOR 12
int main()
{
    int hour, minute;
    scanf("%d %d", &hour, &minute);
    if (hour > 12) {
        hour -= FACTOR;
        printf("Equivalent 12-hour time:%d:%.2d PM", hour, minute);
    } else if (hour < 12) {
        if (hour == 0) {
            hour += 12;
        }
        printf("Equivalent 12-hour time:%d:%.2d AM", hour, minute);
    } else
        printf("Equivalent 12-hour time:%d:%.2d PM", hour, minute);
    return 0;
}
