#include <stdio.h>

int main() {
    int count, i;
    float sum = 0, avg = 0, num;

    printf("Enter the number of elements: ");
    scanf("%d", &count);

    printf("Enter %d numbers:\n", count);
    for (i = 0; i < count; i++) {
        scanf("%f", &num);
        sum += num;
    }

    avg = sum / count;
    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}
