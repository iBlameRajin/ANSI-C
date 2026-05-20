#include<stdio.h>
#include<string.h>
int main() {
    int n, m;
    char a[100];
    char b[100];
scanf("%s", a);
printf("Enter the starting position and number of characters: ");
    scanf("%d %d", &n, &m);
strncpy(b, a + (n - 1), m);
b[m] = '\0';   
printf("Stored string: %s", b);
return 0;
}
