#include <stdio.h>

void print_binary(int number) {
    if (number == 0) {
        printf("0");
        return;
    }

    unsigned int mask = 1 << 31; // Start with the highest bit for 32-bit numbers
    int leading_zero = 1;

    for (int i = 0; i < 32; i++) {
        if (number & mask) {
            leading_zero = 0;
            printf("1");
        } else if (!leading_zero) {
            printf("0");
        }
        mask >>= 1;
    }
    printf("\n");
}

int main() {
    int number;
    scanf("%d", &number);
    print_binary(number);
    return 0;
}
