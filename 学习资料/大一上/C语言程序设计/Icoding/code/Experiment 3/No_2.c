#include <math.h>
#include <stdio.h>

int main(void)
{
    char ch;
    float num, answer;
    printf("Enter an expression: ");
    scanf("%f", &answer);
    scanf("%c", &ch);
    while (ch != '\n') {
        switch (ch) {
        case '+': {
            scanf("%f", &num);
            answer += num;
            break;
        }
        case '-': {
            scanf("%f", &num);
            answer -= num;
            break;
        }
        case '*': {
            scanf("%f", &num);
            answer *= num;
            break;
        }
        case '/': {
            scanf("%f", &num);
            answer /= num;
            break;
        }
        }
        scanf("%c", &ch);
    }

    printf("Value of expression: %.1f", answer);

    return 0;
}
