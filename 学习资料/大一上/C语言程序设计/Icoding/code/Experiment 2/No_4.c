#include <stdio.h>


int main(void)
{
    int grade, judge;
    printf("Enter numerical grade: ");
    scanf("%d", &grade);
    judge = grade / 10;
    if (grade > 100 || grade < 0) {
        printf("Error, grade must be between 0 and 100.");
    } else {
        switch (judge) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("Letter grade: F");
            break;
        case 6:
            printf("Letter grade: D");
            break;
        case 7:
            printf("Letter grade: C");
            break;
        case 8:
            printf("Letter grade: B");
            break;
        default:
            printf("Letter grade: A");
            break;
        }
    }
    return 0;
}
