
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int A[N];
    int i, min;

    for (i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    min = A[0];
    for (i = 1; i < N; i++) {
        if (A[i] < min) {
            min = A[i];
        }
    }

    int freq = 0;
    for (i = 0; i < N; i++) {
        if (A[i] == min) {
            freq++;
        }
    }

    if (freq % 2 == 1) {
        printf("Lucky\n");
    } else {
        printf("Unlucky\n");
    }

    return 0;
}
