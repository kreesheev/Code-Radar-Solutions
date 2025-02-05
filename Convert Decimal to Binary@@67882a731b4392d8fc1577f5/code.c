#include <stdio.h>

void print_binary(int number) {
    for (int i = 31; i >= 0; i--) {
        printf("%d", (number >> i) & 1);
    }
    printf("\n");
}

int main() {
    int number;
    scanf("%d", &number);
    print_binary(number);
    return 0;
}
