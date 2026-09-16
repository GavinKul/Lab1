
#include <stdio.h>

/* Function that prints the correct FizzBuzz output for one integer */
void fizzbuzz_single(int n) {
    if (n % 15 == 0) {
        printf("FizzBuzz\n");
    } else if (n % 3 == 0) {
        printf("Fizz\n");
    } else if (n % 5 == 0) {
        printf("Buzz\n");
    } else {
        printf("%d\n", n);
    }
}

int main() {
    int limit;

    printf("Enter an integer: ");
    scanf("%d", &limit);

    /* Loop from 1 to the entered number */
    for (int i = 1; i <= limit; i++) {
        fizzbuzz_single(i);
    }

    return 0;
}
