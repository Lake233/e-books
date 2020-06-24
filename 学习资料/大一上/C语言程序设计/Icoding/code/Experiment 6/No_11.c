#include "lab52.h" // 请不要删除本行头文件，否则检查不通过
#include <stdio.h>
#include <stdlib.h>

extern int CurrentCnt; // 请不要删除本行的全局变量声明，否则检查不通过

int save_to_file(GoodsList* L)
{
    if (L == NULL)
        return 0;
    GoodsList* p = L->next;
    FILE* fp;
    if ((fp = fopen("goodsinfo.txt", "w")) == NULL) {
        printf("提示：不能打开商品文件\n");
        return 0;
    }
    int save_count = 0;
    while (p != NULL) {
        fprintf(fp, "%s\t", p->data.goods_id);
        fprintf(fp, "%s\t", p->data.goods_name);
        fprintf(fp, "%d\t", p->data.goods_price);
        fprintf(fp, "%s\t", p->data.goods_discount);
        fprintf(fp, "%d\t", p->data.goods_amount);
        fprintf(fp, "%d\n", p->data.goods_remain);
        p = p->next;
        save_count++;
    }
    fclose(fp);
    return save_count;
}
