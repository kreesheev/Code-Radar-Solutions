#include <stdio.h>

int main() {
    int number, bit_position, bit_value;
    scanf("%d%d", &number, &bit_position);
    bit_value = (number >> bit_position) & 1;
    printf("%d\n", bit_value);
    return 0;
}
