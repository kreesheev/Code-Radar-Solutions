#include <stdio.h>

int main() {
    int a, b, result;
    scanf("%d %d", &a, &b);
    result = a & b;
    printf("Result of bitwise AND: %d\n", result);
    return 0;
}
