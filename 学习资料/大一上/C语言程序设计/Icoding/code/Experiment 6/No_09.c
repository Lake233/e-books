#include "lab52.h" // 请不要删除本行头文件，否则检查不通过
#include <stdio.h>
#include <stdlib.h>

extern int CurrentCnt; // 请不要删除本行的全局变量声明，否则检查不通过

void destory_list(GoodsList** L)
{
    if (L == NULL || *L == NULL)
        return;
    GoodsList *pre = *L, *p = (*L)->next;
    while (p != NULL) {
        free(pre);
        pre = p;
        p = p->next;
    }
    free(pre);
    CurrentCnt = 0;
    *L = NULL;
}
