#include "lab52.h" // 请不要删除本行头文件，否则检查不通过
#include <stdio.h>
#include <stdlib.h>

extern int CurrentCnt; // 请不要删除本行的全局变量声明，否则检查不通过

bool change_item(GoodsList* L, char* goods_id, GoodsInfo new_info)
{
    GoodsList* p = L->next;
    GoodsList* ptarget = search_item(L, goods_id);
    if (ptarget == NULL) {
        return false;
    } else {
        strcpy(ptarget->data.goods_id, new_info.goods_id);
        strcpy(ptarget->data.goods_name, new_info.goods_name);
        ptarget->data.goods_price = new_info.goods_price;
        strcpy(ptarget->data.goods_discount, new_info.goods_discount);
        ptarget->data.goods_amount = new_info.goods_amount;
        ptarget->data.goods_remain = new_info.goods_remain;
        return true;
    }
}
