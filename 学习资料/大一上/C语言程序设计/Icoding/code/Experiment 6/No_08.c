#include "lab52.h" // 请不要删除本行头文件，否则检查不通过
#include <stdio.h>
#include <stdlib.h>

extern int CurrentCnt; // 请不要删除本行的全局变量声明，否则检查不通过

void output_all_items(GoodsList* L)
{
    // GoodsList *pre = L, *p = L->next;
    // int i; //commented by bzj
    GoodsList* p = L->next;
    //printf("当前有%d个商品\n", CurrentCnt);
    while (p != NULL) {
        output_one_item(p);
        p = p->next;
    }
}
