#include "lab52.h" // 请不要删除本行头文件，否则检查不通过
#include <stdio.h>
#include <stdlib.h>

extern int CurrentCnt; // 请不要删除本行的全局变量声明，否则检查不通过

GoodsList* search_item(GoodsList* L, char* goods_id)
{
    GoodsList* p = L->next;
    if (strcmp(goods_id, "-1") == 0)
        return NULL;
    while (p != NULL && (strcmp(p->data.goods_id, goods_id))) {
        p = p->next;
    }
    return p;
}
