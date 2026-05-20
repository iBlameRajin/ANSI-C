#include <stdio.h>
int main() {
    char str[] = "123456789";
    int rows = 5;
    int i, j;
for (i = 0; i < rows; i++) {
                for (j = 0; j < rows - i - 1; j++) {
            printf("  ");
        }
for (j = i; j <= 2 * i; j++) {
            printf("%c ", str[j]);
        }
for (j = 2 * i - 1; j >= i; j--) {
            printf("%c ", str[j]);        }
        printf("\n");
    }
return 0;
}
