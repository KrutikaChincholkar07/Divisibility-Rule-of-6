#include <stdio.h>

int main() {
    int num, sum = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    int div2 = (num % 2 == 0);

    temp = num;
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }

    int div3 = (sum % 3 == 0);

    if (div2 && div3)
        printf("%d is divisible by 6", num);
    else
        printf("%d is not divisible by 6", num);

    return 0;
}
