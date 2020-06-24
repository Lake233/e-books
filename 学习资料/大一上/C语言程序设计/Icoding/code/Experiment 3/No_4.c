#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    char ch[10][10];
    int i, j;
    int count = 65;
    int up = 5, down = 5, left = 5, right = 5;
    int judge;
    int record = 0;

    srand((unsigned)time(NULL));

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            ch[i][j] = '.';
        }
    }

    ch[0][0] = 'A';
    i = 0;
    j = 0;

    do {
        judge = rand() % 4;
        switch (judge) {
        //0左，1右，2上，3下
        case 0: {
            if ((j - 1) >= 0 && ch[i][j - 1] == '.') {
                j -= 1;
                count++;
                ch[i][j] = count;
                left = right = up = down = 5;
                record = 0;
            } else if (left != judge) {
                left = judge;
                record++;
            }
            break;
        }

        case 1: {
            if ((j + 1) <= 9 && ch[i][j + 1] == '.') {
                j += 1;
                count++;
                ch[i][j] = count;
                left = right = up = down = 5;
                record = 0;
            } else if (right != judge) {
                right = judge;
                record++;
            }
            break;
        }

        case 2: {
            if ((i - 1) >= 0 && ch[i - 1][j] == '.') {
                i -= 1;
                count++;
                ch[i][j] = count;
                left = right = up = down = 5;
                record = 0;
            } else if (up != judge) {
                up = judge;
                record++;
            }
            break;
        }
        case 3: {
            if ((i + 1) >= 0 && ch[i + 1][j] == '.') {
                i += 1;
                count++;
                ch[i][j] = count;
                left = right = up = down = 5;
                record = 0;
            } else if (down != judge) {
                down = judge;
                record++;
            }
            break;
        }
        }
    } while (record < 4 && count != 90);

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%c ", ch[i][j]);
            if (j == 9) {
                printf("\n");
            }
        }
    }

    return 0;
}
