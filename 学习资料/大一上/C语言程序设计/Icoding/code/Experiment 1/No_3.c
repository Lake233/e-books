#include <stdio.h>
#include <stdlib.h>

int main()
{
    float amount = 0.0f, rate = 0.0f, m1 = 0.0f, percentRate = 0.0f, m2 = 0.0f, m3 = 0.0f, mpay = 0.0f;
    printf("Enter amount of loan:");
    scanf("%f", &amount);
    printf("Enter interest rate:");
    scanf("%f", &rate);
    printf("Enter monthly payment:");
    scanf("%f", &mpay);
    printf("\n");
    percentRate = rate / 100.0f / 12.0f + 1.0f;
    amount *= percentRate;
    amount -= mpay;
    m1 = amount;
    amount *= percentRate;
    amount -= mpay;
    m2 = amount;
    amount *= percentRate;
    amount -= mpay;
    m3 = amount;
    //	amount*=percentRate;
    printf("Balance remaining after first payment:$%.2f\nBalance remaining after first payment:$%.2f\nBalance remaining after first payment:$%.2f\n",
        m1, m2, m3);
    return 0;
}
