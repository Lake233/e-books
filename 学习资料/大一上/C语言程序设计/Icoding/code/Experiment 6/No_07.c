#include "lab52.h" // 请不要删除本行头文件，否则检查不通过
#include <stdio.h>
#include <stdlib.h>

extern int CurrentCnt; // 请不要删除本行的全局变量声明，否则检查不通过

void output_one_item(GoodsList* p)
{
    if (p == NULL)
        return;
    printf("ID:%s\t名称:%s\t价格:%3d\t折扣:%s\t数量:%d\t剩余:%d\n",
        p->data.goods_id, p->data.goods_name, p->data.goods_price, p->data.goods_discount,
        p->data.goods_amount, p->data.goods_remain);
}
