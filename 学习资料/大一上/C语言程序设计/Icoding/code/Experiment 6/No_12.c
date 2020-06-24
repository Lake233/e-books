#include "lab52.h" // 请不要删除本行头文件，否则检查不通过
#include <stdio.h>
#include <stdlib.h>

extern int CurrentCnt; // 请不要删除本行的全局变量声明，否则检查不通过

void bubble_sort(GoodsList* L)
{
    GoodsList* p;
    GoodsInfo temp;
    int n = CurrentCnt;
    int i, j;

    if (L == NULL || L->next == NULL)
        printf("当前链表中没有商品\n");
    for (j = 1; j < n; ++j) {
        p = L->next;
        for (i = 0; i < n - j; ++i) {
            if (p->data.goods_price > p->next->data.goods_price) {
                temp = p->data;
                p->data = p->next->data;
                p->next->data = temp;
            }
            p = p->next;
        }
    }
}
