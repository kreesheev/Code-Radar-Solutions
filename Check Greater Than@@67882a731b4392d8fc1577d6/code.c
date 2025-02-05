#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter two space-separated integers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
