#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);

    int position = 0;

    while (!(number & 1)) {
        number >>= 1;
        position++;
    }

    printf("%d\n", position);
    return 0;
}
