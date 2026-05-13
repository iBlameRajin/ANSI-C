#include <stdio.h>
#define n 10

int main() {
    int a[n];
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for(int j = i + 1; j < n; j++) {
            if(a[j] < a[min_idx]) {
                min_idx = j;
            }
        }
        int b = a[min_idx];
        a[min_idx] = a[i];
        a[i] = b;
    }

    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
