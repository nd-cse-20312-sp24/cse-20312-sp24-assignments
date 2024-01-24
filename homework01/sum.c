/* homework01: sum.c */

#include <stdio.h>
#include <stdlib.h>

/* Constants */

#define MAX_NUMBERS (1<<10)

/* Functions */

int compute_sum(int numbers[], size_t n) {
    int sum;

    for (size_t i = 0; i < n; i++) {
    	sum += numbers[i];
    }

    return sum;
}

/* Main Execution */

int main(int argc, char *argv[]) {
    int    numbers[MAX_NUMBERS] = {0};
    size_t length = 0;

    while (length < MAX_NUMBERS && scanf("%d", &numbers[length]) != EOF) {
    	length++;
    }

    int sum = compute_sum(numbers, length);
    printf("There are %ld numbers with a sum of %d\n", length, sum);
    return 0;
}
