#include <stdio.h>
#include <string.h>

void mergeStrings(char *S, char *T, char *result) {
    int i = 0, j = 0, k = 0;

    while (S[i] != '\0' && T[j] != '\0') {
        result[k++] = S[i++];
        result[k++] = T[j++];
    }

    while (S[i] != '\0') {
        result[k++] = S[i++];
    }

    while (T[j] != '\0') {
        result[k++] = T[j++];
    }

    result[k] = '\0';
}

int main() {
    int n;
    scanf("%d", &n); 
    for (int test = 0; test < n; test++) {
        char S[100], T[100], result[200];
        
        scanf("%s %s", S, T);
        
        mergeStrings(S, T, result);
        
        printf("%s\n", result);
    }

    return 0;
}
