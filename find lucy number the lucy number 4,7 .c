#include <stdio.h>

int main() {
    int A, B;
    int found = 0;

    scanf("%d %d", &A, &B);


    for (int i = A; i <= B; i++) {
        int num = i;
        int isLucky = 1;
        while (num > 0) {
            int digit = num % 10;
            if (digit != 4 && digit != 7) {
                isLucky = 0;
                break;
            }
            num /= 10;
        }

        if (isLucky) {
            printf("%d ", i);
            found = 1;
        }
    }

    if (!found) {
        printf("-1");
    }

    printf("\n");
    return 0;
}
