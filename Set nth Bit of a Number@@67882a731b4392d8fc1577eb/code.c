#include <stdio.h>

int main() {
    int number, bit_position, result;
    scanf("%d%d", &number, &bit_position);
    result = number | (1 << bit_position);
    printf("%d\n", result);
    return 0;
}
