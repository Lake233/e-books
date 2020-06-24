#include <stdio.h>

int main(void)
{
    char ch[80];
    int shift;
    int i, a;
    printf("Enter message to be encrypted: ");
    for (i = 0; i < 80; i++) {
        scanf("%c", &ch[i]);
        if (ch[i] == '\n') {
            a = i;
            break;
        }
    }

    printf("Enter shift amount(1-25): ");
    scanf("%d", &shift);

    printf("Encrypted message: ");
    for (i = 0; i < a; i++) {
        if (ch[i] >= 'a' && ch[i] <= 'z') {
            ch[i] = ((ch[i] - 'a') + shift) % 26 + 'a';
            printf("%c", ch[i]);
        } else if (ch[i] >= 'A' && ch[i] <= 'Z') {
            ch[i] = ((ch[i] - 'A') + shift) % 26 + 'A';
            printf("%c", ch[i]);
        } else
            printf("%c", ch[i]);
    }

    return 0;
}
