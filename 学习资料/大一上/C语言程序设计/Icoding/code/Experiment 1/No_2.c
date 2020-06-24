#include <stdio.h>
#include <stdlib.h>
#define TWENTYD 20
#define TEND 10
#define FIVED 5
#define ONED 1

int main()
{
    int amount = 0, n20 = 0, n10 = 0, n5 = 0, n1 = 0;
    printf("Enter a dollar amount:");
    scanf("%d", &amount);
    n20 = amount / 20; //20张数
    amount = amount - n20 * 20; //余额
    n10 = amount / 10; //10张数
    amount = amount - n10 * 10; //余额
    n5 = amount / 5; //5张数
    amount = amount - n5 * 5; //余额
    n1 = amount; //1张数
    printf("$20 bills:%d\n$10 bills:%d\n $5 bills:%d\n $1 bills:%d\n", n20, n10, n5, n1);
    return 0;
}
