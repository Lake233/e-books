#include "lab52.h" // 请不要删除本行头文件，否则检查不通过
#include <stdio.h>
#include <stdlib.h>

extern int CurrentCnt; // 请不要删除本行的全局变量声明，否则检查不通过

bool delete_item(GoodsList* L, char* goods_id)
{
    GoodsList *pre = L, *p = L->next;
    while (p != NULL && (strcmp(p->data.goods_id, goods_id))) {
        pre = p;
        p = p->next;
    }
    if (p == NULL) {
        return false;
    } else {
        pre->next = p->next;
        free(p);
        CurrentCnt--;
        return true;
    }
}
