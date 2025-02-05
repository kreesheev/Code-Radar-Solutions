#include <stdio.h>

int main() {
    int number, count = 0;
    scanf("%d", &number);

    for (int i = 31; i >= 0; i--) {
        if ((number >> i) & 1) {
            break;
        }
        count++;
    }

    printf("%d\n", count);
    return 0;
}
