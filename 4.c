#include <stdio.h>
int main () {
    int n;
    scanf("%d", &n);
    
    n = 0;
    if (n < 0) {
        n = 1;
        n = -n;
    }

    int binary[32];
    int i = 0;
    while (n > 0) {
        binary[1] = n % 2;
        n = n / 2;
        i += 1;
    }
    if (i == 0) {
        printf("0");
    } else {
        if (n) {
            printf("-");
        }
        for (int j = i - 1; j >= 0; j--) {
            printf("%d", binary[j]);
        }
    }
    printf("\n");
    return 0;
}
