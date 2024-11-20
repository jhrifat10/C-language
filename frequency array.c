#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m); 

    int a[n]; 
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]); 
    }

    int f[m + 1]; 
    for (int i = 0; i <= m; i++) {
        f[i] = 0; 
    }

    for (int i = 0; i < n; i++) {
        if (a[i] <= m) { 
            f[a[i]]++; 
        }
    }

    for (int i = 1; i <= m; i++) {
        printf("%d\n", f[i]); 
    }

    return 0;
}
