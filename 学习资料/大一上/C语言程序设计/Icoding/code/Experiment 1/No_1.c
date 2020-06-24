#include <stdio.h>
#include <stdlib.h>
#define RATE 1.05

int main()
{
    float amount = 0.0f, total = 0.0f;
    printf("Enter an amount:");
    scanf("%f", &amount);
    total = amount * RATE;
    printf("With tax added:%.2f", total);
    return 0;
}
