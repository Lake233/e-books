#include "lab51.h" // 请不要删除本行头文件，否则检查不通过
#include <stdio.h>
#include <stdlib.h>

void print(const struct part inv[], int np)
{
    int i;

    printf("Part Number    Part Name              "
           "Quantity on hand\n");
    for (i = 0; i < np; i++)
        printf("%7d    %-25s%11d\n", inv[i].number,
            inv[i].name, inv[i].on_hand);
}
