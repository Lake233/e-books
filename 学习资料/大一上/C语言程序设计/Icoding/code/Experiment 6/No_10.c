#include "lab52.h" // 请不要删除本行头文件，否则检查不通过
#include <stdio.h>
#include <stdlib.h>

extern int CurrentCnt; // 请不要删除本行的全局变量声明，否则检查不通过

void destory_list_and_file(GoodsList** L)
{
    destory_list(L);
    remove(GOODS_FILE_NAME);
}
