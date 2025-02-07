#include <stdio.h>
#include <limits.h> // For CHAR_BIT

int main() {
    int num;
    scanf("%d", &num);

    int bits = sizeof(int) * CHAR_BIT;

    int msb_mask = 1 << (bits - 1);

    if (num & msb_mask) {
        printf("Set\n");
    } else {
        printf("Not Set\n");
    }

    return 0;
}
