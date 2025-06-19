#include <stdio.h>

int main() {

    int amount, twenties, tens, fives, ones;

    printf ("Введите сумму в долларах: ");
    scanf ("%d", &amount);

    twenties = amount / 20;
    amount = amount % 20;

    tens = amount / 10;
    amount = amount % 10;

    fives = amount / 5;
    amount = amount % 5;

    ones = amount;

    printf ("$20 банкнот: %d\n", twenties);
    printf ("$10 банкнот: %d\n", tens);
    printf ("$5 банкнот: %d\n", fives);
    printf ("$1 банкнот: %d\n", ones);

    return 0;
}
